#-------------------------------------------------
#
# Project created by QtCreator 2021-10-13T14:03:27
#
#-------------------------------------------------

#Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
#Turma cc manha
#Projeto 2
#Computação gráfica
#Interactive Graphics Applications with OpenGL
#Shading Language and Qt

QT       += core gui opengl widgets


TARGET = myqtglproject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    trackball.cpp \
    camera.cpp \
    light.cpp \
    material.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    trackball.h \
    camera.h \
    light.h \
    material.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

OTHER_FILES += \
    textures/bricksNormal.png \
    textures/bricksDiffuse.png \
    shaders/vtexture.glsl \
    shaders/vphong.glsl \
    shaders/vnormal.glsl \
    shaders/vgouraud.glsl \
    shaders/ftexture.glsl \
    shaders/fphong.glsl \
    shaders/fnormal.glsl \
    shaders/fgouraud.glsl \
    objetos/x29_plane.off \
    objetos/volks.off \
    objetos/truncated_tetrahedron.off \
    objetos/truncated_octahedron.off \
    objetos/truncated_icosahedron.off \
    objetos/truncated_dodecahedron.off \
    objetos/truncated_cube.off \
    objetos/triangle.off \
    objetos/tetrahedron.off \
    objetos/tet3d.off \
    objetos/teapot.off \
    objetos/Sword01.off \
    objetos/sphere2.off \
    objetos/space_station.off \
    objetos/space_shuttle.off \
    objetos/snub_dodecahedron.off \
    objetos/snub_cube.off \
    objetos/rhombitruncated_icosidodecahedron.off \
    objetos/rhombitruncated_cubeoctahedron.off \
    objetos/rhombicuboctahedron.off \
    objetos/rhombicosidodecahedron.off \
    objetos/pear.off \
    objetos/octtorus.off \
    objetos/octahedron.off \
    objetos/mushroom.off \
    objetos/klingon.off \
    objetos/king.off \
    objetos/icosidodecahedron.off \
    objetos/icosahedron.off \
    objetos/house.off \
    objetos/helm.off \
    objetos/helix2.off \
    objetos/heart.off \
    objetos/head.off \
    objetos/goblet.off \
    objetos/epcot.off \
    objetos/dragon.off \
    objetos/dodecahedron.off \
    objetos/cuboctahedron.off \
    objetos/cube.off \
    objetos/cross.off \
    objetos/cone.off \
    objetos/boxtorus.off \
    objetos/boxcube.off \
    objetos/asu.off \
    objetos/apple.off \
    bricksNormal.png \
    bricksDiffuse.png \
    vtexture.glsl \
    vphong.glsl \
    vnormal.glsl \
    vgouraud.glsl \
    ftexture.glsl \
    fphong.glsl \
    fnormal.glsl \
    fgouraud.glsl
