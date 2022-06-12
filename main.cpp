#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/


      glBegin(GL_QUADS);
      glColor3ub(91,188,228);
      glVertex3f(0,130,0);
      glVertex3f(200,130,0);
      glVertex3f(200,200,0);
      glVertex3f(0,200,0);
      glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(160,82,45);
      glVertex2f(0,130);
      glVertex2f(140,130);
      glVertex2f(80,180);
      glEnd();



      glBegin(GL_POLYGON);
      glColor3ub(139,69,19);
      glVertex2f(20,130);
      glVertex2f(110,130);
      glVertex2f(70,190);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(139,69,19);
      glVertex2f(0,130);
      glVertex2f(90,130);
      glVertex2f(35,185);
      glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(139,69,19);
      glVertex2f(10,120);
      glVertex2f(80,120);
      glVertex2f(20,190);
      glEnd();
/*-----------------------------------------------*/

      /*circle*/
        glBegin(GL_POLYGON);
        glColor3ub(255,128,0);
        float theta;

        for(int i=0; i<360; i++)
        {
            theta = i*3.142/180;
            glVertex2f(180.5+6*cos(theta),190+6*sin(theta));
        }

        glEnd();

        /*-----------------------------------------------------------------------*/

      glBegin(GL_QUADS);
      glColor3ub(0,153,76);
      glVertex3f(0,0,0);
      glVertex3f(200,0,0);
      glVertex3f(200,60,0);
      glVertex3f(0,60,0);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(114,114,114);
      glVertex3f(0,60,0);
      glVertex3f(200,60,0);
      glVertex3f(200,120,0);
      glVertex3f(0,120,0);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(244,243,239);
      glVertex3f(0,88,0);
      glVertex3f(200,88,0);
      glVertex3f(200,92,0);
      glVertex3f(0,92,0);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,153,76);
      glVertex3f(0,120,0);
      glVertex3f(200,120,0);
      glVertex3f(200,130,0);
      glVertex3f(0,130,0);
      glEnd();


     /*paki*/
/*------------------------------------------------------------------------------*/
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(171,170.5,0);
      glVertex3f(170.5,171.5,0);
      glVertex3f(174,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(171,170.5,0);
      glVertex3f(170.5,171.5,0);
      glVertex3f(164,175.5,0);
      glEnd();

      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(163,170.5,0);
      glVertex3f(164.5,171.5,0);
      glVertex3f(168,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(163,170.5,0);
      glVertex3f(164,171.5,0);
      glVertex3f(160,175.5,0);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(51,0,0);
      glVertex3f(160,170.5,0);
      glVertex3f(161.5,171.5,0);
      glVertex3f(165,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
      glColor3ub(51,0,0);
      glVertex3f(160,170.5,0);
      glVertex3f(161,171.5,0);
      glVertex3f(155,175.5,0);
      glEnd();

      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(155,170.5,0);
      glVertex3f(155.5,171.5,0);
      glVertex3f(160,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(155,170.5,0);
      glVertex3f(155.5,171.5,0);
      glVertex3f(150,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(150,170.5,0);
      glVertex3f(150.5,171.5,0);
      glVertex3f(155,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(150,170.5,0);
      glVertex3f(150.5,171.5,0);
      glVertex3f(145,175.5,0);
      glEnd();

      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(145,170.5,0);
      glVertex3f(145.5,171.5,0);
      glVertex3f(150,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(145,170.5,0);
      glVertex3f(145.5,171.5,0);
      glVertex3f(140,175.5,0);
      glEnd();

      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(140,170.5,0);
      glVertex3f(140.5,171.5,0);
      glVertex3f(145,175.5,0);
      glEnd();
      glBegin(GL_TRIANGLES);
	  glColor3ub(51,0,0);
      glVertex3f(140,170.5,0);
      glVertex3f(140.5,171.5,0);
      glVertex3f(135,175.5,0);
      glEnd();

        /*car*/
        /*----------------------------------------------------------------------------*/
      glBegin(GL_POLYGON);
      glColor3ub(229,255,204);
      glVertex3f(3,70,0);
      glVertex3f(40,70,0);
      glVertex3f(40,77,0);
      glVertex3f(3,77,0);
      glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(144,144,144);
      glVertex3f(8,70,0);
      glVertex3f(10,74,0);
      glVertex3f(14,74,0);
      glVertex3f(16,70,0);
      glEnd();
       /*circle*/
        glBegin(GL_POLYGON);
        glColor3ub(255,153,51);
        float theta3;

        for(int i=0; i<360; i++)
        {
            theta3 = i*3.142/180;
            glVertex2f(12+3*cos(theta3),70+3*sin(theta3));
        }

        glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(144,144,144);
      glVertex3f(27,70,0);
      glVertex3f(29,74,0);
      glVertex3f(33,74,0);
      glVertex3f(35,70,0);
      glEnd();

      /*circle*/
        glBegin(GL_POLYGON);
        glColor3ub(255,153,51);
        float theta4;

        for(int i=0; i<360; i++)
        {
            theta4 = i*3.142/180;
            glVertex2f(31+3*cos(theta4),70+3*sin(theta4));
        }

        glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(91,188,228);
      glVertex3f(7,77,0);
      glVertex3f(12,82,0);
      glVertex3f(30,82,0);
      glVertex3f(35,77,0);
      glEnd();








      /*man*/

      glBegin(GL_QUADS);
      glColor3ub(192,192,192);
      glVertex3f(54,20,0);
      glVertex3f(56,20,0);
      glVertex3f(56,24,0);
      glVertex3f(54,24,0);
      glEnd();


        /*circle*/
        glBegin(GL_POLYGON);
        glColor3ub(255,153,51);
        float theta2;

        for(int i=0; i<360; i++)
        {
            theta2 = i*3.142/180;
            glVertex2f(55+2.5*cos(theta2),25+2.5*sin(theta2));
        }

        glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,51,253);
      glVertex3f(50,7,0);
      glVertex3f(60,7,0);
      glVertex3f(60,20,0);
      glVertex3f(50,20,0);
      glEnd();


      glBegin(GL_QUADS);
      glColor3ub(192,192,192);
      glVertex3f(51.5,7,0);
      glVertex3f(51.5,2,0);
      glVertex3f(53,2,0);
      glVertex3f(53,7,0);
      glEnd();


      glBegin(GL_QUADS);
      glColor3ub(192,192,192);
      glVertex3f(58.5,7,0);
      glVertex3f(58.5,2,0);
      glVertex3f(57,2,0);
      glVertex3f(57,7,0);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(192,192,192);
      glVertex3f(50,20,0);
      glVertex3f(45,16,0);
      glVertex3f(47,15.5,0);
      glVertex3f(50,19,0);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(192,192,192);
      glVertex3f(60,20,0);
      glVertex3f(65,16,0);
      glVertex3f(63,15.5,0);
      glVertex3f(60,19,0);
      glEnd();


    /*tree*/

      glBegin(GL_QUADS);
      glColor3ub(153,76,0);
      glVertex3f(80,10,0);
      glVertex3f(85,10,0);
      glVertex3f(85,35,0);
      glVertex3f(80,35,0);
      glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(70,35,0);
      glVertex3f(95,35,0);
      glVertex3f(82.5,50,0);
      glEnd();

       glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(72,40,0);
      glVertex3f(93,40,0);
      glVertex3f(82.5,55,0);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(75,45,0);
      glVertex3f(90,45,0);
      glVertex3f(82.5,58,0);
      glEnd();




    /*tree*/

      glBegin(GL_QUADS);
      glColor3ub(153,76,0);
      glVertex3f(110,10,0);
      glVertex3f(115,10,0);
      glVertex3f(115,35,0);
      glVertex3f(110,35,0);
      glEnd();


      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(95,35,0);
      glVertex3f(130,35,0);
      glVertex3f(112.5,50,0);
      glEnd();

       glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(97,40,0);
      glVertex3f(128,40,0);
      glVertex3f(112.5,55,0);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(100,45,0);
      glVertex3f(125,45,0);
      glVertex3f(112.5,58,0);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(145,40,0);
      glVertex3f(175,40,0);
      glVertex3f(160,50,0);
      glEnd();

       glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(147,44,0);
      glVertex3f(172,44,0);
      glVertex3f(160,55,0);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3ub(0,255,0);
      glVertex3f(150,48,0);
      glVertex3f(170,48,0);
      glVertex3f(160,60,0);
      glEnd();






    /*Building Body*/
    /*main part*/
    glBegin(GL_QUADS);
    glColor3ub(204,255,255);
	glVertex3f(10,5,0);
	glVertex3f(40,5,0);
	glVertex3f(40,45,0);
	glVertex3f(10,45,0);
	glEnd();

    /*top part*/
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(10,45,0);
	glVertex3f(40,45,0);
	glVertex3f(45,50,0);
	glVertex3f(15,50,0);
	glEnd();

    /*right side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(40,5,0);
	glVertex3f(45,10,0);
	glVertex3f(45,50,0);
	glVertex3f(40,45,0);
	glEnd();

    /*Side Devider*/
    /*left side part*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(10,5,0);
	glVertex3f(20,5,0);
	glVertex3f(20,45,0);
	glVertex3f(10,45,0);
	glEnd();

    /*right side part*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(30,5,0);
	glVertex3f(40,5,0);
	glVertex3f(40,45,0);
	glVertex3f(30,45,0);
	glEnd();

    /*Belkoni*/
    /*left side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(10,5,0);
	glVertex3f(20,5,0);
	glVertex3f(20,10,0);
	glVertex3f(10,10,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(10,15,0);
	glVertex3f(20,15,0);
	glVertex3f(20,20,0);
	glVertex3f(10,20,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(10,25,0);
	glVertex3f(20,25,0);
	glVertex3f(20,30,0);
	glVertex3f(10,30,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(10,35,0);
	glVertex3f(20,35,0);
	glVertex3f(20,40,0);
	glVertex3f(10,40,0);
	glEnd();

    /*right side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(30,5,0);
	glVertex3f(40,5,0);
	glVertex3f(40,10,0);
	glVertex3f(30,10,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(30,15,0);
	glVertex3f(40,15,0);
	glVertex3f(40,20,0);
	glVertex3f(30,20,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(30,25,0);
	glVertex3f(40,25,0);
	glVertex3f(40,30,0);
	glVertex3f(30,30,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,120,255);

	glVertex3f(30,35,0);
	glVertex3f(40,35,0);
	glVertex3f(40,40,0);
	glVertex3f(30,40,0);
	glEnd();

    /*Main Door*/
    /*left piller part*/
    glBegin(GL_QUADS);
	glColor3ub(120,0,255);

	glVertex3f(20,5,0);
	glVertex3f(22,5,0);
	glVertex3f(22,15,0);
	glVertex3f(20,15,0);
	glEnd();

    /*right piller part*/
	glBegin(GL_QUADS);
	glColor3ub(120,0,255);

	glVertex3f(28,5,0);
	glVertex3f(30,5,0);
	glVertex3f(30,15,0);
	glVertex3f(28,15,0);
	glEnd();

    /*middle part*/
	glBegin(GL_QUADS);
	glColor3ub(150,120,255);

	glVertex3f(22,5,0);
	glVertex3f(28,5,0);
	glVertex3f(28,15,0);
	glVertex3f(22,15,0);
	glEnd();

    /*Middle Windows*/
    glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(23,17,0);
	glVertex3f(27,17,0);
	glVertex3f(27,23,0);
	glVertex3f(23,23,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(23,27,0);
	glVertex3f(27,27,0);
	glVertex3f(27,33,0);
	glVertex3f(23,33,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(23,37,0);
	glVertex3f(27,37,0);
	glVertex3f(27,43,0);
	glVertex3f(23,43,0);
	glEnd();

    /*Belkoni Windows*/
    /*Left side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(11,11,0);
	glVertex3f(14,11,0);
	glVertex3f(14,14,0);
	glVertex3f(11,14,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(11,21,0);
	glVertex3f(14,21,0);
	glVertex3f(14,24,0);
	glVertex3f(11,24,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(11,31,0);
	glVertex3f(14,31,0);
	glVertex3f(14,34,0);
	glVertex3f(11,34,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(11,41,0);
	glVertex3f(14,41,0);
	glVertex3f(14,44,0);
	glVertex3f(11,44,0);
	glEnd();

	/*right side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(31,11,0);
	glVertex3f(34,11,0);
	glVertex3f(34,14,0);
	glVertex3f(31,14,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(31,21,0);
	glVertex3f(34,21,0);
	glVertex3f(34,24,0);
	glVertex3f(31,24,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(31,31,0);
	glVertex3f(34,31,0);
	glVertex3f(34,34,0);
	glVertex3f(31,34,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(31,41,0);
	glVertex3f(34,41,0);
	glVertex3f(34,44,0);
	glVertex3f(31,44,0);
	glEnd();

	/*Belkoni Doors*/
	/*left side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(17,10,0);
	glVertex3f(19,10,0);
	glVertex3f(19,13,0);
	glVertex3f(17,13,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(17,20,0);
	glVertex3f(19,20,0);
	glVertex3f(19,23,0);
	glVertex3f(17,23,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(17,30,0);
	glVertex3f(19,30,0);
	glVertex3f(19,33,0);
	glVertex3f(17,33,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(17,40,0);
	glVertex3f(19,40,0);
	glVertex3f(19,43,0);
	glVertex3f(17,43,0);
	glEnd();

	/*right side part*/
	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(37,10,0);
	glVertex3f(39,10,0);
	glVertex3f(39,13,0);
	glVertex3f(37,13,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(37,20,0);
	glVertex3f(39,20,0);
	glVertex3f(39,23,0);
	glVertex3f(37,23,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(37,30,0);
	glVertex3f(39,30,0);
	glVertex3f(39,33,0);
	glVertex3f(37,33,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f(37,40,0);
	glVertex3f(39,40,0);
	glVertex3f(39,43,0);
	glVertex3f(37,43,0);
	glEnd();

	/*Middle Windows Dvider*/
	glBegin(GL_QUADS);
	glColor3ub(120,150,255);

	glVertex3f(20,15,0);
	glVertex3f(30,15,0);
	glVertex3f(30,16,0);
	glVertex3f(20,16,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(120,150,255);

	glVertex3f(20,25,0);
	glVertex3f(30,25,0);
	glVertex3f(30,26,0);
	glVertex3f(20,26,0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(120,150,255);

	glVertex3f(20,35,0);
	glVertex3f(30,35,0);
	glVertex3f(30,36,0);
	glVertex3f(20,36,0);
	glEnd();

	/*Flag*/
	/*stick*/
	glBegin(GL_QUADS);
	glColor3ub(12,15,255);

	glVertex3f(20,47,0);
	glVertex3f(21,47,0);
	glVertex3f(21,65,0);
	glVertex3f(20,65,0);
	glEnd();

	/*Body*/
	glBegin(GL_QUADS);
	glColor3ub(0,204,0);

	glVertex3f(21,55,0);
	glVertex3f(40,55,0);
	glVertex3f(40,65,0);
	glVertex3f(21,65,0);
	glEnd();

	/*circle*/
	glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	float theta1;

	for(int i=0; i<360; i++)
	{
	    theta1 = i*3.142/180;
	    glVertex2f(30+4*cos(theta1),60+4*sin(theta1));
	}

	glEnd();


	/*------------------------------------------------------------------------------------------*/


    /*house 3*/
    /*body*/
    glBegin(GL_QUADS);
	glColor3ub(139,69,19);

	glVertex3f(130,5,0);
	glVertex3f(170,5,0);
	glVertex3f(170,30,0);
	glVertex3f(130,30,0);
	glEnd();

	/*right side*/
    glBegin(GL_QUADS);
	glColor3ub(139,69,19);

	glVertex3f(170,5,0);
	glVertex3f(190,5,0);
	glVertex3f(190,30,0);
	glVertex3f(170,30,0);
	glEnd();

	/*top roof*/
    glBegin(GL_QUADS);
	glColor3ub(255,204,204);

	glVertex3f(130,30,0);
	glVertex3f(170,30,0);
	glVertex3f(180,40,0);
	glVertex3f(140,40,0);
	glEnd();

	/*right roof*/
    glBegin(GL_TRIANGLES);
	glColor3ub(255,204,153);

	glVertex3f(170,30,0);
	glVertex3f(190,30,0);
	glVertex3f(180,40,0);
	glEnd();

	/*front window*/
	/*right*/
    glBegin(GL_QUADS);
	glColor3ub(0,120,210);

	glVertex3f(133,13,0);
	glVertex3f(141,13,0);
	glVertex3f(141,23,0);
	glVertex3f(133,23,0);
	glEnd();

	/*left*/
    glBegin(GL_QUADS);
	glColor3ub(0,120,210);

	glVertex3f(159,13,0);
	glVertex3f(167,13,0);
	glVertex3f(167,23,0);
	glVertex3f(159,23,0);
	glEnd();

    /*right*/
    glBegin(GL_QUADS);
	glColor3ub(0,120,210);

	glVertex3f(175,13,0);
	glVertex3f(185,13,0);
	glVertex3f(185,23,0);
	glVertex3f(175,23,0);
	glEnd();

	/*door*/
	glBegin(GL_QUADS);
	glColor3ub(0,120,210);

	glVertex3f(145,5,0);
	glVertex3f(155,5,0);
	glVertex3f(155,22,0);
	glVertex3f(145,22,0);
	glEnd();

	/*piller*/
	/*part 1*/
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(130,5,0);
	glVertex3f(131,5,0);
	glVertex3f(131,30,0);
	glVertex3f(130,30,0);
	glEnd();

	/*part 2*/
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(169,5,0);
	glVertex3f(170,5,0);
	glVertex3f(170,30,0);
	glVertex3f(169,30,0);
	glEnd();

	/*part 3*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(170,5,0);
	glVertex3f(171,5,0);
	glVertex3f(171,30,0);
	glVertex3f(170,30,0);
	glEnd();

	/*part 4*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(189,5,0);
	glVertex3f(190,5,0);
	glVertex3f(190,30,0);
	glVertex3f(189,30,0);
	glEnd();

	/*floor*/
	/*part 1*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(127,3,0);
	glVertex3f(170,3,0);
	glVertex3f(170,5,0);
	glVertex3f(130,5,0);
	glEnd();

	/*part 2*/
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(170,3,0);
	glVertex3f(193,3,0);
	glVertex3f(190,5,0);
	glVertex3f(170,5,0);
	glEnd();

	/*top piller*/
	/*part 1*/
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);

	glVertex3f(130,29,0);
	glVertex3f(170,29,0);
	glVertex3f(170,30,0);
	glVertex3f(130,30,0);
	glEnd();

    /*part 2*/
	glBegin(GL_QUADS);
	glColor3ub(255,120,0);

	glVertex3f(170,29,0);
	glVertex3f(190,29,0);
	glVertex3f(190,30,0);
	glVertex3f(170,30,0);
	glEnd();





	/*glBegin(GL_QUADS);
	glColor3ub(0,0,255);

	glVertex3f();
	glVertex3f();
	glVertex3f();
	glVertex3f();
	glEnd();*/

glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();

glOrtho(0, 200, 0, 200, -200.0, 200.0);
}


int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

glutInitWindowSize (800, 800);
glutInitWindowPosition (-300, 300);
glutCreateWindow ("Project (183-15-2317)");
init ();
glutDisplayFunc(display);
glutMainLoop();

return 0; /* ISO C requires main to return int. */

}
