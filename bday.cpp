#include <GL/glut.h>

void init(void)
{
	glClearColor(0,1,0,0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 35.0, 0.0, 45.0);
}

void BideshBiswasBiki(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	// Draw a filled quadrilateral
   glColor3f(0.5f, 0.5f, 0.5f);	 
	glBegin(GL_POLYGON);
		glVertex2i(1, 1);
		glVertex2i(34, 1);

		glVertex2i(34, 44);
		glVertex2i(1, 44);

	glEnd();
	glColor3f(0.556863 , 0.137255, 0.137255);

	glBegin(GL_POLYGON);
		glVertex2i(4, 25);
		glVertex2i(8, 25);

		glVertex2i(8, 26);
		glVertex2i(4, 26);

	glEnd();
	glColor3f(0.8 ,0.498039 ,0.196078	);

	glBegin(GL_POLYGON);
		glVertex2i(5, 26);
		glVertex2i(7, 26);
		
		glVertex2i(7, 34);
		glVertex2i(5, 34);

	glEnd();
    glColor3f(0,0,0	);
	glBegin(GL_LINES);
		glVertex2i(6, 34);
		glVertex2i(6, 35);

	glEnd();
    glColor3f(1.0,1.0,0.0);

	glBegin(GL_POLYGON);
		glVertex2i(6, 35);
		glVertex2i(7, 37);

		glVertex2i(6, 38);
		glVertex2i(5, 37);

	glEnd();
	glColor3f(0.42 ,0.26 ,0.15	);

	glBegin(GL_POLYGON);
		glVertex2i(10, 25);
		glVertex2i(16, 25);

		glVertex2i(16, 26);
		glVertex2i(10, 26);

	glEnd();
	glColor3f(0.36 ,0.20 ,0.08	);

	glBegin(GL_POLYGON);
		glVertex2i(11, 26);
		glVertex2i(15, 26);

		glVertex2i(15, 27);
		glVertex2i(11, 27);

	glEnd();
		glColor3f(1.00 ,0.43 ,0.78	);

	glBegin(GL_POLYGON);
		glVertex2i(12, 27);
		glVertex2i(14, 27);

		glVertex2i(14, 28);
		glVertex2i(12, 28);

	glEnd();
    glColor3f(1.0,1.0,1.0	);
	glBegin(GL_LINES);
		glVertex2i(18, 25);
		glVertex2i(18, 29);

	glEnd();

	glColor3f(0.5 ,1.0 ,0.0	);
	glBegin(GL_POLYGON);
		glVertex2i(18, 29);
		glVertex2i(20, 31);

		glVertex2i(20, 34);
		glVertex2i(18, 36);
		glVertex2i(16, 34);
		glVertex2i(16, 31);


	glEnd();
	glLineWidth(3);
   glColor3f(1.0 ,0.0 ,0.0	); //H
	glBegin(GL_LINES);
		glVertex2i(5, 18);
		glVertex2i(5, 22);
		glVertex2i(5, 20);
		glVertex2i(8, 20);
        glVertex2i(8, 18);
		glVertex2i(8, 22);
	glEnd();

	    glColor3f(1.00  ,0.11  ,0.68	);//A
	glBegin(GL_LINES);
		glVertex2i(9, 18);
		glVertex2i(11, 22);
		glVertex2i(11, 22);
		glVertex2i(13, 18);
        glVertex2i(10, 20);
		glVertex2i(12, 20);
	glEnd();
	glColor3f(0.0 ,0.0 ,1.0	); //P
	glBegin(GL_LINES);
		glVertex2i(14, 18);
		glVertex2i(14, 22);
		glVertex2i(14, 22);
		glVertex2i(16, 22);
		glVertex2i(16, 22);
		glVertex2i(16, 20);
		glVertex2i(16, 20);
		glVertex2i(14, 20);

	glEnd();
    glColor3f(0.0,1.0,0.0	); //P
	glBegin(GL_LINES);
		glVertex2i(17, 18);
		glVertex2i(17, 22);
		glVertex2i(17, 22);
		glVertex2i(19, 22);
		glVertex2i(19, 22);
		glVertex2i(19, 20);
		glVertex2i(19, 20);
		glVertex2i(17, 20);

	glEnd();

	glColor3f(0.89 ,0.47 ,0.20	); //Y
	glBegin(GL_LINES);
		glVertex2i(21, 18);
		glVertex2i(21, 20);
		glVertex2i(21, 20);
		glVertex2i(20, 22);
		glVertex2i(21, 20);
		glVertex2i(22, 22);

	glEnd();
	glColor3f(1.0,0.0,0.0	); //B
	glBegin(GL_LINES);
		glVertex2i(12, 13);
		glVertex2i(12, 17);
		glVertex2i(12, 17);
		glVertex2i(14, 17);
        glVertex2i(14, 17);
		glVertex2i(14, 16);
		glVertex2i(14, 16);
        glVertex2i(13, 15);
        glVertex2i(13, 15);
        glVertex2i(14, 14);
        glVertex2i(14, 14);
        glVertex2i(14, 13);
        glVertex2i(14, 13);
        glVertex2i(12, 13);
	glEnd();

	glColor3f(0.89 ,0.47 ,0.20	); //I
	glBegin(GL_LINES);
		glVertex2i(15, 13);
		glVertex2i(17, 13);
		glVertex2i(16, 13);
		glVertex2i(16, 17);
        glVertex2i(15, 17);
		glVertex2i(17, 17);
	glEnd();
	glColor3f(0.0,1.0,0.0	); //R
	glBegin(GL_LINES);
		glVertex2i(18, 13);
		glVertex2i(18, 17);
		glVertex2i(18, 17);
		glVertex2i(20, 17);
		glVertex2i(20, 17);
		glVertex2i(20, 15);
		glVertex2i(20, 15);
		glVertex2i(18, 15);
		glVertex2i(18, 15);
		glVertex2i(20, 13);
	glEnd();

	glColor3f(0.89 ,0.47 ,0.20	); //T
	glBegin(GL_LINES);
		glVertex2i(22, 13);
		glVertex2i(22, 17);
		glVertex2i(21, 17);
		glVertex2i(23, 17);
	glEnd();
    glColor3f(0.196078 ,0.6 ,0.8	); //H
	glBegin(GL_LINES);
		glVertex2i(24, 13);
		glVertex2i(24, 17);
		glVertex2i(24, 15);
		glVertex2i(26, 15);
		glVertex2i(26, 13);
		glVertex2i(26, 17);
	glEnd();

    glColor3f(1.0,0.0,0.0	); //D
	glBegin(GL_LINES);
		glVertex2i(21, 8);
		glVertex2i(23, 9);
		glVertex2i(23, 9);
		glVertex2i(23, 11);
		glVertex2i(23, 11);
		glVertex2i(21, 12);
		glVertex2i(21, 12);
		glVertex2i(21, 8);
	glEnd();
	glColor3f(1.00  ,0.11  ,0.68	);//A
	glBegin(GL_LINES);
		glVertex2i(24, 8);
		glVertex2i(26, 12);
		glVertex2i(26, 12);
		glVertex2i(28, 8);
		glVertex2i(25, 10);
		glVertex2i(27, 10);
	glEnd();
    glColor3f(0.647059   ,0.164706   ,0.164706);  //Y
	glBegin(GL_LINES);
		glVertex2i(29, 8);
		glVertex2i(29, 10);
		glVertex2i(29, 10);
		glVertex2i(28, 12);
		glVertex2i(29, 10);
		glVertex2i(30, 12);
	glEnd();





glFlush();	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(588 , 752);					// Set window size
	glutCreateWindow("171-15-8550");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(BideshBiswasBiki);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
