#include <windows.h>
#include <gl/glut.h>
#include <math.h>

void cylinder(float alas,float atas,float tinggi);
void kerucut(float ngisor, float nduwur, float dowo);
void blok(float tebal,int ratiol,int ratiop);

GLfloat  source_light[]={0.30,0.30,0.30,0.50};
double Loop,LoopAll=0;


void Mobil(void)
{
 glClearColor(1.0,9.0,1.0,0.0);  //blackground
 glShadeModel(GL_SMOOTH);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluPerspective(50.0,1.5,10.0,1000.0);

 glEnable  (GL_DEPTH_TEST);
 glPolygonMode   (GL_FRONT_AND_BACK,GL_FILL);
 glEnable  (GL_LIGHTING);
 glLightfv  (GL_LIGHT7,GL_DIFFUSE,source_light);
 glEnable  (GL_LIGHT7);
 glEnable  (GL_COLOR_MATERIAL);
 glColorMaterial (GL_FRONT_AND_BACK,GL_AMBIENT);

}

//ini komen


void display(void)
{

 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();

 /*
  Keterangan:
  glTranslatef : coba nilainya diubah2 untuk menempatkan pada posisi yang tepat dengan sumbu (x, y, z)
  glRotated : coba nilainya diubah2 untuk memutar objek agar sesuai dengan keinginan.
  cylinder: untuk membentuk model tabung

 */

  glTranslatef(0,0,-100);// besar kecilnya mobil
 Loop++;
     glRotatef(Loop,0.9,4.0,0.6);//mobil yang berotasi

 glPushMatrix();//body
 //glpushmatrix();
 glColor3f(0.0,0.0,9.0);
 blok(10, 3, 2);

 glTranslatef(0, 9, 0);
 blok(10, 3, 2);
 glTranslatef(10, -10,0);
 blok(10, 5.5, 2);
 glRotatef(-35, 0, 0, 15);
 glTranslatef(0, 7,0);
 blok(10, 2, 2);
 glTranslatef(2, 4.9,-2.5);
 glColor3f(0.9,0.9,0.9);// warna kaca
 blok(0.5, 20, 31);

 glRotatef(180, 45, -45, 0);
 //glTranslatef(0, 10,0);
 //blok(3, 2, 5);
 //cylinder(2,2,30);
 //glTranslatef(-10, -10,0);
 //glRotatef(90, 45,-45, 0);
 //cylinder(2,2,30);
 //glRotatef(90, -45, 90, 90);
 //blok(5, 3, 2);

 glPopMatrix();


 glPushMatrix();//roda
 glColor3f(0.0,0.0,0.0);
 glTranslatef(20, -8,-7);
 cylinder(5, 5,3);

 glColor3f(0.0,0.0,0.0);
 glTranslatef(-20, 8,7);
 glTranslatef(-5, -8,-7);
 cylinder(5, 5,3);

 glColor3f(0.0,0.0,0.0);
 glTranslatef(5, 8,7);
 glRotatef(180,0,180,0);
 glTranslatef(3,-8,-17);
 cylinder(5, 5,3);

 glColor3f(0.0,0.0,0.0);
 glTranslatef(-3,8,17);
 glTranslatef(-22,-8,-17);
 cylinder(5, 5,3);

 glColor3f(1.0,1.0,1.0);

 glRotatef(90,1,0,0);
 glTranslatef(8, 2.5,-15);
 blok(2, 4, 5);


 glRotatef(90,0,1,0);
 glTranslatef(0,-0.2,7);
 blok(2, 4, 8);


 glRotatef(0,0,0,0);
 glTranslatef(0,19.2,0);
 blok(2, 4, 8);

 glRotatef(90,0,1,0);
 glTranslatef(7, 0,-8);
 blok(2, 4, 5);

 glColor3f(9.9,9.9,0.0);//lampu
 glRotatef(90,0,1,0);
 glTranslatef(0,-3,20);
 cylinder(2, 2,3);

 glColor3f(9.9,9.9,0.0);//lampu
 glRotatef(0,0,0,0);
 glTranslatef(0,-12,0);
 cylinder(2, 2,3);

 glColor3f(0.0,0.0,0.0);//knalpot
 glRotatef(0,0,0,0);
 glTranslatef(0,0,-52);
 cylinder(1, 1,3);

 glColor3f(1.0,1.0,1.0);
 glRotatef(90,1,0,0);
 glTranslatef(-8,3.5,-12);
 blok(2, 4, 8);

 glColor3f(9.0,0.0,0.0);//lampu atas
 glRotatef(0,0,0,0);
 glTranslatef(-8,28,0);
 cylinder(1, 1,12);


 glPopMatrix();


 glFlush();
 glutSwapBuffers();

}
