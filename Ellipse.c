#include <GL/glut.h>
void midptellipse(int rx,int ry,int xc,int yc)
{
    float dx,dy,d1,d2,x,y;
    x=0;
    y=ry;
    d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
    dx=2*ry*ry*x;
    dy=2*rx*rx*y;
    glClearColor(1.0,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,1);
    glPointSize(1.0);
    glBegin(GL_POINTS);
    while(dx<dy)
    {
        glVertex2i(x+xc,y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        if(d1<0)
        {
            x++;
            dx=dx+(2*ry*ry);
            d1=d1+dx+(ry*ry);
        }
        else
        {
            x++;
            y--;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d1=d1+dx-dy+(ry*ry);
        }
    }
    d2=((ry*ry)*((x+0.5)*(x+0.5)))+((rx*rx)*((y-1)*(y-1)))-(rx*rx*ry*ry);
    while(y>=0)
    {
        glVertex2i(x+xc,y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        if(d2>0)
        {
            y--;
            dy=dy-(2*rx*rx);
            d2=d2+(rx*rx)-dy;
        }
        else
        {
            y--;
            x++;
            dx=dx+(2*ry*ry);
            dy=dy-(2*rx*rx);
            d2=d2+dx-dy+(rx*rx);
        }
    }
      glEnd();
    glFlush();
}
void display() {
 midptellipse(200,160,0,0);
}
int main(int argc, char** argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(300, 300);
  glutInitWindowSize(600, 600);
  glutCreateWindow("Ellipse prog");
  gluOrtho2D(-600,600,-600,600);
  glutDisplayFunc(display);
  glutMainLoop();
  //return 0;
}
