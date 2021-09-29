#include <GL/glut.h> 
void init (void)
{
glClearColor (1, 1, 1, 0);
glMatrixMode (GL_PROJECTION); 
gluOrtho2D (0, 200, 0, 800);
}
void lineSegment (void)
{
glClear (GL_COLOR_BUFFER_BIT); // Clear display window.
 // Set line segment color to green.
glBegin (GL_POLYGON);
glColor3f (0.0, 0.4, 0.2);
glVertex2i (50, 790); // Specify line-segment geometry.
glVertex2i (55, 790);
glVertex2i (50, 500);
glVertex2i (55, 500);
glVertex2i(50, 790);
glVertex2i (50, 500);
glVertex2i (55, 790);
glVertex2i (55, 500);
glEnd();
/********************************************/
glBegin (GL_POLYGON);
glColor3f (0.0, 0.4, 0.2);
glVertex2i (80, 790); // Specify line-segment geometry.
glVertex2i (85, 790);
glVertex2i (80, 500);
glVertex2i (85, 500);
glVertex2i(80, 790);
glVertex2i (80, 500);
glVertex2i (85, 790);
glVertex2i (85, 500);
glEnd();
glBegin (GL_POLYGON);
glColor3f (0.22, 0.69, 0.87);
glVertex2i (55, 770);
glVertex2i (80, 770);
glVertex2i (55, 650);
glVertex2i (80, 650);
glVertex2i (55, 770);
glVertex2i (55, 650);
glVertex2i (80, 770);
glVertex2i (80, 650);
glEnd();
glBegin(GL_POLYGON);
glVertex2i (55, 600);
glVertex2i (80, 600);
glVertex2i (55, 550);
glVertex2i (80, 550);
glVertex2i (55, 550);
glVertex2i (55, 600);
glVertex2i (80, 600);
glVertex2i (80, 550);
glEnd();
glBegin (GL_POLYGON);
glColor3f (0.1, 0.4, 0.5);
glVertex2i (50, 500);
glVertex2i (40, 400);
glVertex2i(55, 500);
glVertex2i (80, 500);
glVertex2i (85, 500);
glVertex2i (95, 400);
glVertex2i (40, 400);
glVertex2i (95, 400);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.55, 0.47, 0.14);
glVertex2i (45, 400);
glVertex2i (45, 200);
glVertex2i (50, 400);
glVertex2i (50, 200);
glVertex2i (45, 200);
glVertex2i (50, 200);
glVertex2i (45, 400);
glVertex2i (50, 400);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.55, 0.47, 0.14);
glVertex2i (90, 400);
glVertex2i (90, 200);
glVertex2i (85, 400);
glVertex2i (85, 200);
glVertex2i (90, 200);
glVertex2i (85, 200);
glVertex2i (90, 400);
glVertex2i (85, 400);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.55, 0.47, 0.14);
glVertex2i (55, 400);
glVertex2i (55, 250);
glVertex2i (60, 400);
glVertex2i (60, 250);
glVertex2i (55, 400);
glVertex2i (60, 400);
glVertex2i (55, 250);
glVertex2i (60, 250);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.55, 0.47, 0.14);
glVertex2i (80, 400);
glVertex2i (80, 250);
glVertex2i (75, 400);
glVertex2i (75, 250);
glVertex2i (80, 250);
glVertex2i (75, 250);
glVertex2i (80, 400);
glVertex2i (75, 400);
glEnd();
glFlush(); // Process all OpenGL routines as quickly as possible.
}
void main (int argc, char** argv)
{
glutInit (&argc, argv); // Initialize GLUT.
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // Set display mode.
glutInitWindowPosition (0, 0); // Set top-left display-window position.
glutInitWindowSize (1366, 768); // Set display-window width and height.
glutCreateWindow ("An Example OpenGL Program"); // Create display window.
init ( ); // Execute initialization procedure.
glutDisplayFunc (lineSegment); // Send graphics to display window.
glutMainLoop ( ); // Display everything and wait.
}
