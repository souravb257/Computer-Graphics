
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <iostream>
#include <stdlib.h>
#include<windows.h>
#include <iostream>
using namespace std;
//globe color----- glColor3ub (184, 184, 172);
//globe window color----- glColor3ub (80, 150, 233);
// shed color glColor3ub (100, 161, 120);
// wall color glColor3ub (183, 148, 129);
// road color glColor3ub (185, 170, 161);
// sky color glColor3ub (53, 81, 92);
// grass green color glColor3ub (64, 157, 45);
// brick color glColor3ub (80,25,33);
// D building dark gray glColor3ub (58,68,59);
// D building blue glColor3ub (74,187,244);

float cloud_move=0.0f;
float car_move_x=0.0f;
float car_move_y=0.0f;
float car_position=0.0f;
float plane_move_x=-850;

float _rain=0.0f;
float plane_move=0.0f;

bool forward_car=false;
bool backward_car=false;
bool rainday = false;
bool moon = false;
bool sun=true;
//bool plane_run=false;
bool run_plane=false;

float bird_move=0.0f;

float sr=133;///sky Color
float sg=204;
float sb=250;







void sky()
{

  glBegin(GL_QUADS);
  glColor3ub(sr,sg,sb);
glVertex2i(-1800, 800);
glVertex2i(1800, 850);
glVertex2i(1800, 250);
glVertex2i(-1800, 200);
glEnd();

}


void sunShow(){


    if(sun){

        ///sun///

   glPushMatrix();



    glPushMatrix();
    glTranslatef(1180,100,0);
    glBegin(GL_POLYGON);
    glColor3f(1.00, 0.84, 0.00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();



    }


}

void MoonShow(){

    if(moon){
        ///moon///

   glPushMatrix();



    glPushMatrix();
    glTranslatef(1030,325,0);
    glBegin(GL_POLYGON);
    glColor3f(1,.5,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();



    //star 1st
   glColor3f(255,255,0) ;
    glBegin(GL_POLYGON);
    glVertex2i(902,102);
    glVertex2i(902,98);
    glVertex2i(898,98);
    glVertex2i(898,102);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(905,100);
    glVertex2i(902,102);
    glVertex2i(902,98);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(900,105);
    glVertex2i(898,102);
    glVertex2i(902,102);
    //glVertex2i(898,502);
    glEnd();

    /*glBegin(GL_POLYGON);
    glVertex2i(895,100);
    glVertex2i(898,98);
    glVertex2i(898,10);
    //glVertex2i(898,502);
    glEnd();
*/
    glBegin(GL_POLYGON);
    glVertex2i(900,95);
    glVertex2i(902,98);
    glVertex2i(898,98);
    //glVertex2i(898,502);
    glEnd();

//star 2nd
   glColor3f(0,0,255) ;
    glBegin(GL_POLYGON);
    glVertex2i(917,62);
    glVertex2i(917,58);
    glVertex2i(913,58);
    glVertex2i(913,62);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(920,60);
    glVertex2i(917,62);
    glVertex2i(917,58);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(915,65);
    glVertex2i(913,62);
    glVertex2i(917,62);
    //glVertex2i(898,502);
    glEnd();

    /* glBegin(GL_POLYGON);
    glVertex2i(810,95);
    glVertex2i(903,93);
    glVertex2i(903,97);
    //glVertex2i(898,502);
    glEnd();
*/
    glBegin(GL_POLYGON);
    glVertex2i(915,55);
    glVertex2i(917,58);
    glVertex2i(913,58);
    //glVertex2i(898,502);
    glEnd();

    //star 3rd
   glColor3f(255,0,0) ;
    glBegin(GL_POLYGON);
    glVertex2i(942,77);
    glVertex2i(942,73);
    glVertex2i(938,73);
    glVertex2i(938,77);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(945,75);
    glVertex2i(942,77);
    glVertex2i(942,73);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(940,80);
    glVertex2i(938,77);
    glVertex2i(942,77);
    //glVertex2i(898,502);
    glEnd();

   /* glBegin(GL_POLYGON);
    glVertex2i(895,200);
    glVertex2i(898,198);
    glVertex2i(898,202);
    //glVertex2i(898,502);
    glEnd();
*/
    glBegin(GL_POLYGON);
    glVertex2i(940,70);
    glVertex2i(942,73);
    glVertex2i(938,73);
    //glVertex2i(898,502);
    glEnd();

//star 4th
   glColor3f(255,140,255) ;
    glBegin(GL_POLYGON);
    glVertex2i(837,112);
    glVertex2i(837,108);
    glVertex2i(833,108);
    glVertex2i(833,112);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(840,110);
    glVertex2i(837,112);
    glVertex2i(837,108);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(835,115);
    glVertex2i(833,112);
    glVertex2i(837,112);
    //glVertex2i(898,502);
    glEnd();

    /* glBegin(GL_POLYGON);
    glVertex2i(810,95);
    glVertex2i(903,93);
    glVertex2i(903,97);
    //glVertex2i(898,502);
    glEnd();
*/
    glBegin(GL_POLYGON);
    glVertex2i(835,105);
    glVertex2i(837,108);
    glVertex2i(833,108);
    //glVertex2i(898,502);
    glEnd();



    }

}


void myDisplay(void)
{

glClear (GL_COLOR_BUFFER_BIT);

///sky
glPushMatrix();
glTranslatef(0,-400,0);
sky();
glPopMatrix();

///sky_end

sunShow();
MoonShow();

///bird Start///

  glPushMatrix();
glTranslatef(bird_move,0,0);


    glPushMatrix();
    glTranslatef(215,150,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<130;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(225,160,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<130;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(240,150,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<120;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(255,160,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<130;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(270,150,0);
	glBegin(GL_POLYGON);
    glColor3f(1,3,4);
	for(int i=0;i<120;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(255,155,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<120;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(240,150,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<120;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(230,155,0);
    glBegin(GL_POLYGON);
    glColor3f(1,2,4);
	for(int i=0;i<120;i++)
	{
		float pi=3.1416;
		float A=(i*3*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


//cloud second

   glPushMatrix();
    glTranslatef(500,50,0);

   glPushMatrix();
    glTranslatef(395,50,0);
    glBegin(GL_POLYGON);
    glColor3f(.95,95,96);
	for(int i=0;i<225;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(385,95,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<225;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(455,55,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<225;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	/*
	glPushMatrix();
	glTranslatef(430,300,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<500;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    /*
	glPushMatrix();
	glTranslatef(500,50,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<500;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

   */
   glPushMatrix();
	glTranslatef(495,85,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<225;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=6;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPopMatrix();

    glPopMatrix();


    ///bird Finish//






 ///Cloud Start///

    glPushMatrix();
    glTranslatef(cloud_move,0,0);


    glPushMatrix();
    glTranslatef(195,50,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(185,95,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(255,55,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(230,100,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(300,50,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(295,85,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


//cloud second

    glPushMatrix();
    glTranslatef(400,50,0);

    glPushMatrix();
    glTranslatef(195,50,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(185,95,0);
    glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(255,55,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(230,100,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(300,50,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(295,85,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

    glPopMatrix();

    glPopMatrix();

    ///Cloud Finish//



  ///Plane.....Start


  glPushMatrix();
 glTranslatef(plane_move_x,0,0);

   glPushMatrix();
    glPushMatrix();
    glColor3f(0.89, 0.33, 0.33);
    //left
    glBegin(GL_QUADS);
    glVertex2i(746,48);
    glVertex2i(731,26);
    glVertex2i(708,26);
    glVertex2i(694,55);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.83, 0.00, 0.00);
    //body
    glBegin(GL_QUADS);
    glVertex2i(766,88);
    glVertex2i(766,44);
    glVertex2i(637,63);
    glVertex2i(637,77);
    glEnd();
    glPopMatrix();


     glPushMatrix();
    glColor3f(0.88, 0.30, 0.30);
    //head
    glBegin(GL_TRIANGLES);
    glVertex2i(766,44);
     glVertex2i(766,88);
    glVertex2i(808,77);

    glEnd();
    glPopMatrix();

     glPushMatrix();
    glColor3f(0.89, 0.33, 0.33);
    //back
    glBegin(GL_QUADS);
    glVertex2i(638,63);
    glVertex2i(662,60);
    glVertex2i(659,43);
    glVertex2i(640,43);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0.89, 0.33, 0.33);
    //right
    glBegin(GL_QUADS);
    glVertex2i(751,71);
    glVertex2i(688,73);
    glVertex2i(715,110);
    glVertex2i(741,111);
    glEnd();
    glPopMatrix();

    glPopMatrix();

glPopMatrix();
  ///Plane....end



glPointSize(5.0);






/// Road
//main
glColor3ub (185, 170, 161);
glBegin(GL_POLYGON);
glVertex2i(440, 405);
glVertex2i(0, 410);
glVertex2i(0, 700);
glVertex2i(1800, 700);
glVertex2i(1380, 460);
glEnd();
//right quad
glBegin(GL_QUADS);
glVertex2i(1371, 442);
glVertex2i(1370, 462);
glVertex2i(1800, 700);
glVertex2i(1800, 445);
glEnd();
// right triangle
glBegin(GL_TRIANGLES);
glVertex2i(1370, 430);
glVertex2i(1370, 442);
glVertex2i(1410, 442);

glEnd();
///Road finish

/// Tree 1


//********ANNEX TWO********
//base
glColor3ub (80,25,33);
glBegin(GL_QUADS);
glVertex2i(1250, 550);
glVertex2i(1570, 665);
glVertex2i(1700, 580);
glVertex2i(1390, 480);
glEnd();
// garden
glColor3ub (64, 157, 45);
glBegin(GL_QUADS);
glVertex2i(1305, 550);
glVertex2i(1585, 640);
glVertex2i(1660, 590);
glVertex2i(1390, 510);
glEnd();


//******Main Shelter******


glColor3ub (184, 184, 172);
glBegin(GL_QUADS);
glVertex2i(1335, 245);
glVertex2i(1335, 250);
glVertex2i(1380, 160);
glVertex2i(1380, 150);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1380, 150);
glVertex2i(1380, 160);
glVertex2i(1507, 135);
glVertex2i(1507, 122);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1507, 122);
glVertex2i(1507, 135);
glVertex2i(1800, 190);
glVertex2i(1800, 185);
glEnd();

//shadow
glColor3ub (184, 184, 172);
glBegin(GL_QUADS);
glVertex2i(1325, 253);
glVertex2i(1380, 253);
glVertex2i(1430, 165);
glVertex2i(1383, 155);
glEnd();
// 2nd shadow
glColor3ub (184, 184, 172);
glBegin(GL_POLYGON);
glVertex2i(1385, 155);
glVertex2i(1440, 170);
glVertex2i(1800, 200);
glVertex2i(1800, 190);
glVertex2i(1505, 130);

glEnd();




//continue
glColor3ub (184, 184, 172);
glBegin(GL_POLYGON);
glVertex2i(1435, 160);
glVertex2i(1360, 250);
glVertex2i(1360, 275);
glVertex2i(1535, 200);
glVertex2i(1535, 150);
glEnd();

glColor3ub (184, 184, 172);
glBegin(GL_QUADS);
glVertex2i(1550, 160);
glVertex2i(1550, 195);
glVertex2i(1800, 230);
glVertex2i(1800, 200);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1535, 150);
glVertex2i(1535, 600);
glVertex2i(1560, 600);
glVertex2i(1550, 145);
glEnd();
glBegin(GL_QUADS);
glVertex2i(1360, 253);
glVertex2i(1360, 550);
glVertex2i(1375, 550);
glVertex2i(1365, 270);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1365, 330);
glVertex2i(1365, 340);
glVertex2i(1535, 325);
glVertex2i(1535, 310);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1552, 310);
glVertex2i(1552, 325);
glVertex2i(1800, 325);
glVertex2i(1800, 315);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1365, 420);
glVertex2i(1365, 430);
glVertex2i(1535, 480);
glVertex2i(1535, 465);
glEnd();

glBegin(GL_QUADS);
glVertex2i(1560, 465);
glVertex2i(1560, 480);
glVertex2i(1800, 445);
glVertex2i(1800, 435);
glEnd();

// glass 1
glColor3ub (74,187,244);
glBegin(GL_QUADS);
glVertex2i(1365, 272);
glVertex2i(1365, 330);
glVertex2i(1535, 310);
glVertex2i(1535, 200);
glEnd();
// glass 2
glColor3ub (74,187,244);
glBegin(GL_QUADS);
glVertex2i(1365, 340);
glVertex2i(1365, 420);
glVertex2i(1535, 465);
glVertex2i(1535, 325);
glEnd();

// glass 3
glColor3ub (74,187,244);
glBegin(GL_QUADS);
glVertex2i(1553, 325);
glVertex2i(1555, 468);
glVertex2i(1800, 435);
glVertex2i(1800, 325);
glEnd();

// glass 4
glColor3ub (74,187,244);
glBegin(GL_QUADS);
glVertex2i(1550, 195);
glVertex2i(1552, 310);
glVertex2i(1800, 315);
glVertex2i(1800, 230);
glEnd();

// borders
glColor3ub (0,0,0);

glBegin(GL_LINES);
glVertex2i(1360, 253);
glVertex2i(1435, 160);
glEnd();
glBegin(GL_LINES);
glVertex2i(1435, 160);
glVertex2i(1535, 145);
glEnd();
glBegin(GL_LINES);

glVertex2i(1535, 145);
glVertex2i(1800, 200);
glEnd();
glBegin(GL_LINES);
glVertex2i(1535, 145);
glVertex2i(1535, 200);
glEnd();


/// ANNEX 2 SHELTER FINISH


///D Building ///
// main square
glColor3ub (166, 166, 166);
glBegin(GL_QUADS);
glVertex2i(460, 145);
glVertex2i(460, 400);
glVertex2i(950, 400);
glVertex2i(950, 145);
glEnd();



// left blue window
glColor3ub (74, 187, 244);
glBegin(GL_QUADS);
glVertex2i(465, 165);
glVertex2i(465, 395);
glVertex2i(540, 395);
glVertex2i(540, 165);
glEnd();
glColor3ub (74, 187, 244);
glBegin(GL_QUADS);
glVertex2i(540, 235);
glVertex2i(540, 395);
glVertex2i(575, 395);
glVertex2i(575, 235);
glEnd();



// floor windows
//1st
glColor3ub (74, 187, 244);
glBegin(GL_QUADS);
glVertex2i(590, 355);
glVertex2i(590, 370);
glVertex2i(925, 370);
glVertex2i(925, 355);
glEnd();
//2nd
glBegin(GL_QUADS);
glVertex2i(590, 330);
glVertex2i(590, 345);
glVertex2i(925, 345);
glVertex2i(925, 330);
glEnd();
//3rd
glBegin(GL_QUADS);
glVertex2i(590, 305);
glVertex2i(590, 320);
glVertex2i(925, 320);
glVertex2i(925, 305);
glEnd();
//4th
glBegin(GL_QUADS);
glVertex2i(590, 280);
glVertex2i(590, 295);
glVertex2i(925, 295);
glVertex2i(925, 280);
glEnd();
//5th
glBegin(GL_QUADS);
glVertex2i(590, 255);
glVertex2i(590, 270);
glVertex2i(925, 270);
glVertex2i(925, 255);
glEnd();
//6th
glBegin(GL_QUADS);
glVertex2i(590, 230);
glVertex2i(590, 245);
glVertex2i(925, 245);
glVertex2i(925, 230);
glEnd();



// gray windows
//1st
glColor3ub (58, 60, 59);
glBegin(GL_QUADS);
glVertex2i(640, 205);
glVertex2i(640, 220);
glVertex2i(925, 220);
glVertex2i(925, 205);
glEnd();
//2nd
glColor3ub (58, 60, 59);
glBegin(GL_QUADS);
glVertex2i(640, 180);
glVertex2i(640, 195);
glVertex2i(925, 195);
glVertex2i(925, 180);
glEnd();
//3rd
glColor3ub (58, 60, 59);
glBegin(GL_QUADS);
glVertex2i(640, 155);
glVertex2i(640, 170);
glVertex2i(925, 170);
glVertex2i(925, 155);
glEnd();



//right side
// main square



glColor3ub (166, 166, 166);
glBegin(GL_QUADS);
glVertex2i(950, 165);
glVertex2i(950, 390);
glVertex2i(985, 390);
glVertex2i(985, 165);
glEnd();
// black windows
//1st
glColor3ub (58, 60, 59);
glBegin(GL_QUADS);
glVertex2i(952, 170);
glVertex2i(952, 190);
glVertex2i(980, 190);
glVertex2i(980, 170);
glEnd();
// 2nd
glBegin(GL_QUADS);
glVertex2i(952, 195);
glVertex2i(952, 215);
glVertex2i(980, 215);
glVertex2i(980, 195);
glEnd();
// 3rd
glBegin(GL_QUADS);
glVertex2i(952, 220);
glVertex2i(952, 240);
glVertex2i(980, 240);
glVertex2i(980, 220);
glEnd();
// 4th
glBegin(GL_QUADS);
glVertex2i(952, 245);
glVertex2i(952, 265);
glVertex2i(980, 265);
glVertex2i(980, 245);
glEnd();
// 5th
glBegin(GL_QUADS);
glVertex2i(952, 270);
glVertex2i(952, 290);
glVertex2i(980, 290);
glVertex2i(980, 270);
glEnd();
// 6th
glBegin(GL_QUADS);
glVertex2i(952, 295);
glVertex2i(952, 315);
glVertex2i(980, 315);
glVertex2i(980, 295);
glEnd();
// last
glBegin(GL_QUADS);
glVertex2i(952, 320);
glVertex2i(952, 340);
glVertex2i(980, 340);
glVertex2i(980, 320);
glEnd();



///D-Building Finish///





  ///C-Building Start//


//globe gate
glColor3ub (255, 0, 0);
glBegin(GL_QUADS);
glVertex2i(480, 375);
glVertex2i(480, 380);
glVertex2i(301, 383);
glVertex2i(301, 375);
glEnd();


glBegin(GL_QUADS);
glVertex2i(280, 375);
glVertex2i(280, 380);
glVertex2i(300, 380);
glVertex2i(300, 375);
glEnd();

glBegin(GL_QUADS);
glVertex2i(315, 382);
glVertex2i(315, 415);
glVertex2i(320, 415);
glVertex2i(320, 380);
glEnd();
glBegin(GL_QUADS);
glVertex2i(295, 382);
glVertex2i(296, 415);
glVertex2i(300, 415);
glVertex2i(300, 380);
glEnd();

glBegin(GL_QUADS);
glVertex2i(460, 382);
glVertex2i(460, 415);
glVertex2i(455, 415);
glVertex2i(455, 380);
glEnd();

glBegin(GL_QUADS);
glVertex2i(480, 382);
glVertex2i(480, 415);
glVertex2i(475, 415);
glVertex2i(475, 380);
glEnd();

// sitting area
glColor3ub (183,148,129);
glBegin(GL_QUADS);
glVertex2i(0, 400);
glVertex2i(0, 450);
glVertex2i(400, 450);
glVertex2i(400, 400);
glEnd();


    //Circle of C Building
    glPushMatrix();
    glTranslatef(200,200,0);
    glBegin(GL_POLYGON);
    glColor3f(0.72, 0.72, 0.67);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=170;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    // From Top : Quad-1
    glBegin(GL_QUADS);
    glColor3f(0.31, 0.59, 0.91);
    glVertex2i(47,123);
    glVertex2i(353,123);
    glVertex2i(334,93);
    glVertex2i(67,93);
    glEnd();

    //Quad-2
    glBegin(GL_QUADS);
    glColor3f(0.31, 0.59, 0.91);
    glVertex2i(29,195);
    glVertex2i(371,195);
    glVertex2i(366,161);
    glVertex2i(34,161);
    glEnd();

    //Quad-3
    glBegin(GL_QUADS);
    glColor3f(0.31, 0.59, 0.91);
    glVertex2i(39,262);
    glVertex2i(360,262);
    glVertex2i(369,230);
    glVertex2i(31,230);
    glEnd();

    //Bottom-Quad

    glBegin(GL_QUADS);
    glColor3f(0.45, 0.52, 0.50);
    glVertex2i(105,409);
    glVertex2i(294,409);
    glVertex2i(294,342);
    glVertex2i(105,342);
    glEnd();

    //Quad inside of Bottom Quad

    glBegin(GL_QUADS);
    glColor3f(0.19, 0.28, 0.38);
    glVertex2i(105,391);
    glVertex2i(294,391);
    glVertex2i(294,364);
    glVertex2i(105,364);
    glEnd();




///C-Building finish//

///ANNEX One START




//Annex Shelter
glColor3ub (100, 161, 120);
glBegin(GL_QUADS);
glVertex2i(550, 365);
glVertex2i(480, 370);
glVertex2i(1360, 395);
glVertex2i(1360, 370);
glEnd();
glColor3ub (184, 184, 172);
glBegin(GL_QUADS);
glVertex2i(480, 370);
glVertex2i(480, 380);
glVertex2i(1360, 405);
glVertex2i(1360, 395);
glEnd();


//center shed
glColor3ub (100, 161, 120);
glBegin(GL_QUADS);
glVertex2i(860, 350);
glVertex2i(785, 365);
glVertex2i(945, 365);
glVertex2i(1000, 350);
glEnd();
glColor3ub (184, 184, 172);
glBegin(GL_QUADS);
glVertex2i(785, 365);
glVertex2i(785, 380);
glVertex2i(945, 385);
glVertex2i(945, 365);
glEnd();
glBegin(GL_QUADS);
glVertex2i(945, 365);
glVertex2i(945, 380);
glVertex2i(1000, 365);
glVertex2i(1000, 350);
glEnd();

//Annex wall
glColor3ub (183, 148, 129);
glBegin(GL_QUADS);
glVertex2i(490, 380);
glVertex2i(490, 410);
glVertex2i(790, 430);
glVertex2i(790, 385);
glEnd();

glBegin(GL_QUADS);
glVertex2i(930, 390);
glVertex2i(930, 440);
glVertex2i(1360, 460);
glVertex2i(1360, 405);
glEnd();

// front gate
glColor3ub (184, 184, 172);;
glBegin(GL_QUADS);
glVertex2i(780, 380);
glVertex2i(780, 435);
glVertex2i(945, 445);
glVertex2i(945, 383);
glEnd();

glColor3ub (0,0,0);
glBegin(GL_QUADS);
glVertex2i(790, 390);
glVertex2i(790, 425);
glVertex2i(935, 435);
glVertex2i(935, 393);
glEnd();



///Car Start


glPushMatrix();
glTranslatef(car_move_x,car_move_y,0);

//body

glPushMatrix();
glColor3f(0.83, 0.00, 0.00);
glBegin(GL_QUADS);
glVertex2i(402,416);
glVertex2i(534,416);
glVertex2i(534,400);
glVertex2i(402,400);
glEnd();

glBegin(GL_QUADS);
glVertex2i(419,400);
glVertex2i(503,400);
glVertex2i(483,384);
glVertex2i(436,384);
glEnd();

//Glass
glColor3f(0.80, 0.80, 0.80);
glBegin(GL_QUADS);
glVertex2i(424,398);
glVertex2i(497,398);
glVertex2i(479,386);
glVertex2i(439,386);
glEnd();

glPointSize(3);
glColor3f(0.83, 0.00, 0.00);
glBegin(GL_LINES);
glVertex2i(460,398);
glVertex2i(460,386);
glEnd();

///car while


//While left//

glPushMatrix();
	glTranslatef(420,416,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


    //While right//


    glPushMatrix();
	glTranslatef(516,416,0);
	glBegin(GL_POLYGON);
    glColor3f(0.95, 0.95, 0.96);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


///while finish



glPopMatrix();





glPopMatrix();

///Car finish///



///Center pool Start
// center pool

glPushMatrix();
glTranslatef(-20, 7, 0);
glColor3ub (183, 148, 129);
glBegin(GL_QUADS);
glVertex2i(535, 435);
glVertex2i(220, 500);
glVertex2i(705, 690);
glVertex2i(965, 480);
glEnd();

// grass
glColor3ub (64, 157, 45);
glBegin(GL_QUADS);
glVertex2i(535, 435);
glVertex2i(255, 490);
glVertex2i(700, 650);
glVertex2i(965, 480);
glEnd();

//pool
glColor3ub (0, 0, 0);
glBegin(GL_QUADS);
glVertex2i(395, 505);
glVertex2i(620, 585);
glVertex2i(790, 500);
glVertex2i(535, 465);
glEnd();

//water
glColor3ub (129, 229, 239);
glBegin(GL_QUADS);
glVertex2i(465, 510);
glVertex2i(620, 560);
glVertex2i(720, 510);
glVertex2i(546, 485);
glEnd();
glPopMatrix();

///Center pool end


///Tree///1//

 glPushMatrix();

    glTranslatef(-200, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///1//


///Tree 2//3 quads


glPushMatrix();

    glTranslatef(0, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,216);
    glVertex2i(163,288);
	glVertex2i(268,288);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,192);
    glVertex2i(156,267);
	glVertex2i(277,267);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,162);
    glVertex2i(155,230);
	glVertex2i(276,230);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(227,288);
    glVertex2i(208,288);
	glVertex2i(208,394);
	glVertex2i(227,394);
	glEnd();





    glPopMatrix();


///Tree 2 finish///


///Tree///3//

 glPushMatrix();

    glTranslatef(-90, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///3//





///Tree 4 start///

glPushMatrix();

    glTranslatef(-100, 333, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(368,100);
    glVertex2i(270,160);
	glVertex2i(466,158);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(370,69);
    glVertex2i(282,131);
	glVertex2i(458,132);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(367,43);
    glVertex2i(302,94);
	glVertex2i(434,94);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(385,158);
    glVertex2i(355,158);
	glVertex2i(355,315);
	glVertex2i(385,315);
	glEnd();





    glPopMatrix();



///Tree 4 finish ///



///Tree///5//

 glPushMatrix();

    glTranslatef(65, 355, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///5//



///Tree///6//

 glPushMatrix();

    glTranslatef(295, 287, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///6//


///Tree 7//3 quads


glPushMatrix();

    glTranslatef(845, 332, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,216);
    glVertex2i(163,288);
	glVertex2i(268,288);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,192);
    glVertex2i(156,267);
	glVertex2i(277,267);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,162);
    glVertex2i(155,230);
	glVertex2i(276,230);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(227,288);
    glVertex2i(208,288);
	glVertex2i(208,394);
	glVertex2i(227,394);
	glEnd();





    glPopMatrix();


///Tree 7 finish///



///Tree 8 start///Large

glPushMatrix();

    glTranslatef(528, 525, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(368,100);
    glVertex2i(270,160);
	glVertex2i(466,158);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(370,69);
    glVertex2i(282,131);
	glVertex2i(458,132);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(367,43);
    glVertex2i(302,94);
	glVertex2i(434,94);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(385,158);
    glVertex2i(355,158);
	glVertex2i(355,315);
	glVertex2i(385,315);
	glEnd();





    glPopMatrix();



///Tree 8 finish ///



///Tree-Group--1----Start

glPushMatrix();
glTranslatef(1550,20,0);
 glScalef(1.5, 1.5, 1.20);

///Tree///1//

 glPushMatrix();

    glTranslatef(-200, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///1//


///Tree 2//3 quads


glPushMatrix();

    glTranslatef(0, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,216);
    glVertex2i(163,288);
	glVertex2i(268,288);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,192);
    glVertex2i(156,267);
	glVertex2i(277,267);
	glEnd();

	glColor3f(0, 0.8, 0.2);
    glBegin(GL_TRIANGLES);
    glVertex2i(216,162);
    glVertex2i(155,230);
	glVertex2i(276,230);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(227,288);
    glVertex2i(208,288);
	glVertex2i(208,394);
	glVertex2i(227,394);
	glEnd();





    glPopMatrix();


///Tree 2 finish///


///Tree///3//

 glPushMatrix();

    glTranslatef(-90, 300, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(545,187);
    glVertex2i(484,257);
	glVertex2i(609,257);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(543,222);
    glVertex2i(480,288);
	glVertex2i(609,288);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(534,290);
    glVertex2i(534,396);
	glVertex2i(553,396);
	glVertex2i(553,290);
	glEnd();





    glPopMatrix();
///finish tree///3//


///Tree 4 start///

glPushMatrix();

    glTranslatef(-100, 333, 0);
    glScalef(0.40, 0.40, 0.40);
    glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(368,100);
    glVertex2i(270,160);
	glVertex2i(466,158);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(370,69);
    glVertex2i(282,131);
	glVertex2i(458,132);
	glEnd();

	glColor3f(0.04, 0.42, 0.02);
    glBegin(GL_TRIANGLES);
    glVertex2i(367,43);
    glVertex2i(302,94);
	glVertex2i(434,94);
	glEnd();

	glColor3f(0.48, 0.32, 0.23);
	glBegin(GL_QUADS);
	glVertex2i(385,158);
    glVertex2i(355,158);
	glVertex2i(355,315);
	glVertex2i(385,315);
	glEnd();





    glPopMatrix();



///Tree 4 finish ///



///Tree-Group--1----Finish-------
glPopMatrix();





/////circle tree 1

   glPushMatrix();
    glTranslatef(790, 410, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0,0.8,0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(800, 400, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(810, 420, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.48, 0.32, 0.23);
    glBegin(GL_QUADS);
    glVertex2i(790,500);
    glVertex2i(802,500);
	glVertex2i(790, 420);
	glVertex2i(802, 420);
	glEnd();
///tree 1 circle finish




/////circle tree 2



glPushMatrix();
glTranslatef(270,0, 0);



   glPushMatrix();
    glTranslatef(270,470, 0);

    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0,0.8,0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(260, 490, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(280, 490, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();




    glColor3f(0.48, 0.32, 0.23);
    glBegin(GL_QUADS);
    glVertex2i(265,600);
    glVertex2i(270,500);
	glVertex2i(265, 500);
	glVertex2i(275, 600);
	glEnd();


	glPopMatrix();
///tree 2 circle finish





///circle tree 3

   glPushMatrix();//ciecle1
    glTranslatef(370,380,0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0,0.8,0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();//circle2
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(330,390,0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glPushMatrix();//circle3
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(410,390,0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=30;
		float y = r * sin(A);
		float x = r * cos(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();


glPushMatrix();//circle4
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(320, 400, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();





    glPushMatrix();//circle5
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(420, 400, 0);



    glPushMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.8, 0.2);
	for(int i=0;i<1000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/500;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
    glPopMatrix();



    glColor3f(0.48, 0.32, 0.23);
    glBegin(GL_QUADS);
    glVertex2i(361,490);
    glVertex2i(374,500);
	glVertex2i(361, 420);
	glVertex2i(374, 420);
	glEnd();
///tree 3 circle finish


glFlush ();



}



void update(int value) {


      bird_move += 2.0f;
	if (bird_move > 1800)
    {
        bird_move -= 3000;
    }

     cloud_move += 1.0f;
	if (cloud_move > 1800)
    {
        cloud_move -= 2550;
    }
    //plane_move+2.0f;

	glutPostRedisplay();
	glutTimerFunc(25, update, 0);

}



void PlaneRunning(int value) {


    if(run_plane){

    plane_move_x += 3.0f;
    if(plane_move_x>1800)
    {

        plane_move_x=-850;
        run_plane=false;
    }


	glutPostRedisplay();
	glutTimerFunc(25, PlaneRunning, 0);

    }




}




void  carForward(int value)
{
    if(forward_car){
        car_move_x+=1.5f;
        car_move_y+=0.10f;

    if(car_move_x>800)
    {

        backward_car=false;
        forward_car=false;
    }

    glutPostRedisplay();
    glutTimerFunc(25,carForward,0);

    }
}

void carBackward(int value){

    if(backward_car){
        car_move_x-=1.5f;
        car_move_y-=0.10f;
        if(car_move_x<50){
            backward_car=false;
            forward_car=false;
        }



    glutPostRedisplay();
    glutTimerFunc(25,carBackward,0);
    }
}


///Rain//////////


void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1800; y%=700;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}






///Rain_end////






void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{
	case 'a':
        forward_car = true;
	    backward_car = false;
	    carForward(car_move_x);
	    //car_position-=1.5f;
	break;

	case 'd':
	     forward_car = false;
	     backward_car = true;
         carBackward(car_move_x);
	    break;

    case 's':
        forward_car = false;
        backward_car = false;
        break;


     case 'n':///

                {
                sr=0;///sky night
                sg=0;
                sb=100;

                moon=true;
                sun=false;

                }
                break;
     case 'm':
                {

                 sr=133;///sky day
                 sg=204;
                 sb=250;

                 moon=false;
                 sun=true;
               }
               break;


     case 'r':
        rainday = true;
        Rain(_rain);
        sndPlaySound("River.wav",SND_ASYNC|SND_LOOP);
        break;

    case 't':
        rainday = false;
		sndPlaySound(NULL,SND_ASYNC);
        break;

    case 'p':
        run_plane=true;
        PlaneRunning(plane_move_x);


        break;

    case 10:
        exit(0);
        break;
	glutPostRedisplay();
	}
}




















void myInit (void)
{

glClearColor(0, 0, 0, 0.2); //background color
//glClearColor(80, 150, 233,0.1f); //background color
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1800.0, 700.0,  0.0);
}





int main(int argc, char** argv)
{
    cout << endl << "*********** American International University- Bangladesh Campus ********************" << endl << endl;

    cout << "Press A : To Forward the Car" << endl << endl;
    cout << "Press D : To Backward the Car" << endl << endl;
    cout << "Press S : To Stop the Car" << endl << endl;

    cout << "Press R : For Rain " << endl << endl;
    cout << "Press T : For Stopping the Rain" << endl << endl;

    cout << "Press N : For Night " << endl << endl;
    cout << "Press M : For Day" << endl << endl;
    cout << "Press P : For Plane" << endl << endl;

glutInit(&argc, argv); //configure the glut
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1800, 700); // size of the window
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
glutTimerFunc(25, update, 0);
glutKeyboardFunc(myKeyboard);
myInit ();
glutMainLoop(); //this process runs continiously

}
