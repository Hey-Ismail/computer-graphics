#include <windows.h>
#include <GL/glut.h>

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f);

    glBegin(GL_LINES);
    glVertex2f(-0.7f, -0.3f);
    glVertex2f(-0.6f,  0.3f);

    glVertex2f(-0.6f,  0.3f);
    glVertex2f(-0.5f, -0.3f);

    glVertex2f(-0.65f, 0.0f);
    glVertex2f(-0.55f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.4f, -0.3f);
    glVertex2f(-0.4f,  0.3f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.2f,  0.3f);
    glVertex2f(-0.2f, -0.2f);

    glVertex2f(-0.2f, -0.2f);
    glVertex2f( 0.0f, -0.2f);

    glVertex2f( 0.0f, -0.2f);
    glVertex2f( 0.0f,  0.3f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.2f,  0.3f);

    glVertex2f(0.2f,  0.3f);
    glVertex2f(0.35f, 0.2f);

    glVertex2f(0.35f, 0.2f);
    glVertex2f(0.2f,  0.0f);

    glVertex2f(0.2f,  0.0f);
    glVertex2f(0.35f,-0.1f);

    glVertex2f(0.35f,-0.1f);
    glVertex2f(0.2f, -0.3f);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutCreateWindow("AIUB Text");
    glutInitWindowSize(500, 300);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();

    return 0;
}
