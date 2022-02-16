#pragma once

#include "GL/freeglut.h"
#define _USE_MATH_DEFINES
#include<cmath>


struct Figure {
	float r, g, b;
};

void drawfunc();
void drawGrass(float z);
void drawVictory(float x, float y);
void drawCat(Figure fig);
void drawCat1(float x, float y, bool isRight, float a);
void drawChicken(float o, float p, float q, float w);
void drawE();
void drawHouse(float x, float y, float z, float c);
void drawHouse1();
void drawFon();
void drawQub();
void drawKomn();
void door();