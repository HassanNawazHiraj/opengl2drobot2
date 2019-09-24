
#include <iostream>
#include <GL/freeglut.h>

void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

void drawSquare(bool filled, int lineSize = 1) {
	glLineWidth(lineSize);
	if (filled) {
		glBegin(GL_QUADS);
	}
	else {
		glBegin(GL_LINE_LOOP);
	}
	
	glVertex3f(1.0,1.0,0.0);
	glVertex3f(1.0, -1.0, 0.0);
	glVertex3f(-1.0, -1.0, 0.0);
	glVertex3f(-1.0, 1.0, 0.0);
	glEnd();
}

void drawCircle(bool filled) {
	const float PI = 3.14159;
	if (filled) {
		glBegin(GL_TRIANGLE_FAN);
	}
	else {
		glBegin(GL_LINE_LOOP);
	}
	for (int i = 0; i < 60; i++) {
		float theta = i * (2.0f * PI / 30);
		float x = 1 * cos(theta);
		float y = 1 * sin(theta);
		glVertex2f(x + 0, y + 0);
	}
	glEnd();
}

void filledColor() {
	glColor3ub(255, 166, 106);
}

void lineColor() {
	glColor3ub(255, 127, 39);
}

void boxColor1() {
	glColor3ub(251, 199, 121);
}

void boxColor2() {
	glColor3ub(249, 160, 123);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	//center box
	lineColor();
	glScalef(3, 3, 0);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glScalef(3, 3, 0);
	glRotatef(2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glScalef(3, 3, 0);
	glRotatef(-2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	//left filled box

	boxColor1();
	glTranslatef(-3.3, 2.3, 0);
	glScalef(0.3, 0.6, 0);
	glRotatef(-10, 0, 0, 1);
	drawSquare(true);
	glLoadIdentity();

	boxColor2();
	glTranslatef(-3.3, 2.3, 0);
	glScalef(0.3, 0.6, 0);
	glRotatef(10, 0, 0, 1);
	drawSquare(true);
	glLoadIdentity();


	filledColor();
	glTranslatef(-3.3, 2.3, 0);
	glScalef(0.3, 0.6,0);
	drawSquare(true);
	glLoadIdentity();



	//left non-filled box
	lineColor();
	glTranslatef(-3.9, 0, 0);
	glScalef(0.3, 3, 0);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(-3.9, 0, 0);
	glScalef(0.3, 3, 0);
	glRotatef(-2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(-3.9, 0, 0);
	glScalef(0.3, 3, 0);
	glRotatef(2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	//right filled box
	boxColor1();
	glTranslatef(3.3, 2.3, 0);
	glScalef(0.3, 0.6, 0);
	glRotatef(-10, 0, 0, 1);
	drawSquare(true);
	glLoadIdentity();

	boxColor2();
	glTranslatef(3.3, 2.3, 0);
	glScalef(0.3, 0.6, 0);
	glRotatef(-10, 0, 0, 1);
	drawSquare(true);
	glLoadIdentity();

	filledColor();
	glTranslatef(3.3, 2.3, 0);
	glScalef(0.3, 0.6, 0);
	drawSquare(true);
	glLoadIdentity();

	//left non-filled box
	lineColor();
	glTranslatef(3.9, 0, 0);
	glScalef(0.3, 3, 0);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(3.9, 0, 0);
	glScalef(0.3, 3, 0);
	glRotatef(2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(3.9, 0, 0);
	glScalef(0.3, 3, 0);
	glRotatef(-2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	//legs
	lineColor();
	glTranslatef(-2.0, -6, 0);
	glScalef(0.3, 3, 0);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(-2.0, -6, 0);
	glScalef(0.3, 3, 0);
	glRotatef(-2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(-2.0, -6, 0);
	glScalef(0.3, 3, 0);
	glRotatef(2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();


	//2


	lineColor();
	glTranslatef(2.0, -6, 0);
	glScalef(0.3, 3, 0);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(2.0, -6, 0);
	glScalef(0.3, 3, 0);
	glRotatef(2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	lineColor();
	glTranslatef(2.0, -6, 0);
	glScalef(0.3, 3, 0);
	glRotatef(-2, 0, 0, 1);
	drawSquare(false);
	glLoadIdentity();

	//diamond
	boxColor1();
		glTranslatef(0.0, 4.4, 0);
		glRotatef(45, 0, 0, 1);
		drawSquare(true);
		glLoadIdentity();

		boxColor2();
		glTranslatef(0.0, 4.4, 0);
		glRotatef(45+20, 0, 0, 1);
		drawSquare(true);
		glLoadIdentity();

		filledColor();
		glTranslatef(0.0, 4.4, 0);
		glRotatef(45-20, 0, 0, 1);
		drawSquare(true);
		glLoadIdentity();
	
		//face circle
		lineColor();
		glTranslatef(0, 7.2, 0);
		glScalef(1.5, 1.5, 0);
		drawCircle(false);
		glLoadIdentity();

		//eyes
		filledColor();
		glTranslatef(-0.6, 7.3, 0);
		glScalef(0.3, 0.5, 0);
		drawCircle(true);
		glLoadIdentity();

		filledColor();
		glTranslatef(0.6, 7.3, 0);
		glScalef(0.3, 0.5, 0);
		drawCircle(true);
		glLoadIdentity();

		//ears
		lineColor();
		glTranslatef(-1.79, 7.3, 0);
		glScalef(0.3, 0.3, 0);
		drawCircle(false);
		glLoadIdentity();

		filledColor();
		glTranslatef(1.79, 7.3, 0);
		glScalef(0.3, 0.3, 0);
		drawCircle(false);
		glLoadIdentity();



	//glColor3f(0, 1, 0);
	//glPointSize(10);
	//glBegin(GL_POINTS);
	//glVertex3f(0.0, 0.0,0);
	//glEnd();

	glutSwapBuffers();
}





int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Assignment 2");

	init();

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

