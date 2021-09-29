#include <GL/glut.h>
#include<math.h>
void init()
{
    glClearColor(1,1,1,1);
    glMatrixMode(GL_PROJECTION);
    // glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void display() {
 float theta;
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0,1,0);
  glBegin(GL_POLYGON);
 //glBegin(GL_LINES);
 int i=0;
 for(i=0;i<360;++i)
 {
     theta=i*3.142/180;
     glVertex2f(250+150*cos(theta),250+150*sin(theta));
 }
 glEnd();
  glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
      glutInitWindowSize(500,500);
       glutCreateWindow("Testing Prog");
         init();
     
    glutDisplayFunc(display);
    glutMainLoop();
}
