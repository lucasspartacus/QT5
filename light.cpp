/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#include "light.h"
//seta os aspectos do luz usada no objeto 3D
Light::Light() {
    position = QVector4D(3.0, 3.0, 3.0, 0.0);
    ambient = QVector4D(0.1, 0.1, 0.1, 1.0);
    diffuse = QVector4D(0.9, 0.9, 0.9, 1.0);
    specular = QVector4D(0.9, 0.9, 0.9, 1.0);
}
