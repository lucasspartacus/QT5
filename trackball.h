/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#ifndef TRACKBALL_H
#define TRACKBALL_H

#include <QVector3D>
#include <QQuaternion>
#include <QTime>

#include <cmath>
//Cria os aspectos de moviemtação do objeto 3D
class TrackBall {
public:
    TrackBall();
    void mouseMove(const QPointF & p);
    void mousePress(const QPointF & p);
    void mouseRelease(const QPointF & p);
    void resizeViewport(int width, int height);
    QQuaternion getRotation();

private:
    QQuaternion rotation;
    QVector3D axis;
    double velocity;

    QVector3D lastPos3D;
    QTime lastTime;
    bool trackingMouse;

    double viewportWidth;
    double viewportHeight;

    const double rad2deg;

    QVector3D mousePosTo3D(const QPointF & p);
};

#endif
