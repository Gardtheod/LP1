#include <iostream>
using std::cerr;
using std::endl;
#include <string>
using std::string;
#include <sstream>
#include <stdlib.h>
//using std::exit;
#include <GL/glut.h> 

#include "Turtle.h"

//Variable Globales

const int initwinsize=1000;
const int ESCKEY = 27;  
Turtle t;
int nivelfractal=0;
const int maxnivelfractal=10;
const int minnivelfractal=0;

//To string 

template<typename T>
std::string tostring(const T & input){
	std:: ostringstream os;
	os<< input;
	return os.str();
}
// GLUT_BITMAP_9_BY_15 es una fuente de GLUT
void MapadeBits(const  string message, double x, double y){
	glRasterPos2d(x,y);
	for (string::const_iterator ii = message.begin();
	ii != message.end();
	++ii)
	{
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *ii);
	}
	
}
void copo_recursivo(int level, double length)
{
   if (level <= 0)
   {
      t.forward(length);
   }
   else
   {
      copo_recursivo(level-1, length/3.0);
      t.left(60);
      copo_recursivo(level-1, length/3.0);
      t.right(120);
      copo_recursivo(level-1, length/3.0);
      t.left(60);
      copo_recursivo(level-1, length/3.0);
   }
}

void dibujarcopo()
{
   const double tamaniofractal = 1.0;

   t.reset();
   t.positionini(-0.5, 0.3);  
   t.setvalue(0.0);        

   copo_recursivo(nivelfractal, tamaniofractal);
   t.right(120);
   copo_recursivo(nivelfractal, tamaniofractal);
   t.right(120);
   copo_recursivo(nivelfractal, tamaniofractal);
}

void Pantalla()
{
   glClear(GL_COLOR_BUFFER_BIT);

  
   glLineWidth(2.0);
   glColor3d(0.5, 0.0, 0.9);
   dibujarcopo();

  
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
	glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
    glColor3d(0.5, 0, 0);
    MapadeBits("Copo de Nieve Koch", -0.9, 0.9);
    MapadeBits("<- ->   Cambiar nivel [" + tostring(nivelfractal) + "]", -0.9, 0.8);
    MapadeBits("Esc     Salir", -0.9, 0.7);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);

   glFlush(); 
}

void teclado(unsigned char key, int x, int y)
{
   switch (key)
   {
   case ESCKEY:  
      exit(0);
      break;
   }
}

void control(int key, int x, int y)//GLUT Special Func
{
   switch (key)
   {
   case GLUT_KEY_RIGHT:  
      if (nivelfractal < maxnivelfractal)
      {
         ++nivelfractal;
         glutPostRedisplay();
      }
      break;
   case GLUT_KEY_LEFT:   
      if (nivelfractal > minnivelfractal)
      {
         --nivelfractal;
         glutPostRedisplay();
      }
      break;
   }
}

void iniciar()
{
   glClearColor(1.0, 1.0, 1.0, 0.0);  // fondo blanco
}



int main(int argc, char ** argv){
	
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  
   glutInitWindowSize(initwinsize, initwinsize);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Turtle C++ - Copo de Nieve");
   
   iniciar();
   glutDisplayFunc(Pantalla);
   glutKeyboardFunc(teclado);
   glutSpecialFunc(control);

   glutMainLoop();

   return 0;
}
