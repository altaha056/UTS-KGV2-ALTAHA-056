//Altaha
//Altaha
//Altaha
//Altaha
//Altaha
//Altaha
//Altaha
//Altaha
//181401056

#include <glut.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
 
float koordinatX = 240, koordinatY = 240;
bool done = false;
bool done2 = false;
bool done3 = false;
bool done4 = false;
bool done5 = false;
bool done6 = false;
bool done7 = false;
bool done8 = false;
bool done9 = false;


void userdraw()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 50, 106);
    glVertex2f(480, 0);
    glColor3ub(255, 145, 60);
    glVertex2f(480, 480);
    glColor3ub(0, 143, 112);
    glVertex2f(0, 480);
    glVertex2f(0, 0);
    glEnd();
}

void userdraw2()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 40, 106);
    glVertex2f(440, 40);
    glColor3ub(255, 155, 50);
    glVertex2f(440, 440);
    glColor3ub(50, 143, 112);
    glVertex2f(40, 440);
    glVertex2f(40, 40);
    glEnd();
}

void userdraw3()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 30, 106);
    glVertex2f(400, 80);
    glColor3ub(255, 165, 40);
    glVertex2f(400, 400);
    glColor3ub(50, 143, 112);
    glVertex2f(80, 400);
    glVertex2f(80, 80);
    glEnd();
}

void userdraw4()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 20, 106);
    glVertex2f(360, 120);
    glColor3ub(255, 175, 30);
    glVertex2f(360, 360);
    glColor3ub(50, 143, 112);
    glVertex2f(120, 360);
    glVertex2f(120, 120);
    glEnd();
}
void userdraw5()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 10, 106);
    glVertex2f(320, 160);
    glColor3ub(255, 185, 20);
    glVertex2f(320, 320);
    glColor3ub(50, 143, 112);
    glVertex2f(160, 320);
    glVertex2f(160, 160);
    glEnd();
}

void userdraw6()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 0, 106);
    glVertex2f(280, 200);
    glColor3ub(255, 195, 10);
    glVertex2f(280, 280);
    glColor3ub(50, 143, 112);
    glVertex2f(200, 280);
    glVertex2f(200, 200);
    glEnd();
}

void write(float x, float y, float z, void* font, const char* string)
{
    glColor3ub(0, 0, 0);
    const char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void loadingBar()
{
    glColor3ub(0, 0, 0);
    glPointSize(22);
    glBegin(GL_POINTS);
    glVertex2f(koordinatX, koordinatY);
    glEnd();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 13: //tombol escape exit(0);
        exit(0);
        break;
    case 'd':
    case 'D':
        koordinatX += 10;
        break;
    case 'a':
    case 'A':
        koordinatX -= 10;
        break;
    case 'w':
    case 'W':
        koordinatY += 10;
        break;
    case 's':
    case 'S':
        koordinatY -= 10;
        break;
    }
    if (koordinatX >= 465 && koordinatY <= 10) done = true;
    if (koordinatX >= 400 && koordinatY <= 75) done2 = true;
    if (koordinatX >= 335 && koordinatY <= 140) done3 = true;
    if (koordinatX >= 270 && koordinatY <= 205) done4 = true;
    if (koordinatX >= 1 && koordinatY <= 666) done5 = true;
    if (koordinatX <= 140 && koordinatY >= 340) done6 = true;
    if (koordinatX <= 140 && koordinatY <= 75) done8 = true;
    if (koordinatX >= 400 && koordinatY >= 340) done7 = true;
    if (koordinatX <= 80 && koordinatY >= 400) done9 = true;
    glutPostRedisplay();
}

void specialKey(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP: koordinatY += 10;
        break;
    case GLUT_KEY_DOWN: koordinatY -= 10;
        break;
    case GLUT_KEY_LEFT: koordinatX -= 10;
        break;
    case GLUT_KEY_RIGHT: koordinatX += 10;
        break;
    case GLUT_KEY_END: exit(0); break;
    }
    if (koordinatX >= 465 && koordinatY <= 10) done = true;
    if (koordinatX >= 400 && koordinatY <= 75) done2 = true;
    if (koordinatX >= 335 && koordinatY <= 140) done3 = true;
    if (koordinatX >= 270 && koordinatY <= 205) done4 = true;
    if (koordinatX >= 1 && koordinatY <= 666) done5 = true;
    if (koordinatX <= 140 && koordinatY >= 340) done6 = true;
    if (koordinatX >= 370 && koordinatY >= 340) done7 = true;
    if (koordinatX <= 140 && koordinatY <= 75) done8 = true;
    if (koordinatX <= 80 && koordinatY >= 400) done9 = true;
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON) //klik kiri
    koordinatX -= 10;
    if (button == GLUT_RIGHT_BUTTON) //klik kiri
    koordinatX += 10;
    if (koordinatX >= 465 && koordinatY <= 10) done = true;
    if (koordinatX >= 400 && koordinatY <= 75) done2 = true;
    if (koordinatX >= 335 && koordinatY <= 140) done3 = true;
    if (koordinatX >= 270 && koordinatY <= 205) done4 = true;
    if (koordinatX >= 1 && koordinatY <= 666) done5 = true;
    if (koordinatX <= 140 && koordinatY >= 340) done6 = true;
    if (koordinatX >= 370 && koordinatY >= 340) done7 = true;
    if (koordinatX <= 140 && koordinatY <= 75) done8 = true;
    if (koordinatX <= 80 && koordinatY >= 400) done9 = true;
    glutPostRedisplay();
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    userdraw();
    userdraw2();
    userdraw3();
    userdraw4();
    userdraw5();
    userdraw6();
    loadingBar();
    if (done) write(410, 20.0f, 0, GLUT_BITMAP_HELVETICA_18, "Yee ketemu.");
    if (done2) write(350, 70, 0, GLUT_BITMAP_HELVETICA_18, "Dikit lagi ketemu");
    if (done3) write(310, 140, 0, GLUT_BITMAP_HELVETICA_18, "Di sekitar sini");
    if (done4) write(200, 210, 0, GLUT_BITMAP_HELVETICA_18, "Kamu di jalan yang benar");
    if (done5) write(150, 260, 0, GLUT_BITMAP_HELVETICA_18, "Cari sampai dapat");
    if (done6) write(100, 320, 0, GLUT_BITMAP_HELVETICA_18, "Bukan disini");
    if (done7) write(370, 320, 0, GLUT_BITMAP_HELVETICA_18, "Coba ke bawah");
    if (done8) write(37, 32, 0, GLUT_BITMAP_HELVETICA_18, "Coba ke kanan");
    if (done9) write(67, 360, 0, GLUT_BITMAP_HELVETICA_18, "Dibilangi gaada disini");
    glutSwapBuffers();
    done9 = false;
    done8 = false;
    done7 = false;
    done6 = false;
    done5 = false;
    done3 = false;
    done4 = false;
    done2 = false;
    done = false;
}


static void update()
{
    // Atur panjang titik
    if (koordinatX = 222) koordinatX += 0.3;
    else
    {
        done = true;
        glutKeyboardFunc(keyboard);
    }
    glutPostRedisplay();
}



int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 680);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("ALTAHA'S GAME");
    gluOrtho2D(0, 480, 0, 480);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutSpecialFunc(specialKey);
    glutMainLoop();
    return EXIT_SUCCESS;
}