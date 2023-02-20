#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cubo
{
public:
	Cubo() {};
	void DibujarCubo(float ANGULO, float xr, float yr, float zr, float x, float y, float z);
};

