%%%%%%%%% Positions initiales et finales à fournir %%%%%%%%%

x_i = 1;
y_i = 0;
z_i = 0;

x_f = 1;
y_f = 1;
z_f = 1;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%Calcul du temps pour respecter les contraintes de vitesse et
%d'accéleration
function [tf_max] = tf_max(q_i, q_f, dq_max, d2q_max)
    D = abs(q_f-q_i);
    tf_max = max(15*D/(8*abs(dq_max)),sqrt(10*D/(sqrt(3)*abs(d2q_max))));
end

%Determination analytique des positions articulaires
function [theta1, theta2] = Analytic_positions(x, y, z)
    theta2 = asin(-y);
    theta1 = atan2(x,z);
end

%Inversion des entrées
[theta1_i,theta2_i] = Analytic_positions(x_i,y_i,z_i);
[theta1_f,theta2_f] = Analytic_positions(x_f,y_f,z_f);

% Contrainte d'accélération et de vitesse
dtheta_max = 0.5;
d2theta_max = 0.5;

% Calcul du temps d'interpolation
tf_theta1 = tf_max(theta1_i, theta1_f, dtheta_max, d2theta_max);
tf_theta2 = tf_max(theta2_i, theta2_f, dtheta_max, d2theta_max);
tfs = [tf_theta1, tf_theta2];
t_f = max(tfs);

%Calcul de la trajectoire par interpolation
function q_out = Calcul_Trajectoire(x_i, y_i, z_i,x_f,y_f,z_f,t_f)

    t_interp = linspace(0, t_f, 10000);

    
    [theta1_i,theta2_i] = Analytic_positions(x_i,y_i,z_i);
    [theta1_f,theta2_f] = Analytic_positions(x_f,y_f,z_f);

    theta1 = theta1_i + (theta1_f - theta1_i)* (10 * (t_interp / t_f).^3 - 15 * (t_interp/t_f).^4 + 6 *(t_interp/t_f).^5);
    theta2 = theta2_i + (theta2_f - theta2_i)* (10 * (t_interp / t_f).^3 - 15 * (t_interp/t_f).^4 + 6 *(t_interp/t_f).^5);
    

    dtheta1_dt = gradient(theta1,t_interp);
    dtheta2_dt = gradient(theta2,t_interp);
    q_out = [dtheta1_dt' dtheta2_dt'];
 
end

t_interp = linspace(0, t_f, 10000);
q_out = Calcul_Trajectoire(x_i, y_i, z_i,x_f,y_f,z_f,t_f);

%Transformatio des sorties en signaux temporels
dtheta1.time = t_interp;  
dtheta1.signals.values = q_out(:,1); 
dtheta1.signals.dimensions = 1;

dtheta2.time = t_interp;  
dtheta2.signals.values = q_out(:,2); 
dtheta2.signals.dimensions = 1;
