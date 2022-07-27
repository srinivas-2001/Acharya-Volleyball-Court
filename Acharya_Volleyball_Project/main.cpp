#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

float xpt,ypt;

GLfloat courtVertices[][3] = {

	{-2.5, -1.0, -4.7}, {2.5, -1.0, -4.7},
	{2.5, -1.0, 4.7}, {-2.5, -1.0, 4.7}
};

GLfloat baseVertices[][3] = {
	//top
	{-3.0, -1.0001, -5.2}, {3.0, -1.0001, -5.2},
	{-3.0, -1.0001, 5.2}, {3.0, -1.0001, 5.2},
	//bottom
	{-3.0, -1.5, -5.2}, {3.0, -1.5, -5.2},
	{-3.0, -1.5, 5.2}, {3.0, -1.5, 5.2},

};

void lines(float a, float b, float c, float d)
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(a , -0.9999 , b);
	glVertex3f(d , -0.9999 , b);
	glVertex3f(d , -0.9999 , c);
	glVertex3f(a , -0.9999 , c);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(a , -0.9999 , b);
	glVertex3f(d , -0.9999 , b);
	glVertex3f(d , -0.9999 , c);
	glVertex3f(a , -0.9999 , c);
	glEnd();
}

void sidelines(){
    glColor3f(1,1,1);
    glTranslated(0,-1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.5,0.001,-0.05);
    glVertex3f(2.5,0.001,-0.05);
    glVertex3f(2.5,0.001,0.05);
    glVertex3f(-2.5,0.001,0.05);
    glEnd();

    glTranslated(0,0,-2.0);
    glBegin(GL_POLYGON);
    glVertex3f(-2.5,0.001,0.05);
    glVertex3f(2.5,0.001,0.05);
    glVertex3f(2.5,0.001,-0.05);
    glVertex3f(-2.5,0.001,-0.05);
    glEnd();
}

void base(int a, int b, int c, int d)
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.1, 0.0);
	glVertex3fv(baseVertices[a]);
	glVertex3fv(baseVertices[b]);
	glVertex3fv(baseVertices[c]);
	glVertex3fv(baseVertices[d]);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(165.0/255.0, 0.0/255.0, 3.0/255.0);
	glVertex3fv(baseVertices[a]);
	glVertex3fv(baseVertices[b]);
	glVertex3fv(baseVertices[c]);
	glVertex3fv(baseVertices[d]);
	glEnd();
}

void stairs1() {
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    GLfloat x = 5, y = -1.2, sx = 3.5;
    for(int i = 0; i< 7; i++)
    {
        glPushMatrix();
        glTranslatef(x, y, -0.2);
        glScaled(sx, 0.5, 17);
        glutSolidCube(1);
        sx = sx - 0.5;
        x = x + 0.25;
        y = y + 0.5;
        glPopMatrix();
    }
    glPopMatrix();
}

void stairs2() {
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    GLfloat z = -7, y = -1.2, sz = 3.5;
    for(int i = 0; i< 7; i++)
    {
        glPushMatrix();
        glTranslatef(0, y, z);
        glScaled(13.5, 0.5, sz);
        glutSolidCube(1);
        sz = sz - 0.5;
        z = z - 0.25;
        y = y + 0.5;
        glPopMatrix();
    }
    glPopMatrix();
}

void logo()
{
    glColor3ub(85,26,139);
    glBegin(GL_POLYGON);
    glVertex2f(1.00,3.20);
    glVertex2f(1.30,3.50);
    glVertex2f(1.00,3.80);
    glVertex2f(0.70,3.50);
    glEnd();
    glColor3ub(85,26,139);
    glBegin(GL_POLYGON);
    glVertex2f(0.4,3.20);
    glVertex2f(0.95,3.20);
    glVertex2f(0.60,3.40);
    glEnd();
    glColor3ub(85,26,139);
    glBegin(GL_POLYGON);
    glVertex2f(1.05,3.20);
    glVertex2f(1.60,3.20);
    glVertex2f(1.40,3.40);
    glEnd();
    glColor3ub(255,145,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.50,3.70);
    glVertex2f(0.70,3.50);
    glVertex2f(0.60,3.40);
    glVertex2f(0.40,3.60);
    glEnd();
    glColor3ub(255,145,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.50,3.70);
    glVertex2f(1.30,3.50);
    glVertex2f(1.40,3.40);
    glVertex2f(1.60,3.60);
    glEnd();
}

void stairs3() {
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    GLfloat x = -5, y = -1.2, sx = 3.5;
    for(int i = 0; i< 7; i++)
    {
        glPushMatrix();
        glTranslatef(x, y, -0.2);
        glScaled(sx, 0.5, 17);
        glutSolidCube(1);
        sx = sx - 0.5;
        x = x - 0.25;
        y = y + 0.5;
        glPopMatrix();
    }
    glPopMatrix();
}

void stairs4() {
    glPushMatrix();
    glColor3f(0.8, 0.8, 0.8);
    GLfloat z = 7, y = -1.2, sz = 3.5;
    for(int i = 0; i< 7; i++)
    {
        glPushMatrix();
        glTranslatef(0, y, z);
        glScaled(13.5, 0.5, sz);
        glutSolidCube(1);
        sz = sz - 0.5;
        z = z + 0.25;
        y = y + 0.5;
        glPopMatrix();
    }
    glPopMatrix();
}

void polygon(int a, int b, int c, int d)
{
	base(0, 1, 3, 2);
	base(4, 5, 7, 6);
	base(2, 3, 7, 6);
	base(0, 1, 5, 4);
	base(0, 2, 6, 4);
	base(1, 3, 7, 5);

	//court color
	glBegin(GL_POLYGON);
	glColor3f(165.0/255.0, 0.0/255.0, 3.0/255.0);
	glVertex3fv(courtVertices[a]);

	//glColor3f(0.0, 0.4, 1.0);
	glVertex3fv(courtVertices[b]);

	glVertex3fv(courtVertices[c]);

	glVertex3fv(courtVertices[d]);
	glEnd();

    //center line
	lines(-2.5, -0.05, 0.05, 2.5);

	//side lines
	lines(-2.50, 4.7, -4.7, -2.55);
	lines(2.50, 4.7, -4.7, 2.55);

	//base lines
	lines(-2.55, 4.70, 4.75, 2.55);
	lines(-2.55, -4.70, -4.75, 2.55);
}

void ball()
{
    glTranslated(0,-0.8,2);
	glColor3f(0.0, 0.0, 1.0);
	glutSolidSphere(0.15, 1000, 20);
}

void initLighting() {
    GLfloat lightColor0[] = { 0.6f, 0.6f,0.6f, 1.0f };
    GLfloat lightPos0[] = { 0.5f, 0.6f, 0.5f, 0.0f };
    GLfloat ambientColor[] = { 0.4f, 0.4f, 0.4f, 1.0f };

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_SMOOTH);

    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
    glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
}

void pole(){
    glutSolidCube(1);
}

void net(){
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(-2.5,0.6,0);
    glVertex3f(2.5,0.6,0);
    glVertex3f(2.5,0.7,0);
    glVertex3f(-2.5,0.7,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    glVertex3f(-2.5,1.8,0);
    glVertex3f(2.5,1.8,0);
    glVertex3f(2.5,1.9,0);
    glVertex3f(-2.5,1.9,0);
    glEnd();

    for(ypt=1.7;ypt>0.6;ypt=ypt-0.1){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(-2.5,ypt);
    glVertex2f(2.5,ypt);
    glEnd();
    }

    for(xpt=-2.5;xpt<2.5;xpt=xpt+0.1){
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(xpt,1.8);
    glVertex2f(xpt,0.6);
    glEnd();
    }
}

void draw(void)
{
    glPushMatrix();
    {
        ball();
    }
	glPopMatrix();
	glPushMatrix();
	{
		net();
	}
	glPopMatrix();
	glPushMatrix();
	{
		sidelines();
	}
	glPopMatrix();

	polygon(0, 1, 2, 3);
	stairs1();
	stairs2();
	stairs3();
	stairs4();
	glTranslated(-2.5,0.5,0);
	glScaled(0.1,3,0.1);
	pole();
	glTranslated(50,0.0,0);
	pole();
	glPushMatrix();
	{
	glTranslated(40,-2.7,6);
	glScaled(1,1,7);
	glRotated(90,0,1,0);
	logo();
	}
	glPopMatrix();
}

static GLfloat theta[] = {0.0,90.0,0.0};
static GLint axis = 2;
static GLdouble viewer[] =  {0.0, 7.0, 7.0};

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(viewer[0], viewer[1], viewer[2], 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glRotatef(theta[0], 1.0, 0.0, 0.0);
	glRotatef(theta[1], 0.0, 1.0, 0.0);
	glRotatef(theta[2], 0.0, 0.0, 1.0);
	draw();
	glFlush();
	glutSwapBuffers();
}

void mouse(int btn, int state, int x, int y)
{
	if(btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		axis = 1;
	if(btn == GLUT_MIDDLE_BUTTON && state == GLUT_DOWN)
		axis = 0;
	if(btn == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		axis = 2;
	theta[axis] += 2.0;
	if(theta[axis] > 360.0)
		theta[axis] -= 360.0;
	display();
}

void myReshape(int w, int h)
{
	glViewport(0, 0, w , h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w <= h)
		glFrustum(-2.0, 2.0, -2.0 * (GLfloat)h / (GLfloat)w , 2.0 * (GLfloat)h / (GLfloat)w, 2.0, 20.0);
	else
		glFrustum(-2.0, 2.0, -2.0 * (GLfloat)w / (GLfloat)h , 2.0 * (GLfloat)w / (GLfloat)h,  2.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

void keys(unsigned char key, int x, int y)
{
	//test conditions to ensure that the camera always capture the object and does move too far from the object
	if(key == 'x' && viewer[0] != -6) viewer[0] -= 1.0;
	if(key == 'X' && viewer[0] != 6) viewer[0] += 1.0;
	if(key == 'y' && viewer[1] != 0) viewer[1] -= 1.0;
	if(key == 'Y' && viewer[1] != 9) viewer[1] += 1.0;
	if(key == 'z'  && viewer[2] != 4) viewer[2] -= 1.0;
	if(key == 'Z'  && viewer[2] != 10) viewer[2] += 1.0;
	display();
}

int main(int argc, char **argv)
{
	glutInit(&argc , argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Acharya_Volleyball_Court");
	glutReshapeFunc(myReshape);
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keys);
	initLighting();
	glEnable(GL_DEPTH_TEST);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glutMainLoop();
}
