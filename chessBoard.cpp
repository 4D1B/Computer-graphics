#define GLUT_DISABLE_ATEXIT_HACK
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <iostream>

void myDisplay(void)
{
    bool cool=true;


glPointSize(5.0);
int x =100;
int n=8;
int y=100;
////

for(int k=0;k<4;k++)
{
    x=100;
    y=100;
    for(int i=0;i<n;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
y=y+200;
n=n-2;
}

x=100;
 y=300;
for(int i=0;i<6;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
////
x=100;
 y=500;
for(int i=0;i<4;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
///
x=100;
 y=700;
for(int i=0;i<2;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}

x=300;
 y=100;
for(int i=0;i<6;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
////
x=500;
 y=100;
for(int i=0;i<4;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
//

x=700;
 y=100;
for(int i=0;i<2;i++){
if(cool==true)
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,255,255);
glBegin(GL_QUADS);
glVertex2i(x, y);
glVertex2i(x-100,y);
glVertex2i(x-100,y-100);
glVertex2i(x,y-100);
glEnd();
x=x+100;
y=y+100;

cool = false;
}
///






glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 800.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 800);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
