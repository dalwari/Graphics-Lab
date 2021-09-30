#include <GL/glut.h>
#include <math.h>
#include <time.h>
#include <bits/stdc++.h>

using namespace std; 

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void drawline(int x, int y){
	glBegin(GL_POLYGON);
		//glColor3f(0.5, 0.35, 0.05);
		glColor3f(0.18, 0.30, 0.18);
		glVertex2f(x, y);
		glVertex2f(x+10, y);
		glVertex2f(x+10, y+10);
		glVertex2f(x, y+10);
	glEnd();
}

void rotation(){
    while (true) {
        for (int i = 0; i < 360; i+=10) {
            float angle_theta = i * 3.142 / 180;
            glClear(GL_COLOR_BUFFER_BIT);
	            drawline(50 * cos(angle_theta), 50 * sin(angle_theta));
        	glFlush(); 
        	delay(20);
        }
    }

}

void scaling() {
	while(true) {
		for(int x=0,y=0;x<100 && y<100 ;x++,y++)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			glBegin(GL_POLYGON);
		//		glColor3f(0.5, 0.35, 0.05);
		glColor3f(0.18, 0.30, 0.18);
				glVertex2f(x,y);
				glVertex2f(-x,y);
				glVertex2f(-x,-y);
				glVertex2f(x,-y);
			glEnd();
			glFlush();
			delay(10);
		}
		for(int x=100,y=100;x>0 && y>0 ;x--,y--)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			glBegin(GL_POLYGON);
				//glColor3f(0.5, 0.35, 0.05);
				glColor3f(0.18, 0.30, 0.18);
				glVertex2f(x,y);
				glVertex2f(-x,y);
				glVertex2f(-x,-y);
				glVertex2f(x,-y);
			glEnd();
			glFlush();
			delay(10);
		}
	}
}

void translate() {

	while(true){
		
		for(int x=-5, y=-5; x<100; x++){
			glClear(GL_COLOR_BUFFER_BIT);
			drawline(x, y);	
			glFlush();
			delay(10);
		}
		
		for(int x=100, y=-5; y<100; y++){
			glClear(GL_COLOR_BUFFER_BIT);
			drawline(x, y);	
			glFlush();
			delay(10);
		}
		
		for(int x=100, y=100; x>-5; x--){
			glClear(GL_COLOR_BUFFER_BIT);
			drawline(x, y);	
			glFlush();
			delay(10);
		}
		
		for(int x=-5, y=100; y>-5; y--){
			glClear(GL_COLOR_BUFFER_BIT);
			drawline(x, y);	
			glFlush();
			delay(10);
		}
	}
}

int main(int argc, char** argv) {

	cout<<"Enter 1. Translation , 2. Rotation , 3. Scaling "<<endl;
	int x;
	cin>>x;
	if(x==1){
	  glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	
	  glutInitWindowPosition(80, 80);
	  glutInitWindowSize(600, 600);
	  glutCreateWindow("TRANSLATE");
	  
	  glClearColor(1.0, 1.0, 1.0, 1.0);
	  glClear(GL_COLOR_BUFFER_BIT);
	  gluOrtho2D(-25, 25, -25, 25);
	
	  glutDisplayFunc(translate);
	  
	  glutMainLoop();	
	}
  	else if(x==2){
  	  glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	
	  glutInitWindowPosition(80, 80);
	  glutInitWindowSize(600, 600);
	  glutCreateWindow("ROTATION");
	  
	  glClearColor(1.0, 1.0, 1.0, 1.0);
	  glClear(GL_COLOR_BUFFER_BIT);
	  gluOrtho2D(-250, 250, -250, 250);
	
	  glutDisplayFunc(rotation);
	  
	  glutMainLoop();
	}
	else if(x==3){
		glutInit(&argc, argv);
	  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	
	  glutInitWindowPosition(80, 80);
	  glutInitWindowSize(600, 600);
	  glutCreateWindow("SCALING");
	  
	  glClearColor(1.0, 1.0, 1.0, 1.0);
	  glClear(GL_COLOR_BUFFER_BIT);
	  gluOrtho2D(-250, 250, -250, 250);
	
	  glutDisplayFunc(scaling);
	  
	  glutMainLoop();
	}
}





