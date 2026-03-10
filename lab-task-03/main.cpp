

//-------------------------------------------
// Chess Board
//-------------------------------------------
#include <windows.h>
#include <GL/glut.h>


void chessBoard() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White background

    glClear(GL_COLOR_BUFFER_BIT);


    // Row 1
    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(-0.5f, 1.0f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-1.0f, 0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices's form a quad
        glVertex2f(-0.5f, 1.0f);
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.5f, 1.0f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.0f, 0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.5f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, 0.5f);
        glVertex2f(0.5f, 0.5f);
    glEnd();

    // Row 2
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-1.0f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.0f, 0.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.5f, 0.5f);
        glVertex2f(1.0f, 0.5f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
    glEnd();

    // Row 3
    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-1.0f, -0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(-0.5f, -0.5f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.0f, -0.5f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.5f, 0.0f);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(1.0f, -0.5f);
        glVertex2f(0.5f, -0.5f);
    glEnd();

    // Row 4
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-1.0f, -0.5f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(-0.5f, -1.0f);
        glVertex2f(-1.0f, -1.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(-0.5f, -1.0f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f); // White
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.0f, -0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(0.5f, -1.0f);
        glVertex2f(0.0f, -1.0f);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_QUADS); // Each set of 4 vertices form a quad
        glVertex2f(0.5f, -0.5f);
        glVertex2f(1.0f, -0.5f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(0.5f, -1.0f);
    glEnd();

    glFlush();
}

//main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("4x4 Chessboard");
    glutInitWindowSize(500, 500);
    glutDisplayFunc(chessBoard);
    //initGL();
    glutMainLoop();
    return 0;
}
