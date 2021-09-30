#include <GL/glut.h>
#include <math.h>
// #include <studio.h>
#define PI 3.142

void initGL()
{
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}
void draw_circle(double tl_x, double tl_y, double radius, char color, int reflect_y)
{
    glTranslatef(reflect_y * tl_x, tl_y, 0.0f);
    glBegin(GL_POLYGON); // Middle circle
    double ori_x = 0.0;  // the origin or center of circle
    double ori_y = 0.0;
    switch(color){
        case 'b':
            glColor3f(0.0f, 0.0f, 1.0f);
            break;
        case 'g':
            glColor3f(0.0f, 1.0f, 0.0f);
            break;
        case 'r':
            glColor3f(1.0f, 0.0f, 0.0f);
            break;
        case 'y':
            glColor3f(1.f, 1.f, 0.0f);
            break;
        case 'w':
            glColor3f(1.0f, 1.0f, 1.0f);
            break;
        default:
            glColor3f(.0f, .0f, 0.0f);
            break;
        }
        int i;
    for (i = 0; i <= 300; i++)
    {
        double angle = 2 * PI * i / 300;
        double x = cos(angle) * radius;
        double y = sin(angle) * radius;
        glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
}

void show_rings(int reflect_y){
    draw_circle(0.0, 0.0, .25, ' ', reflect_y);
    draw_circle(0.0, 0.0, 0.22, 'w', reflect_y);

    draw_circle(-.6, 0.0, .25, 'b', reflect_y);
    draw_circle(0, 0.0, 0.2, 'w', reflect_y);

    draw_circle(+1.2, 0.0, .25, 'r', reflect_y);
    draw_circle(0, 0.0, 0.2, 'w', reflect_y);

    draw_circle(-.3, -.2, .25, 'g', reflect_y);
    draw_circle(0, 0.0, 0.2, 'w', reflect_y);

    draw_circle(-.6, 0, .25, 'y', reflect_y);
    draw_circle(0, 0.0, 0.2, 'w', reflect_y);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glTranslatef(0., .5, 0.0f);

    show_rings(+1);

    glTranslatef(.2, -.8, 0.0f);
    show_rings(-1);

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);               // Initialize GLUT
    glutInitWindowSize(640, 640);        // Set the window's initial width & height - non-square
    glutInitWindowPosition(50, 50);      // Position the window's initial top-left corner
    glutCreateWindow("Olympic ring Reflection"); // Create window with the given title
    glutDisplayFunc(display);            // Register callback handler for window re-paint event
    initGL();                            // Our own OpenGL initialization
    glutMainLoop();                      // Enter the infinite event-processing loop
    return 0;
}
