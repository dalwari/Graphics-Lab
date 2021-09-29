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
glColor3f (0.0, 0.4, 0.2); // Set line segment color to green.
glBegin (GL_POLYGON);
glColor3f (0.52, 0.37, 0.26);
glVertex2i(60,760);
glVertex2i(100,760);
glVertex2i(70,680);
glVertex2i(110,680);
glVertex2i(60,760);
glVertex2i(70,680);
glVertex2i(100,760);
glVertex2i(110,680);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.65, 0.50, 0.39);
glVertex2i(70,680);
glVertex2i(110,680);
glVertex2i(110,680);
glVertex2i(110,640);
glVertex2i(110,640);
glVertex2i(70,640);
glVertex2i(70,640);
glVertex2i(70,680);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.65, 0.50, 0.39);
glVertex2i(60,760);
glVertex2i(70,680);
glVertex2i(70,680);
glVertex2i(70,640);
glVertex2i(70,640);
glVertex2i(60,720);
glVertex2i(60,720);
glVertex2i(60,760);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.36,0.25,0.20);
glVertex2i(106,640);
glVertex2i(106,450);
glVertex2i(106,450);
glVertex2i(102,450);
glVertex2i(102,450);
glVertex2i(102,640);
glVertex2i(102,640);
glVertex2i(106,640);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.36,0.25,0.20);
glVertex2i(75,640);
glVertex2i(75,450);
glVertex2i(75,450);
glVertex2i(71,450);
glVertex2i(71,450);
glVertex2i(71,640);
glVertex2i(71,640);
glVertex2i(75,640);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.36,0.25,0.20);
glVertex2i(61,712);
glVertex2i(61,520);
glVertex2i(61,520);
glVertex2i(65,520);
glVertex2i(65,520);
glVertex2i(65,680);
glVertex2i(65,680);
glVertex2i(61,712);
glEnd();
glBegin(GL_POLYGON);
glColor3f (0.36,0.25,0.20);
glVertex2i(93,640);
glVertex2i(93,530);
glVertex2i(93,530);
glVertex2i(97,530);
glVertex2i(97,530);
glVertex2i(97,640);
glVertex2i(97,640);
glVertex2i(93,640);
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
