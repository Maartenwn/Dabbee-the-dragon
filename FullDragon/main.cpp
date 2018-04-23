#include <GL\freeglut.h>
#include <stdio.h>


int width;
int height;


void keyboard(unsigned char key, int x, int y) {
}

void SpecialInput(int key, int x, int y) {
}


void idle() {
}


void display() {
}


void onReshape(int w, int h)
{
	width = w;
	height = h;

	glViewport(0, 0, width, height);
}

void onMouseMotion(int x, int y) {
}

int main(int argc, char* argv[]) {
	glutInitDisplayMode(GLUT_RGB | GL_DEPTH_BUFFER_BIT);
	glutInitWindowSize(1200, 900);
	glutInit(&argc, argv);
	glutCreateWindow("Full Dragon");


	glutReshapeFunc(onReshape);
	glutDisplayFunc(display);
	glutIdleFunc(idle);
	glutKeyboardFunc(keyboard);
	glutPassiveMotionFunc(onMouseMotion);
	glutSpecialFunc(SpecialInput);

	glutMainLoop();
	return 0;
}