#include <windows.h>
#include <GL/glut.h>

void display() {

    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    // ================= BIG TRIANGLE (RED) =================
    glColor3f(1,0,0);
    glBegin(GL_LINES);

    glVertex2f(0.0,0.8);  glVertex2f(-0.8,-0.8);
    glVertex2f(-0.8,-0.8); glVertex2f(0.8,-0.8);
    glVertex2f(0.8,-0.8);  glVertex2f(0.0,0.8);

    glEnd();


    // ================= MIDDLE TRIANGLE (GREEN) =================
    glColor3f(0,1,0);
    glBegin(GL_LINES);

    glVertex2f(0.0,0.45);  glVertex2f(-0.45,-0.45);
    glVertex2f(-0.45,-0.45); glVertex2f(0.45,-0.45);
    glVertex2f(0.45,-0.45);  glVertex2f(0.0,0.45);

    glEnd();


    // ================= SMALL TRIANGLE (BLUE) =================
    glColor3f(0,0,1);
    glBegin(GL_LINES);

    glVertex2f(0.0,0.2);  glVertex2f(-0.2,-0.2);
    glVertex2f(-0.2,-0.2); glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.2);  glVertex2f(0.0,0.2);

    glEnd();


    // ================= CONNECTOR LINES =================
    glColor3f(0.3,0.3,0.3);
    glBegin(GL_LINES);

    glVertex2f(0.0,0.8);  glVertex2f(0.0,0.45);
    glVertex2f(0.0,0.45); glVertex2f(0.0,0.2);

    glVertex2f(-0.8,-0.8);  glVertex2f(-0.45,-0.45);
    glVertex2f(-0.45,-0.45); glVertex2f(-0.2,-0.2);

    glVertex2f(0.8,-0.8);  glVertex2f(0.45,-0.45);
    glVertex2f(0.45,-0.45); glVertex2f(0.2,-0.2);

    glEnd();

    glFlush();
}

int main(int argc,char** argv){

    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("OpenGL Class Task-1");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
