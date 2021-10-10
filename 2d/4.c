//STICKMAN ANIMATION
// C Program to illustrate
// OpenGL animation for revolution

#include <stdio.h>
#include <GL/glut.h>
#include <math.h>

// global declaration
int x, y;
float i, j;
#define PI 3.142

float deg_to_rad(float deg)
{
    return (2 * PI * deg / 360);
}
// Initialization function
void myInit(void)
{
    // Reset background color with black (since all three argument is 0.0)
    glClearColor(0.0, 0.0, 0.0, 1.0);

    // Set picture color to green (in RGB model)
    // as only argument corresponding to G (Green) is 1.0 and rest are 0.0
    //glColor3f(0.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
    // Set width of point to one unit
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Set window size in X- and Y- direction
    gluOrtho2D(-780, 780, -420, 420);
}

// Function to display animation
void display(void)
{
    // Outer loop to make figure moving
    // loop variable j iterated up to 10000,
    // indicating that figure will be in motion for large amount of time
    // around 10000/6.29 = 1590 time it will revolve
    // j is incremented by small value to make motion smoother
    
    
    for (j = 0; j < 10000; j += .1)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glBegin(GL_LINES);

        glVertex2i(50, 100);
        glVertex2i(-50, 100);
        glVertex2i(50, 100);
        glVertex2i(50, 130);
        glVertex2i(-50, 100);
        glVertex2i(-50, 130);
        glVertex2i(50, 130);
        glVertex2i(-50, 130);

        glVertex2i(0 , -100 );
        glVertex2i(0 , 100 );

        glVertex2i(100, 0);
        glVertex2i(-100, 0);

        for(i = 0; i<10; i+=.01){
            glVertex2i(100, 0);
            glVertex2i(fmin(100 + 100*cos(deg_to_rad(100 + j)), 101), fmin(100 + 100*sin(deg_to_rad(j)), 101));
            glVertex2i(-100, 0);
            glVertex2i(fmin(-100 + 100 * cos(deg_to_rad(100 + j)), -101), fmin(-100 + 5 * sin(deg_to_rad(j)), -101));
        }

        glVertex2i(0, -100);
        glVertex2i(-40, -200);

        glVertex2i(0, -100);
        glVertex2i(40, -200);

        glEnd();
        glFlush();
    }
}

// Driver Program
int main(int argc, char **argv)
{
    glutInit(&argc, argv);

    // Display mode which is of RGB (Red Green Blue) type
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // Declares window size
    glutInitWindowSize(600, 600);

    // Declares window position which is (0, 0)
    // means lower left corner will indicate position (0, 0)
    glutInitWindowPosition(0, 0);

    // Name to window
    glutCreateWindow("Revolution");

    // Call to myInit()
    myInit();
    glutDisplayFunc(display);
    glutMainLoop();
}


