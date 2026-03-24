%%%%%%%%% Positions et vitesses initiales et finales à fournir %%%%%%%%% 
x_i = 1;
y_i = 0;
z_i = 0;

dx_i = 0;
dy_i = 0;
dz_i = 0;

x_f = -0.7;
y_f = 0.7;
z_f = 0;

dx_f = 0;
dy_f = 0;
dz_f = 0;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Calcul analytique des dérivées
function [theta1, theta2, r3, dtheta1_dt, dtheta2_dt, dr3_dt] = Inversion_Analytique(x, y, z, dx, dy, dz)
    r3 = sqrt(x^2 + y^2 + z^2);
    theta2 = asin(-y / r3);

    if z >= 0
        theta1 = atan(x / z);
    elseif x >= 0 
        theta1 = atan(-x / z) + pi/2;
    else
        theta1 = -atan(x / z) - pi/2;
    end

    % Dérivées analytiques
    dr3_dt = (dx * x + dy * y + dz * z) / r3;
    dtheta1_dt = sign(z) * (dx * z - x * dz) / (x^2 + z^2);
    dtheta2_dt = -(dy * r3 - dr3_dt * y) / (r3 * sqrt(x^2 + z^2));
end

% Calcul du temps d'interpolation maximum
function [tf_max] = tf_max(q_i, q_f, dq_max, d2q_max)
    D = abs(q_f-q_i);
    tf_max = max(15*D/(8*abs(dq_max)),sqrt(10*D/(sqrt(3)*abs(d2q_max))));
end


% Calcul des paramètres initiaux et finaux
[theta1_start, theta2_start, r3_start, dtheta1_start, dtheta2_start, dr3_start] = Inversion_Analytique(x_i, y_i, z_i, dx_i, dy_i, dz_i);
[theta1_end, theta2_end, r3_end, dtheta1_end, dtheta2_end, dr3_end] = Inversion_Analytique(x_f, y_f, z_f, dx_f, dy_f, dz_f);

% Définition des contraintes de vitesse et d'accélération
dr3_max = 10;
d2r3_max = 10;
dtheta_max = 0.5;
d2theta_max = 0.5;

% Calcul du temps final d'interpolation
t_r3 = tf_max(r3_start, r3_end, dr3_max, d2r3_max);
t_theta1 = tf_max(theta1_start, theta1_end, dtheta_max, d2theta_max);
t_theta2 = tf_max(theta2_start, theta2_end, dtheta_max, d2theta_max);
t_final = max([t_r3, t_theta1, t_theta2]);

% Génération des instants d'interpolation
t_interpol = linspace(0, t_final, 100);
dt = t_interpol(2) - t_interpol(1); % Pas de temps pour la dérivation

% Interpolation des valeurs des angles et de r3 (polynôme de degré 3)
%r3_interpol = r3_start + (r3_end - r3_start) * (3 * (t_interpol / t_final).^2 - 2 * (t_interpol / t_final).^3);
%theta1_interpol = theta1_start + (theta1_end - theta1_start) * (3 * (t_interpol / t_final).^2 - 2 * (t_interpol / t_final).^3);
%theta2_interpol = theta2_start + (theta2_end - theta2_start) * (3 * (t_interpol / t_final).^2 - 2 * (t_interpol / t_final).^3);

% Interpolation des valeurs des angles et de r3 (polynôme de degré 5)
theta1_interpol = theta1_start + (theta1_end - theta1_start)* (10 * (t_interpol / t_final).^3 - 15 * (t_interpol/t_final).^4 + 6 *(t_interpol/t_final).^5);
theta2_interpol = theta2_start + (theta2_end - theta2_start)* (10 * (t_interpol / t_final).^3 - 15 * (t_interpol/t_final).^4 + 6 *(t_interpol/t_final).^5);
r3_interpol = r3_start + (r3_end - r3_start) * (10 * (t_interpol / t_final).^3 - 15 * (t_interpol/t_final).^4 + 6 *(t_interpol/t_final).^5);

% Interpolation des valeurs de dtheta1_dt, dtheta2_dt et de dr3_dt (polynôme de degré 3)
% dtheta1_dt = (dtheta1_end - dtheta1_start) * (30 * ((t_interpol.^2) / (t_final.^3)) - 60 * ((t_interpol.^3) / (t_final.^4)) + 30 * ((t_interpol.^4) / (t_final.^5)))
% dtheta2_dt = (dtheta2_end - dtheta2_start) * (30 * ((t_interpol.^2) / (t_final.^3)) - 60 * ((t_interpol.^3) / (t_final.^4)) + 30 * ((t_interpol.^4) / (t_final.^5)))
% dr3_dt = (dr3_end - dr3_start) * (30 * ((t_interpol.^2) / (t_final.^3)) - 60 * ((t_interpol.^3) / (t_final.^4)) + 30 * ((t_interpol.^4) / (t_final.^5)))

% Calcul des vitesses (dérivée première)
dr3_dt = gradient(r3_interpol, dt);
dtheta1_dt = gradient(theta1_interpol, dt);
dtheta2_dt = gradient(theta2_interpol, dt);

% Calcul des accélérations (dérivée seconde)
d2r3_dt2 = gradient(dr3_dt, dt);
d2theta1_dt2 = gradient(dtheta1_dt, dt);
d2theta2_dt2 = gradient(dtheta2_dt, dt);

% Affichage des courbes
figure;
hold on;
grid on;

% Position
subplot(3, 1, 1);
plot(t_interpol, theta1_interpol, 'b', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('\theta_1 (rad)');
title('Évolution de \theta_1');
grid on;

subplot(3, 1, 2);
plot(t_interpol, theta2_interpol, 'r', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('\theta_2 (rad)');
title('Évolution de \theta_2');
grid on;

subplot(3, 1, 3);
plot(t_interpol, r3_interpol, 'g', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('r_3 (m)');
title('Évolution de r_3');
grid on;

% Vitesse
figure;
subplot(3, 1, 1);
plot(t_interpol, dtheta1_dt, 'b', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('d\theta_1/dt (rad/s)');
title('Vitesse angulaire de \theta_1');
grid on;

subplot(3, 1, 2);
plot(t_interpol, dtheta2_dt, 'r', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('d\theta_2/dt (rad/s)');
title('Vitesse angulaire de \theta_2');
grid on;

subplot(3, 1, 3);
plot(t_interpol, dr3_dt, 'g', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('dr_3/dt (m/s)');
title('Vitesse de r_3');
grid on;

% Accélération
figure;
subplot(3, 1, 1);
plot(t_interpol, d2theta1_dt2, 'b', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('d^2\theta_1/dt^2 (rad/s^2)');
title('Accélération angulaire de \theta_1');
grid on;

subplot(3, 1, 2);
plot(t_interpol, d2theta2_dt2, 'r', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('d^2\theta_2/dt^2 (rad/s^2)');
title('Accélération angulaire de \theta_2');
grid on;

subplot(3, 1, 3);
plot(t_interpol, d2r3_dt2, 'g', 'LineWidth', 1.5);
xlabel('Temps (s)');
ylabel('d^2r_3/dt^2 (m/s^2)');
title('Accélération de r_3');
grid on;
