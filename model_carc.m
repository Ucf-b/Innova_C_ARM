clc;
clear;
close all;

%%%%%%%%% Positions initiales et finales à fournir %%%%%%%%% 
% Etat initial
x_n_i = 0;
y_n_i = 0;
z_n_i = 1;
r_3_i = 0;

% Etat final
x_n_f = 0;
y_n_f = 0;
z_n_f = -1;
r_3_f = 0;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Paramètres
R = 1; % Rayon du demi-cercle
n_points = 100; % Nombre de points pour l'arc de cercle
n_frames = 100; % Nombre d'images dans l'animation


% Normalisation du vecteur normal
n_norm_i = sqrt(x_n_i.^2 + y_n_i.^2 + z_n_i.^2);
n_norm_f = sqrt(x_n_f.^2 + y_n_f.^2 + z_n_f.^2);

% Calcul des coordonnées initiales et finales
x_i = r_3_i * x_n_i./n_norm_i;
y_i = r_3_i * y_n_i./n_norm_i;
z_i = r_3_i * z_n_i./n_norm_i;
x_f = r_3_f * x_n_f./n_norm_f;
y_f = r_3_f * y_n_f./n_norm_f;
z_f = r_3_f * z_n_f./n_norm_f;

% Fonction pour calculer les angles de rotation
function [theta1, theta2] = Analytic_derivatives(x, y, z)
    
    theta2 = asin(-y); % Calcul de theta2
    
    theta1 = atan2(x,z); % Calcul de theta1 (en fonction de z >= 0)
    
end

function [tf_max] = tf_max(q_i, q_f, dq_max, d2q_max)
    D = abs(q_f-q_i);
    tf_max = max(15*D/(8*abs(dq_max)),sqrt(10*D/(sqrt(3)*abs(d2q_max))));
end

% Calcul des angles initiaux et finaux
[theta1_i, theta2_i] = Analytic_derivatives(x_n_i, y_n_i, z_n_i);
[theta1_f, theta2_f] = Analytic_derivatives(x_n_f, y_n_f, z_n_f);

dtheta_max = 0.5;
d2theta_max = 0.5;

% Calcul du temps d'interpolation
tf_theta1 = tf_max(theta1_i, theta1_f, dtheta_max, d2theta_max);
tf_theta2 = tf_max(theta2_i, theta2_f, dtheta_max, d2theta_max);
tfs = [tf_theta1, tf_theta2];
t_f = max(tfs);

% Générer les coordonnées du demi-cercle initial dans le plan ez-ex
theta_initial = linspace(0, pi, n_points); % Angle du demi-cercle de 0 à pi
x_initial = zeros(1, n_points); % Coordonnée x sur l'arc de cercle
y_initial = R * sin(theta_initial); % Coordonnée y
z_initial = R * cos(theta_initial); % Coordonnée z

% Temps interpolé
t_i = 0;
t_interp = linspace(t_i, t_f, n_frames);

% Interpolation d'ordre 3 (S-curve)
angle_interpole_1 = theta1_i + (theta1_f - theta1_i)* (10 * (t_interp / t_f).^3 - 15 * (t_interp/t_f).^4 + 6 *(t_interp/t_f).^5);
angle_interpole_2 = theta2_i + (theta2_f - theta2_i)* (10 * (t_interp / t_f).^3 - 15 * (t_interp/t_f).^4 + 6 *(t_interp/t_f).^5);
translation_factor = (10 * (t_interp / t_f).^3 - 15 * (t_interp/t_f).^4 + 6 *(t_interp/t_f).^5);


% Matrices de rotation
rotation_y = @(theta) [cos(theta), 0, sin(theta); 0, 1, 0; -sin(theta), 0, cos(theta)]; % Rotation autour de l'axe y
rotation_x = @(theta) [1, 0, 0; 0, cos(theta), -sin(theta); 0, sin(theta), cos(theta)]; % Rotation autour de l'axe x



% Créer une figure pour afficher l'animation
figure;
figure('Position', [100, 100, 1200, 800]);  % Fenêtre plus grande
axis equal;
hold on;
xlabel('X');
ylabel('Y');
zlabel('Z');
grid on;

% Changer la couleur de fond en gris (ou noir)
set(gca, 'Color', 'w'); % Fond gris foncé

% Définir les limites de la scène
xlim([-2*R, 2*R]);
ylim([-2*R, 2*R]);
zlim([-2*R, 2*R]);

% Changer la couleur du quadrillage pour un meilleur contraste
set(gca, 'GridColor', 'b'); % Quadrillage blanc
set(gca, 'MinorGridColor', 'w'); % Quadrillage mineur blanc
set(gca, 'MinorGridLineStyle', '--'); % Lignes mineures en pointillé

% Créer les carrés à afficher avec le plan
side_length = 0.5; % Longueur du côté du carré
half_side = side_length / 2; % Moitié de la longueur du côté

% Créer un cylindre représentant la base fixe
[base_x, base_y, base_z] = cylinder(R, 30); % Cylindre avec un rayon R et 30 points pour la base

% Étirement du cylindre dans la direction Z
base_z = base_z * 0.5; % Hauteur du cylindre (exemple : 0.5)

% Déplacement du cylindre pour le positionner à z = -1 (au sol)
base_z = base_z - 1;

% Afficher le cylindre à la base
h_base = surf(base_x, base_y, base_z, 'FaceColor', [0.6, 0.6, 0.6], 'EdgeColor', 'none', 'FaceAlpha', 0.7);
hold on;


% Afficher un arc de cercle en 3D pour chaque angle interpolé
for i = 1:n_frames
    % Rotation autour de l'axe y (premier angle)
    rot_matrix_y = rotation_y(angle_interpole_1(i));
    
    % Rotation autour de l'axe x (deuxième angle)
    rot_matrix_x = rotation_x(angle_interpole_2(i));
    
    % Matrice totale de rotation (combinée)
    rot_matrix_total = rot_matrix_x * rot_matrix_y; % Appliquer les deux rotations
    
    % Calculer les coordonnées de l'arc de cercle après rotation
    coords = rot_matrix_total * [x_initial; y_initial; z_initial];
    
    % Extraire les coordonnées
    x_rot = coords(1, :);
    y_rot = coords(2, :);
    z_rot = coords(3, :);
    
    % Calcul des extrémités de l'arc (au début et à la fin de l'arc)
    start_point = rot_matrix_total * [x_initial(1); y_initial(1); z_initial(1)];
    end_point = rot_matrix_total * [x_initial(end); y_initial(end); z_initial(end)];
    
    % Calculer le vecteur directionnel de l'axe des trois carrés
    direction = end_point - start_point;
    direction = direction / norm(direction); % Normalisation du vecteur directionnel
    
    % Interpolation pour translater les carrés
    % Déplacer le carré rouge de r_3_i à r_3_f
    translated_start = start_point + r_3_i * direction + translation_factor(i) * (r_3_f - r_3_i) * direction;
    
    % Calcul du carré rouge : déplacer sur l'axe directionnel
    square_rotated_start = (rot_matrix_total * [
        -half_side, -half_side, 0;
        half_side, -half_side, 0;
        half_side, half_side, 0;
        -half_side, half_side, 0
    ]')';
    square_rotated_start = square_rotated_start + repmat(translated_start(1:3)', 4, 1);
    
   % Calcul du carré vert : placé constamment au centre entre les carrés rouge et bleu
    % Toujours à mi-chemin entre le carré rouge (translated_start) et le carré bleu (end_point)
    center_point = (translated_start + end_point) / 2; % Calcul du centre dynamique entre le rouge et le bleu
    square_rotated_center = (rot_matrix_total * [
        -half_side, -half_side, 0;
        half_side, -half_side, 0;
        half_side, half_side, 0;
        -half_side, half_side, 0
    ]')';
    square_rotated_center = square_rotated_center + repmat(center_point(1:3)', 4, 1);

    
    % Calcul du carré bleu : déplacé sur l'axe directionnel jusqu'à r_3_f
    square_rotated_end = (rot_matrix_total * [
        -half_side, -half_side, 0;
        half_side, -half_side, 0;
        half_side, half_side, 0;
        -half_side, half_side, 0
    ]')';
    square_rotated_end = square_rotated_end + repmat(end_point(1:3)', 4, 1);
    
    % Effacer uniquement les objets dans les axes pour l'animation (et non la figure entière)
    cla;
    hold on;
    
    % Plot de l'arc de cercle actuel dans l'espace 3D
    plot3(x_rot, y_rot, z_rot, 'LineWidth', 2, 'Color', 'b');
    
    % Plot des trois carrés représentant les plans
    fill3(square_rotated_start(:,1), square_rotated_start(:,2), square_rotated_start(:,3), 'r', 'FaceAlpha', 0.5); % Carré rouge
    fill3(square_rotated_center(:,1), square_rotated_center(:,2), square_rotated_center(:,3), 'g', 'FaceAlpha', 0.5); % Carré vert
    fill3(square_rotated_end(:,1), square_rotated_end(:,2), square_rotated_end(:,3), 'b', 'FaceAlpha', 0.5); % Carré bleu
    
    % Réajuster l'affichage des axes
    xlim([-2*R, 2*R]);
    ylim([-2*R, 2*R]);
    zlim([-2*R, 2*R]);
    
    % Ajouter un titre et les labels
    title('Robot');
    xlabel('X');
    ylabel('Y');
    zlabel('Z');
    
    % Mettre à jour la vue 3D avec une perspective classique
    view(3); % Vue 3D standard
    
    % Activer les axes et la grille
    axis on; % Affiche les axes
    grid on; % Active la grille 3D
    
    % Pause pour rendre l'animation fluide
    pause(0.05);
end
