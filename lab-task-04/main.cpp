//-------------------------------------------
// Pyramid
//-------------------------------------------
#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(1,1,1);

    // X axis
    glVertex2f(-1,0);
    glVertex2f(1,0);

    // Y axis
    glVertex2f(0,-1);
    glVertex2f(0,1);
    glEnd();





    // -------- TOP TRIANGLE --------
    glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
    glColor3f(0,0,1);
    glVertex2f(0.5,0.9);
    glVertex2f(0.55,0.8);
    glVertex2f(0.45,0.8);
    glEnd();


    // -------- 2ND ROW --------
    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(0.45,0.8);
    glVertex2f(0.5,0.7);
    glVertex2f(0.4,0.7);

    glColor3f(0,1,0);
    glVertex2f(0.55,0.8);
    glVertex2f(0.6,0.7);
    glVertex2f(0.5,0.7);
    glEnd();


    // -------- 3RD ROW --------
    glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);
    glVertex2f(0.4,0.7);
    glVertex2f(0.45,0.6);
    glVertex2f(0.35,0.6);

    glColor3f(0,0,1);
    glVertex2f(0.5,0.7);
    glVertex2f(0.55,0.6);
    glVertex2f(0.45,0.6);

    glColor3f(1,0,0);
    glVertex2f(0.6,0.7);
    glVertex2f(0.65,0.6);
    glVertex2f(0.55,0.6);
    glEnd();


    // -------- 4TH ROW --------
    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(0.35,0.6);
    glVertex2f(0.4,0.5);
    glVertex2f(0.3,0.5);

    glColor3f(0,0,1);
    glVertex2f(0.45,0.6);
    glVertex2f(0.5,0.5);
    glVertex2f(0.4,0.5);

    glColor3f(0,1,0);
    glVertex2f(0.55,0.6);
    glVertex2f(0.6,0.5);
    glVertex2f(0.5,0.5);

    glColor3f(1,0,0);
    glVertex2f(0.65,0.6);
    glVertex2f(0.7,0.5);
    glVertex2f(0.6,0.5);
    glEnd();


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Pyramid");
    glutInitWindowSize(600,600);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
