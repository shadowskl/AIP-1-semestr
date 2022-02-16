#include"drawLibZgu.h"



void drawfunc() {//матем функция
	glPushMatrix();
	glScaled(0.1, 0.1, 0);
	glBegin(GL_LINES);

	glVertex2d(-10, 0);
	glVertex2d(10, 0);

	glVertex2d(0, 10);
	glVertex2d(0, -10);

	for (float i = 0; i < 2 * M_PI; i += 0.1) {
		glColor3f(.7, .8, .3);
		glVertex2f(2 * cos(3 * i), 2 * sin(3 * i));
	}

	glEnd();

	glPopMatrix();
}

void drawGrass(float z) {
	glPushMatrix();
	glTranslatef(z+0.1, -.4, 0);
	glBegin(GL_TRIANGLES);
	glColor3f(.36, .63, .18);		//трава
	glVertex2f(-1, -.6);
	glVertex2f(-0.8, -0.5);
	glVertex2f(-.6, -.6);
	glEnd();

	glPopMatrix();
}

void drawCat(Figure fig) {

	glPushMatrix();
	glBegin(GL_TRIANGLES);
	glColor3f(fig.r, fig.g, fig.b);		//тело 
	glVertex2f(0.2, -0.3);
	glColor3f(fig.r, fig.g, fig.b);
	glVertex2f(-0.2, -0.3);
	glColor3f(fig.r, fig.g, fig.b);
	glVertex2f(0, 0.3);

	glColor3f(fig.r, fig.g, fig.b);		//голова
	glVertex2f(0, 0.3);
	glColor3f(fig.r, fig.g, fig.b);
	glVertex2f(-0.2, 0.5);
	glColor3f(fig.r, fig.g, fig.b);
	glVertex2f(0.2, 0.5);

	glColor3f(fig.r, fig.g, fig.b);		//хвост
	glVertex2f(.2, -0.3);
	glColor3f(fig.r - .2, fig.g - .2, fig.b - .1);
	glVertex2f(0.4, -.1);
	glColor3f(fig.r - .5, fig.g - .1, fig.b - .3);
	glVertex2f(0.4, .2);

	glColor3f(.8, .1, .8);		//ухо левое 
	glVertex2f(-.1, 0.5);
	glColor3f(.4, .2, .3);
	glVertex2f(-0.2, 0.5);
	glColor3f(.2, .6, .5);
	glVertex2f(-.15, 0.6);

	glColor3f(.8, .1, .8);		//yxo правое
	glVertex2f(-.1 + .3, 0.5);
	glColor3f(.4, .2, .3);
	glVertex2f(-0.2 + .3, 0.5);
	glColor3f(.2, .6, .5);
	glVertex2f(-.15 + .3, 0.6);

	glEnd();
	glPopMatrix();
}

void drawCat1(float x, float y, bool isRight, float a) {

	glPushMatrix();
	glTranslatef(x, y, 0);
	glRotatef(0-a,0,0,1);
	glScalef(0.5, 0.5, 1);
	glBegin(GL_TRIANGLES);
	glColor3f(.2, .2, .1);		//тело 
	glVertex2f(0.2, -0.3);
	glColor3f(.2, .2, .1);
	glVertex2f(-0.2, -0.3);
	glColor3f(.2, .2, .1);
	glVertex2f(0, 0.3);

	glColor3f(.2, .2, .1);		//голова
	glVertex2f(0, 0.3);
	glColor3f(.2, .2, .1);
	glVertex2f(-0.2, 0.5);
	glColor3f(.2, .2, .1);
	glVertex2f(0.2, 0.5);

	glColor3f(.2, .2, .1);		//хвост
	glVertex2f(.2, -0.3);
	glColor3f(.2, .2, .1);
	glVertex2f(0.4, -.1);
	glColor3f(.5, .1, .3);
	glVertex2f(0.4, .2);

	glColor3f(.8, .1, .8);		//ухо левое 
	glVertex2f(-.1, 0.5);
	glColor3f(.4, .2, .3);
	glVertex2f(-0.2, 0.5);
	glColor3f(.2, .6, .5);
	glVertex2f(-.15, 0.6);

	glColor3f(.8, .1, .8);		//yxo правое
	glVertex2f(.2, 0.5);
	glColor3f(.4, .2, .3);
	glVertex2f(0.1, 0.5);
	glColor3f(.2, .6, .5);
	glVertex2f(.15, 0.6);

	glEnd();
	glPopMatrix();
}


void drawVictory(float x, float y) {
	glPushMatrix();
	glTranslatef(x, y, 0);
	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
	glVertex2f(0, 0);
	glVertex2f(.4, 0);
	glVertex2f(.4, .1);
	glVertex2f(0, .1);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 1);
	glVertex2f(0, .1);
	glVertex2f(.1, .2);
	glVertex2f(.1, .1);
	
	glColor3f(0, 1, 1);
	glVertex2f(.1, .1);
	glVertex2f(.2, .2);
	glVertex2f(.3, .1);

	glColor3f(0, 1, 1);
	glVertex2f(.3,.1);
	glVertex2f(.3,.2);
	glVertex2f(.4,.1);
	glEnd();

	glPopMatrix();
	}



void drawChicken(float o, float p, float q, float w) {
	
	glPushMatrix();
	glTranslated(q, w, 0);

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);	//тело
	glVertex2f(.9 + o, .1 + p);
	glVertex2f(.6 + o, .1 + p);
	glVertex2f(.6 + o, .3 + p);
	glVertex2f(.9 + o, .3 + p);

	glColor3f(1, 1, 1);	//шея
	glVertex2f(.6 + o, .3 + p);
	glVertex2f(.6 + o, .45 + p);
	glVertex2f(.7 + o, .45 + p);
	glVertex2f(.7 + o, .3 + p);

	glColor3f(0, 0, 0);	//глаз
	glVertex2f(.62 + o, .36 + p);
	glVertex2f(.62 + o, .4 + p);
	glVertex2f(.66 + o, .4 + p);
	glVertex2f(.66 + o, .36 + p);

	glColor3f(0.98, .66, 0);	//лапы
	glVertex2f(.75 + o, 0 + p);
	glVertex2f(.75 + o, .1 + p);
	glVertex2f(.8 + o, .1 + p);
	glVertex2f(.8 + o, 0 + p);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1, .2, .2);	//клюв
	glVertex2f(.6 + o, .5 - .1 + p);
	glVertex2f(.6 + o, .4 - .1 + p);
	glVertex2f(.55 + o, .45 - .1 + p);

	glColor3f(1, .2, .2);	//крыло
	glVertex2f(.85 + o, .25 + p);
	glVertex2f(.7 + o, .25 + p);
	glVertex2f(.8 + o, .15 + p);

	glEnd();

	glPopMatrix();
}

void drawE() {
	glPushMatrix();

	glTranslatef(-.1, 0, 0);

	glBegin(GL_QUADS);
	glColor3f(.4, 0, .04);
	glVertex2f(.3, 0);
	glVertex2f(.3, .1);
	glVertex2f(.4, .1);
	glVertex2f(.4, 0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(.13, .55, .13);
	glVertex2f(.2, .1);
	glVertex2f(.35, .25);
	glVertex2f(.5, .1);

	glColor3f(.13, .55, .13);
	glVertex2f(.2, .1 + .1);
	glVertex2f(.35, .25 + .1);
	glVertex2f(.5, .1 + .1);

	glColor3f(.13, 0.55, .13);
	glVertex2f(.2, .1 + .2);
	glVertex2f(.35, .25 + .2);
	glVertex2f(.5, .1 + .2);

	glEnd();

	glPopMatrix();
}

void drawHouse(float x, float y, float z, float c) {
	glPushMatrix();
	glTranslated(z, c, 0);
	glBegin(GL_QUADS);
	glColor3f(.2, .6, .5);
	glVertex2f(0 + x, y);
	glVertex2f(.3 + x, 0 + y);
	glVertex2f(.3 + x, .2 + y);
	glVertex2f(0 + x, .2 + y);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(.8, .1, .8);		//крыша
	glVertex2f(.3 + x, .2 + y);
	glColor3f(.4, .2, .3);
	glVertex2f(0 + x, .2 + y);
	glColor3f(.2, .6, .5);
	glVertex2f(0.15 + x, 0.5 + y);
	glEnd();
	glPopMatrix();
}

void drawHouse1() {

	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(.8, .1, .8);		//dom
	glVertex2f(-1, 0.5);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.3, -0.5);
	glVertex2f(-1, -0.5);


	glColor3f(.1, .7, .8);		//window
	glVertex2f(-0.4, 0.1);
	glColor3f(.9, .5, .7);
	glVertex2f(-0.4, 0.3);
	glColor3f(.1, .7, .7);
	glVertex2f(-0.6, 0.3);
	glColor3f(.9, .2, .5);
	glVertex2f(-0.6, 0.1);

	glBegin(GL_QUADS);
	glColor3f(.1, .7, .8);		//дверь
	glVertex2f(-0.8, 0);
	glVertex2f(-0.5, 0);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.8, -0.5);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(.1, .3, .5);		//krisha
	glVertex2f(-1.1, 0.5);
	glVertex2f(-.65, 0.8);
	glVertex2f(-.2, 0.5);

	glColor3f(.9, .5, .8);		//window
	glVertex2f(-0.9, 0.2);
	glColor3f(.2, .2, .0);
	glVertex2f(-0.9, 0.4);
	glColor3f(.9, .5, .8);
	glVertex2f(-0.7, 0.4);
	glEnd();
	glPopMatrix();
}

void drawFon() {
	glBegin(GL_QUADS);
	glColor3f(.24, .4, .17);		//трава
	glVertex2f(-1, 0);
	glColor3f(.35, .2, .08);
	glVertex2f(1, 0);
	glColor3f(.35, .2, .08);
	glVertex2f(1, -1);
	glColor3f(.24, .4, .17);
	glVertex2f(-1, -1);
	
	glColor3f(.843, .843, .843);		//небо
	glVertex2f(-1, 1);
	glColor3f(.1, .45, .82);
	glVertex2f(1, 1);
	glColor3f(.1, .45, .82);
	glVertex2f(1, 0);
	glColor3f(.1, .45, .82);
	glVertex2f(-1, 0);
	
	glColor3f(.4, .4, .4);		//дорожка
	glVertex2f(-.8, -.75);
	glVertex2f(-.5, -.75);
	glVertex2f(-.5, -.45);
	glVertex2f(-.8, -.45);

	glColor3f(.4, .4, .4);
	glVertex2f(1, -.75);	//дорожка
	glVertex2f(-.8, -.75);
	
	glVertex2f(-.5, -.55);
	glVertex2f(1,-.55);

	glEnd();

}


void drawQub() {
	glPushMatrix();
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
	glVertex2f(-.1, 0);
	glVertex2f(.1, 0);
	glVertex2f(.1, .2);
	glVertex2f(-.1, .2);
	glEnd();
	glPopMatrix();
}
void drawKomn() {
	glBegin(GL_QUADS);
	glColor3f(1, .7, .03);		//комната
	glVertex2f(0, 0);//-0.8
	glVertex2f(-0.5, 0);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.8, -0.5);
	glEnd();
}
void door()	{
	glBegin(GL_QUADS);
	glColor3f(.4, .2, .3);		//дверь
	glVertex2f(-0.8, 0);
	glVertex2f(-0.5, 0.1);
	glVertex2f(-0.5, -0.6);
	glVertex2f(-0.8, -0.5);
	glEnd(); 
}