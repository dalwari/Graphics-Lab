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

	int i=0;
    for (i = 0; i < steps; i++) {
        glVertex2i(x, y);
        x += xInc;
        y += yInc;
    }
    glEnd();
}
void circle() {
   glColor3f(0.0, 0.0, 0.0);
    glPointSize(6.0);
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

void wheel()
{
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(4.0);
    dda(150, 0,-150, 0);
    dda(0, 150, 0, -150);
    dda(105, 105, -105, -105);
    dda(-105, 105, 105, -105);
    dda(0, 150, 0, -150);
    circle();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
	//glutInitWindowSize(1366, 768);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("My wheel");
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-250, 250, -250, 250);
    glMatrixMode(GL_PROJECTION);
    //glViewport(0, 0, 500, 500);



    glutDisplayFunc(wheel);
    glutMainLoop();
    return 0;
}

