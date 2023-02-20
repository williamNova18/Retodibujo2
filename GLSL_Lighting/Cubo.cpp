#include "Cubo.h"


void Cubo::DibujarCubo(float ANGULO, float xr, float yr, float zr, float x, float y, float z){
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(ANGULO, xr, yr, zr);
    glutSolidCube(1);
    glPopMatrix();
}
