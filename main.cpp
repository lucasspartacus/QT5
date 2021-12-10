/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#include <QApplication>
#include <QGLFormat>
#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QGLFormat format = QGLFormat::defaultFormat();
    format.setSampleBuffers(true);
    format.setSamples(8);
    if (!format.sampleBuffers())
        qWarning("Multisample buffer is not supported.");
    QGLFormat::setDefaultFormat(format);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
