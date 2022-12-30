#include<GL/freeglut.h>
#include<math.h>

void display()
{
        glClearColor(0.5, 0.5, 0.5, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        gluOrtho2D(-200, 200, -200, 200);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

        float x, y, i;

        glPointSize(5);

        glBegin(GL_POINTS);
            glColor3f(1.0, 0.7, 0.0);
            for(i = 0; i <= 2*M_PI; i += 0.001) {
                x = 150 * cos(i);
                y = 150 * sin(i);
                glVertex2i(x, y);
            }
        glEnd();
        glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Using Primitive");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
