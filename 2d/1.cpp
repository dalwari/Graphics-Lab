/*
Draw a figure as given in face.png and apply the following transformations to it and show output in each case and also final output.
(i) Scaling with (2,2) units
(ii) Rotation of 45 degrees with respect to centre point 
(iii) Translation of (5,2) units.
*/
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> pntX;
vector<int> pntY;
int transX, transY, option;
double scaleX, scaleY, radians;

// Plot eight points using circle's symmetrical property
void plot_point(int x, int y, int xc, int yc)
{
  glBegin(GL_POINTS);
  glVertex2i(xc+x, yc+y); pntX.push_back(xc+x); pntY.push_back(yc+y);
  glVertex2i(xc+x, yc-y); pntX.push_back(xc+x); pntY.push_back(yc-y);
  glVertex2i(xc+y, yc+x); pntX.push_back(xc+y); pntY.push_back(yc+x);
  glVertex2i(xc+y, yc-x); pntX.push_back(xc+y); pntY.push_back(yc-x);
  glVertex2i(xc-x, yc-y); pntX.push_back(xc-x); pntY.push_back(yc-y);
  glVertex2i(xc-y, yc-x); pntX.push_back(xc-y); pntY.push_back(yc-x);
  glVertex2i(xc-x, yc+y); pntX.push_back(xc-x); pntY.push_back(yc+y);
  glVertex2i(xc-y, yc+x); pntX.push_back(xc-y); pntY.push_back(yc+x);
  glEnd();
}

//Function plots pixels
void draw_pixel(int x, int y) {
glBegin(GL_POINTS);
glVertex2i(x, y); pntX.push_back(x); pntY.push_back(y);
glEnd();
}
//DDA line drawing algorithm
void draw_line(int X1, int Y1, int X2, int Y2)
{
  double dx=(X2-X1);
  double dy=(Y2-Y1);
  double steps;
  float xInc,yInc,x=X1,y=Y1;
  /* Find out whether to increment x or y */
  steps=(abs(dx)>abs(dy))?(abs(dx)):(abs(dy));
  xInc=dx/(float)steps;
  yInc=dy/(float)steps;

  /* Plot the first point */
  draw_pixel(x, y);
  int k;
  /* For every step, find an intermediate vertex */
  for(k=0;k<steps;k++)
  {
    x+=xInc;
    y+=yInc;
    draw_pixel(x, y);
  }
}

// Function to draw a circle using bresenham's
// circle drawing algorithm
void bresenham_circle(int r, int xc, int yc)
{
  int x=0,y=r;
  float pk=(5.0/4.0)-r;

  /* Plot the points */
  /* Plot the first point */
  plot_point(x,y, xc, yc);
  int k;
  /* Find all vertices till x=y */
  while(x < y)
  {
    x = x + 1;
    if(pk < 0)
      pk = pk + 2*x+1;
    else
    {
      y = y - 1;
      pk = pk + 2*(x - y) + 1;
    }
    plot_point(x,y, xc, yc);
  }
}

void translate(int x, int y)
{
	glBegin(GL_POINTS);
	for (int i = 0; i < pntX.size(); i++)
	{
		glVertex2i(pntX[i] + x, pntY[i] + y);
	}
	glEnd();
}

void scale(double x, double y)
{
	glBegin(GL_POINTS);
	for (int i = 0; i < pntX.size(); i++)
	{
		glVertex2i((pntX[i] * x), (pntY[i] * y));
	}
	glEnd();
}

void rotate(double angleRad)
{
	glBegin(GL_POINTS);
	for (int i = 0; i < pntX.size(); i++)
	{
		glVertex2i(((pntX[i] * cos(angleRad)) - (pntY[i] * sin(angleRad))), ((pntX[i] * sin(angleRad)) + (pntY[i] * cos(angleRad))));
	}
	glEnd();
}

void draw_face(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	bresenham_circle(50, 0, 50);
	bresenham_circle(5, 15, 65);
	bresenham_circle(5, -15, 65);
	draw_line(-15, 30, 15, 30);
	
//	glColor3f(1.0, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	if(option == 1)
		translate(transX, transY);
	
	else if(option == 2)
		scale(scaleX, scaleY);
		
	else if(option == 3)
		rotate(radians);
	
	glFlush();
}

void Init()
{
  /* Set clear color to white */
  glClearColor(1.0,1.0,1.0,0);
  /* Set fill color to black */
  glColor3f(0.0,0.0,0.0);
  glPointSize(2.0f);
  /* glViewport(0 , 0 , 640 , 480); */
  /* glMatrixMode(GL_PROJECTION); */
  /* glLoadIdentity(); */
  gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
}

int main(int argc, char** argv)
{
	
	cout << "Enter option:\n\n" << endl;

	cout << "1. Translation" << endl;
	cout << "2. Scaling" << endl;
	cout << "3. Rotation" << endl;
	
	cin >> option;

	if (option > 3) {
		return 0;
	}

	if (option == 1)
	{
		cout << "Enter translation factor for X and Y: "; cin >> transX >> transY;
	}
	else if (option == 2)
	{
		cout << "Enter scaling factor for X and Y: "; cin >> scaleX >> scaleY;
	}
	else if (option == 3)
	{
		double degree;
		cout << "Enter angle for rotation: "; cin >> degree;
		radians = degree * 3.1416 / 180;
	}
  /* Initialise GLUT library */
  glutInit(&argc,argv);
  /* Set the initial display mode */
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  /* Set the initial window position and size */
  glutInitWindowPosition(0,0);
  glutInitWindowSize(640,480);
  /* Create the window with title "DDA_Line" */
  glutCreateWindow("Transformations");
  /* Initialize drawing colors */
  Init();
  /* Call the displaying function */
  glutDisplayFunc(draw_face);
  /* Keep displaying untill the program is closed */
  glutMainLoop();
  return 0;
}
