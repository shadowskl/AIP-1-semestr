#include "GL/freeglut.h"
#define _USE_MATH_DEFINES
#include<cmath>
#include"drawLibZgu.h"



float pos_x = 0;
float pos_y = 0;
bool isRight = true;
bool isGetFlower[3] = { false, false, false };


int countChicken = 0;
bool Victory = false;
float angle = 0.0;
float chickenX = -0.75, chickenY = -0.2;

void renderScene(void);
void processKeys(unsigned char key, int x, int y); 

int main(int argc, char* argv[])
{
	srand(10);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Lesson - Basic Forms");
	glutDisplayFunc(renderScene);
	glutKeyboardFunc(processKeys);
	glutMainLoop();
	return 0;
}

void renderScene(void) {
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
		
	drawFon();

	Figure Cat;
	Cat.r = .8; Cat.g = .2; Cat.b = 0;
	drawCat(Cat);
	
	drawHouse1();

	for (float i = 0.1; i < 1.8; i += 0.1) {
		drawGrass(-.2+i);
	}
	drawCat1(pos_x, pos_y, isRight, angle);

	if (isGetFlower[0] && isGetFlower[1] && isGetFlower[2])
		drawChicken(chickenX, chickenY, 0.1, 0.1);
	
	if (!isGetFlower[0]&&!isGetFlower[1] && !isGetFlower[2])
		drawChicken(-1.5,-1,0,0);
	if (!isGetFlower[1]&& isGetFlower[2])
		drawChicken(-.4, -.8, 0, 0);
	if (!isGetFlower[2]&& isGetFlower[0])
		drawChicken(0, -.3, 0, 0);

	if ((countChicken >= 4) && (countChicken <= 15))
		drawE();
	if ((countChicken >= 12) && (countChicken <= 16))
		drawHouse(0,0,0.65,0);		
	if ((countChicken >= 20))
		drawE();
	if (countChicken == 23)
	{
		Victory = true;
		door();
	}
	if((countChicken==23) && (pos_x >= -0.75) && (pos_x <= -0.65) && (pos_y >= -0.4) && (pos_y <= -0.3))
	{
		pos_x = 0;
		pos_y = -0.1;
		glScalef(0.5, 0.5, 1);
		countChicken = countChicken+1;
	}
	if (countChicken >= 25)
	{
		exit(0);
	}
	if(countChicken>=23)
		drawVictory(-.2, 0.55);

	glutSwapBuffers();
	glPopMatrix();

}
void processKeys(unsigned char key, int x, int y) {

	if (key == 100 || key == 68) 
	{
		pos_x = pos_x + 0.1;
		isRight = true;
	}
	if (key == 113) 
	{
		angle -= 1;
	}
	if (key == 101) 
	{
		angle = angle + 1;
	}
	if (key == 97) 
	{
		pos_x = pos_x - 0.1;
		isRight = true;
	}
	if (key == 119)
	{
		pos_y = pos_y + 0.1;
		isRight = true;
	}
	if (key == 115)
	{
		pos_y = pos_y - 0.1;
		isRight = true;
	}
	if (key == 13)
		exit(0); // close app

	if (pos_y>0.2)
		 pos_y=0.15;
	if (pos_y < -.86)
		pos_y = -0.85;
	if (pos_x > 1)
		pos_x = 1;
	if (pos_x < -1)
		pos_x = -1;

	if((pos_x <= -0.7) && (pos_y <= -0.7) && (pos_y >= -0.8) && (pos_x >=-0.8))
	{
		isGetFlower[0] = true;
	}
	
	if(countChicken<23){
		if (isGetFlower[0] && isGetFlower[1] && isGetFlower[2])
	{
		if ((pos_x >= chickenX + .8) && (pos_x <= chickenX + 1) && (pos_y <= chickenY + 0.5) && (pos_y >= chickenY + .2))
		{
			countChicken++;
			chickenX = 1.4 * (float)rand() / RAND_MAX - 1.6;	//право, лево
			chickenY = 0.9 * (float)rand() / RAND_MAX - 1.1;	//верх, низ
		}
	}
	}

	if ((pos_x <= .4) && (pos_y >= -.6) && (pos_x >= .3) && (pos_y <= -.5))
	{
		isGetFlower[1] = true;
	}
	if ((pos_x >=0.6) && (pos_y >= -.25) && (pos_x < 0.7) && (pos_y < 0.2))
	{
		isGetFlower[2] = true;
	}		
	glutPostRedisplay(); // отрисовка
}