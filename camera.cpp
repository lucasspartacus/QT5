/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#include "camera.h"
//seta os aspectos do  campo de visão
Camera::Camera() {
    eye = QVector3D(0.0, 0.0, 1.0);
    at = QVector3D(0.0, 0.0, 0.0);
    up = QVector3D(0.0, 1.0, 0.0);
}
