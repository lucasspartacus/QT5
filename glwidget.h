/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <iostream>
#include <fstream>
#include <limits>

#include <QWidget>
#include <QtOpenGL>

#include "trackball.h"
#include "camera.h"
#include "light.h"
#include "material.h"

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);
    virtual ~GLWidget();

public slots:
    void toggleBackgroundColor(bool toBlack);
    void showFileOpenDialog();
    void takeScreenshot();
    void animate();

signals:
     void statusBarMessage(QString ns);

private:
    void readOFFFile(const QString &fileName);
    void genNormals();
    void genTexCoordsCylinder();
    void genTangents();
    void createShaders();
    void destroyShaders();
    void createVBOs();
    void destroyVBOs();

    QPointF pixelPosToViewPos( const QPointF &p);

    unsigned int numVertices;
    unsigned int numFaces;
    QVector4D *vertices;
    QVector3D *normals;
    QVector2D *texCoords;
    QVector4D *tangents;
    unsigned int *indices;

    QGLBuffer *vboVertices;
    QGLBuffer *vboNormals;
    QGLBuffer *vboTexCoords;
    QGLBuffer *vboTangents;
    QGLBuffer *vboIndices;

    QGLShader *vertexShader;
    QGLShader *fragmentShader;
    QGLShaderProgram *shaderProgram;
    unsigned int currentShader;

     int texID[2];

     QMatrix4x4 projectionMatrix;
     QMatrix4x4 modelViewMatrix;

     Camera camera;
     Light light;
     Material material;

     TrackBall trackBall;

     double zoom;

     QTimer timer;

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void mouseMoveEvent(QMouseEvent * event);
    void mousePressEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
    void wheelEvent(QWheelEvent * event);
    void keyPressEvent(QKeyEvent * event);
};

#endif // GLWIDGET_H
