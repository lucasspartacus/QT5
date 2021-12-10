/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#ifndef LIGHT_H
#define LIGHT_H

#include <QVector4D>
//Cria os aspectos da luz que sera usad no objeto 3D
class Light {
public:
    Light();

    QVector4D position;
    QVector4D ambient;
    QVector4D diffuse;
    QVector4D specular;
};

#endif // LIGHT_H
