/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computa��o gr�fica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/

#ifndef CAMERA_H
#define CAMERA_H

#include <QVector3D>
//Cria os aspectos do  campo de vis�o
class Camera {
public:
    Camera();

    QVector3D eye;
    QVector3D at;
    QVector3D up;
};
#endif // CAMERA_H
