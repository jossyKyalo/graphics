#include<windows.h>//for windows applications

#include<GL/glut.h>//glut header file

//header files for C++ program
#include<stdio.h>
#include <stdlib.h>
#include <math.h>

void init()
{
 glClearColor(0.0, 0.0, 0.0, 1.0);//background color
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D(-1.0, 1.0 , -1.0, 1.0); //2D object projection
}

void triangle(){
 glBegin(GL_TRIANGLES);//start of drawing 
  glColor3f(0, 0.0, 1.0); // Blue color schemes
  glVertex2f(0.0, 0.8);

  glColor3f(1.0, 0.0, 0.0); // Red
  glVertex2f(-0.6, 0.0);

  glColor3f(0.0, 1.0, 0.0); // Green
  glVertex2f(0.6, 0.0);
 glEnd();
}

void rectangle(){
	 glBegin(GL_QUADS);
    // Red
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.4, -0.6);

    // Orange
    glColor3f(1.0, 0.5, 0.0);
    glVertex2f(-0.4, 0.0);

    // Green
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.4, 0.0);

    // Blue
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.4, -0.6);
    glEnd();
}

void lines(){
	//red outline
	glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.4, -0.6);
    glVertex2f(-0.4, 0.0);
    glEnd();

   //green outline
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(-0.4, -0.6);
    glVertex2f(0.4, -0.6);
    glEnd();

   //blue outline
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.4, -0.6);
    glVertex2f(0.4, 0.0);
    glEnd();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT); //for putting the display window on the screen
	glutSwapBuffers();
	rectangle();
	lines();
	triangle();
	glFlush(); //for processing the OpenGL functions as quickly as possible
}

int main(int argc, char** argv) {
 
 glutInit(&argc, argv);//to initialize glut
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);//display mode
 glutInitWindowPosition(100,100);//image position
 glutInitWindowSize(500,500);//for window size
 
 glutCreateWindow("MY HUT");//window caption
 init();
  
 glutDisplayFunc(display);//calling the method for displaying the triangle in triangle function

 glGetError;
 glutMainLoop();// to complete the processing operations
 return 0; 
}

