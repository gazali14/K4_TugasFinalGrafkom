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
