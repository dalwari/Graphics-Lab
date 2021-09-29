#include <stdio.h>
#include <stdlib.h>
#include<GL/glut.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void dda(int x1, int y1, int x2, int y2) {
    int steps, dx = x2 - x1, dy = y2 - y1;
    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    }
    else {
        steps = abs(dy);
    }
    float xInc = (float)dx / (float)steps;
    float yInc = (float)dy / (float)steps;
    float x = x1, y = y1;

    glBegin(GL_POINTS);
	int i;
    for (i = 0; i < steps; i++) {
        glVertex2i(x, y);
        x += xInc;
        y += yInc;
    }
    glEnd();
}


void circle() {
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    float r = 150;
    float a = 0, b = 0;
   
    float x = 0, y = r;
    float p = 1 - r;
    glBegin(GL_POINTS);
    glVertex2i(a + x, b + y);
    glVertex2i(a - x, b + y);
    glVertex2i(a + x, b - y);
    glVertex2i(a - x, b - y);
    glVertex2i(a + y, b + x);
    glVertex2i(a - y, b + x);
    glVertex2i(a + y, b - x);
    glVertex2i(a - y, b - x);
    while (x <= y)
    {
        if (p < 0) {
            p += 2 * (x + 1) + 1;
        }
        else {

            p += 2 * (x + 1) + 1 - 2 * (y - 1);
            y--;
        }
        x++;
        glVertex2i(a + x, b + y);
        glVertex2i(a - x, b + y);
        glVertex2i(a + x, b - y);
        glVertex2i(a - x, b - y);



        glVertex2i(a + y, b + x);
        glVertex2i(a - y, b + x);
        glVertex2i(a + y, b - x);
        glVertex2i(a - y, b - x);

    }
    glEnd();
    glFlush();
}

void romanclock()
{
   
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    
    //III
    dda(150, 0, 130, 0);
    dda(120, -5, 120, 5);
    dda(115, -5, 115, 5);
    dda(110, -5, 110, 5);


    //IX
    dda(-150, 0, -130, 0);
    dda(-120, 5, -120, -5);
    dda(-115, 5, -110, -5);
    dda(-110, 5, -115, -5);

    //XII
    dda(0, 150, 0, 130);
    
    dda(0, 110, 0, 120);
    dda(5, 110, 5, 120);
    dda(-7, 110, -2, 120);
    dda(-2, 110, -7, 120);


    //VI
    dda(0, -150, 0, -130);
    dda(-2, -120, -5, -110);
    dda(-2, -120, 3, -110);
    dda(6, -120, 6, -110);
    

    glPointSize(1.0);
    dda(62, 120, 70, 132);
    dda(120, 62, 132,70);

    dda(-62, 120, -70, 132);
    dda(-120, 62, -132, 70);

    dda(62, -120, 70, -132);
    dda(120, -62, 132, -70);

    dda(-62, -120, -70, -132);
    dda(-120, -62, -132, -70);


    //hour hand
    glPointSize(5.0);
    dda(0, 0, 45, 45);

    //minute hand
    glPointSize(4.0);
    dda(0, 0, 0, -80);

    //second hand
    glPointSize(2.0);
    dda(0, 0, -85, -85);
    
    
    circle();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("My Clock");



    glClearColor(1.5, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-250, 250, -250, 250);
    glMatrixMode(GL_PROJECTION);
   // glViewport(0, 0, 500, 500);



    glutDisplayFunc(romanclock);
    glutMainLoop();
    return 0;
}

