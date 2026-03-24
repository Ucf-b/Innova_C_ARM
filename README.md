# README - Sujet 1: Génération de trajectoire et visualisation 3D

## Prérequis

- [MATLAB et Simulink](https://www.mathworks.com/products/matlab.html)
# (Pour la simulation 3D Simulink uniquement)
- [Robotics System Toolbox](https://www.mathworks.com/help/robotics/)
- [Simscape Multibody Toolbox](https://www.mathworks.com/products/simmechanics.html)

## Description

Ce projet MATLAB et Simulink permet de générer des trajectoires de vitesses angulaires pour le robot de radiologie, ainsi que de visualiser une simulation 3D de cette trajectoire sur MATLAB et sur Simulink. Il comprend plusieurs fichiers principaux:

- **Generation_trajectoire.slx** : Modèle Simulink permettant de générer les signaux des vitesses angulaires en fonction des positions initiales et finales.
- **generation_traj_vitesse.m** : Script MATLAB qui génère les signaux du Simulink.
- **model_carc.m** : Script MATLAB permettant de modifier les positions initiales et finales, et d'obtenir une simulation 3D MATLAB du C-Arm (inversion analytique).
- **Visualisation_numerique** : Script MATLAB permettant de modifier les positions initiales et finales, et d'obtenir une simulation 3D MATLAB du C-Arm (inversion numérique).
- **Interpolation.m** : Script MATLAB permettant de qui met en avant l'interpolation et les équations horaires suivant les positions initiales.

- **\Module_3D Simulink\Modele 3D.slx** : Simulink permettant la visualisation 3D avancée du Robot.
- **\Module_3D_Simulink\generation_traj.m** : Script Matlab permettant d'agir sur les positions initiales et finales du Modèle 3D.

## Utilisation

### Définition des positions initiales et finales

1. Ouvrir `model_carc.m` dans MATLAB.
2. Modifier les valeurs des positions initiales et finales selon les besoins.
3. Exécuter le script pour visualiser la simulation 3D.
(Faire de même pour Visualisation_numerique)

### Génération des vitesses angulaires

1. Ouvrir `generation_traj_vitesse.m` dans MATLAB.
2. Modifier les valeurs des positions initiales et finales selon les besoins et exécuter le programme.
3. Ouvrir `Generation_trajectoire.slx` dans Simulink.
4. Lancer la simulation pour obtenir les signaux des vitesses angulaires en sortie.

### Visualisation des interpolations

1. Ouvrir `Interpolation.m` dans MATLAB.
2. Modifier les valeurs des positions initiales et finales selon les besoins.
3. Lancer le code pour visualiser les résultats de l'interpolation

### Visualisation 3D Simulink
<!-- La visualisation n'est pas possible sur MATLAB Online -->
1. Ouvrir `\Module_3D_Simulink\generation_traj.m` dans MATLAB.
2. Modifier les valeurs des positions initiales et finales selon les besoins.
3. Exécuter le programme
4. Ouvrir `\Module_3D_Simulink\Modele_3D.slx` dans Simulink.
4. Lancer la simulation pour visualiser le modèle 3D du robot.


## Auteurs
Mathias TAN
Alexis LE PARCO
Salif BALLO
Youssef IBN SEDDIK

## Crédits

La simulation 3D est adaptée de [C-Arm and Table kinematic model](https://fr.mathworks.com/matlabcentral/fileexchange/171134-c-arm-and-table-kinematic-model) créé par [Luis Henry Gonzalez](https://fr.mathworks.com/matlabcentral/profile/authors/18213465).
Il est distribué sous licence MIT.

