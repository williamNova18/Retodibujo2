#include "Teteras.h"

void Teteras::DibujarTeteras( float x, float y, float z) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidTeapot(0.5);
    glPopMatrix();
}
