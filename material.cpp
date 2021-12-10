/*

Alunos: Lucas Spartacus, Lucas Nascimento, Laura Cozzi,Rafael Schettino,  Stephanie Silva
Turma cc manha
Projeto 2
Computação gráfica
Interactive Graphics Applications with OpenGL
Shading Language and Qt
*/
#include "material.h"
//seta os materiais que caracterizam o objeto3D
Material::Material() {
    ambient = QVector4D(1.0, 1.0, 1.0, 1.0);
    diffuse = QVector4D(0.6, 0.6, 0.6, 1.0);
    specular = QVector4D(0.4, 0.4, 0.4, 1.0);
    shininess = 200.0;
}
