/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computa��o gr�fica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#ifndef MATERIAL_H
#define MATERIAL_H

#include <QVector4D>
//seta os aspectos do  campo de vis�o
class Material {
public:
    Material();
    QVector4D ambient;
    QVector4D diffuse;
    QVector4D specular;
    double shininess;
};

# endif // MATERIAL_H
