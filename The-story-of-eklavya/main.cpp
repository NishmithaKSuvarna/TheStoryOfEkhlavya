
#include<Windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<MMSystem.h>
#include<string.h>
void leaf();
void sky();
void eee();
void fff();
void arjuna();
void arrow_arjuna();
void arjuna1();
void house();
void house1();
void ground();
void ekalavya();
void drona();
void stud();
void stud1();
void stud2();
void back();
void man();
void man_ekh();
void mydisplaylastscene();
void man1();
void idol();
void idle();
void idle1();
void idle2();
void sea();
void bird();
void bird1();
void arrow();
void arrow1();
void flower();
void blood();
void drona1();
void grass();
void tree();
void stone();
void man2();
void thumb1();
void thumb2();
void man3();
void thumb();
void drona_dia();
void mydisplay();
void mydisplay2();
void mydisplay3();
void mydisplay4();
void mydisplay5();
void mydisplay6();
void mydisplay7();
void mydisplay8();
void mydisplay9();
void mydisplay10();
void cloud();
void cry();
int j=0;
float i=0.0,f,a,s,c,b,z,d,g,t,o,l;
int s2,s3;
	char *str1="NMAM INSTITUTE OF TECHNOLOGY";
	char *str2="NITTE,KARKALA";
	char *str3="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	char *str4="COMPUTER GRAPHICS";
	char *str5="MINI PROJECT ON";
	char *str6="EKALAVYA";
	char *str7="TEAM MEMBER:";
	char *str8="NISHMITHA.K.SUVARNA  4NM18CS104";
	char *str9="NAMANA V T  4NM18CS098";
	char *str10="DEPT OF CSE SEC B";
	char *str11="PROJECT GUIDED BY";
	char *str12="PRADEEP KANCHAN";
	char *str13="ASSISTENT PROFFESSOR";
	char *str14="DEPT OF CSE";
	char *str15="PRESS 'Q' TO CONTINUE";
	char *str16="PRESS 'P' TO CONTINUE";
	char *str17="PRESS 'R' TO CONTINUE";
	char *str18="PRESS 'S' TO CONTINUE";
	char *str19a="PRESS N TO CONTINUE";
	char *str19b="PRESS J TO CONTINUE";
    char *str19="PRESS T TO CONTINUE";
    char *str20="PRESS 'U' TO CONTINUE";
    char *str21="PRESS 'F' TO CONTINUE";
    char *str21a=" PRESS M TO CONTINUE";
    char *str21b="PRESS X TO CONTINUE";
    char *str22="Eklavya,as guru dakshin give me your right thumb";
    char *str23="I will never disobey your wish sir";

    char *stra="Ekhlavya walking towards his guru dronacharya       Press 1 to continue";
    char *strb="Ekhlavya tries to make idol of his guru     Press 2 to continue";
    char *strc="He finally does idol of his guru    Press 3 to continue";
    char *strd="He worships his guru        Press 4 to continue";
    char *stre="He learns archery in front of his guru's idol   Press 5 to continue";
    char *strf="Ekalavya and Arjuna shoot the bird but Arjuna was unable to do it ,thereby he gets Jealous  Press 6 to continue";
    char *strg="Dronachraya was stunned and he knew ekalavya had skills to surpass arjuna.  Press 7 to continue";
void keys2(unsigned char key2,int x,int y);
void keysa(unsigned char keya,int x,int y);
void keys3(unsigned char key3,int x,int y);
void keys4(unsigned char key4,int x,int y);
void keys5a(unsigned char key5,int x,int y);
void keys5(unsigned char key5,int x,int y);
void keys5b(unsigned char key5,int x,int y);
void keys6(unsigned char key6,int x,int y);
void keys7(unsigned char key7,int x,int y);
void keys7first(unsigned char key7,int x,int y);
void keys7a(unsigned char key7,int x,int y);
void keys8(unsigned char key8,int x,int y);
void keys9(unsigned char key9,int x,int y);

void keysb(unsigned char keyb,int x,int y);
void keysc(unsigned char keyc,int x,int y);
void keysd(unsigned char keyd,int x,int y);
void keyse(unsigned char keye,int x,int y);
void keysf(unsigned char keyf,int x,int y);
void keysg(unsigned char keyg,int x,int y);


void myinit(void)

{
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}
void myinit1(void)

{
	glClearColor(0.0,0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLineWidth(5);
}

void myinit2(void)
{
	glClearColor(0,0.5,0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(0,700,0,700);
	glMatrixMode(GL_MODELVIEW);
}

void mydisplay()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(165,475);

	for(j=0;j<strlen(str1);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[j]);
	}
	glRasterPos2f(200,450);

	for(j=0;j<strlen(str2);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[j]);
	}
	glRasterPos2f(120,425);

	for(j=0;j<strlen(str3);j++)
	{
		glColor3f(0,0,1);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[j]);
	}
	glRasterPos2f(190,400);

	for(j=0;j<strlen(str4);j++)
	{glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[j]);
	}
	glRasterPos2f(200,345);
	for(j=0;j<strlen(str5);j++)
	{glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[j]);
	}
	glRasterPos2f(210,300);
	for(j=0;j<strlen(str6);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[j]);
	}
	glRasterPos2f(10,205);
	for(j=0;j<strlen(str7);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[j]);
	}
	glRasterPos2f(10,180);
	for(j=0;j<strlen(str8);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[j]);
	}
	glRasterPos2f(10,155);
	for(j=0;j<strlen(str9);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[j]);
	}
	glRasterPos2f(10,130);
	for(j=0;j<strlen(str10);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[j]);
	}
	glRasterPos2f(370,205);
	for(j=0;j<strlen(str11);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[j]);
	}
	glRasterPos2f(370,180);
	for(j=0;j<strlen(str12);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[j]);
	}
	glRasterPos2f(370,155);
	for(j=0;j<strlen(str13);j++)
	{
		glColor3f(0,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[j]);
	}
	glRasterPos2f(370,130);
	for(j=0;j<strlen(str14);j++)
	{
		glColor3f(0,0,1);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[j]);
	}
	glRasterPos2f(210,50);
	for(j=0;j<strlen(str15);j++)
	{
		glColor3f(0,0,1);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str15[j]);
	}
	glEnd();
	glutPostRedisplay();
	glFlush();
}


void mydisplay2()
{
glClear(GL_COLOR_BUFFER_BIT);
d+=1.5;
if(d<290)
{
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(300,600+500-d);
glVertex2f(330,550+500-d);
glVertex2f(340,570+500-d);
glVertex2f(350,550+500-d);
glVertex2f(370,600+500-d);
glVertex2f(370,700+500-d);
glVertex2f(320,700+500-d);
glVertex2f(320,750+500-d);
glVertex2f(370,750+500-d);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(1,1,0);
glVertex2f(400,650+500-d);
glVertex2f(400,550+500-d);
glVertex2f(450,550+500-d);
glVertex2f(450,650+500-d);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(425,650+500-d);
glVertex2f(425,750+500-d);
glVertex2f(400,750+500-d);
glVertex2f(450,750+500-d);
glVertex2f(450,800+500-d);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(490,730+500-d);
glVertex2f(490,750+500-d);
glVertex2f(480,750+500-d);
glVertex2f(480,550+500-d);
glVertex2f(530,550+500-d);
glVertex2f(530,750+500-d);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(560,650+500-d);
glVertex2f(560,550+500-d);
glVertex2f(580,600+500-d);
glVertex2f(610,550+500-d);
glVertex2f(610,750+500-d);
glVertex2f(560,750+500-d);
glVertex2f(620,750+500-d);
glVertex2f(620,800+500-d);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(590,530+500-d);
glVertex2f(610,530+500-d);
glVertex2f(610,500+500-d);
glVertex2f(630,550+500-d);
glVertex2f(640,550+500-d);
glEnd();
}
else
{
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(300,600+500-475);
glVertex2f(330,550+500-475);
glVertex2f(340,570+500-475);
glVertex2f(350,550+500-475);
glVertex2f(370,600+500-475);
glVertex2f(370,700+500-475);
glVertex2f(320,700+500-475);
glVertex2f(320,750+500-475);
glVertex2f(370,750+500-475);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(1,1,0);
glVertex2f(400,650+500-475);
glVertex2f(400,550+500-475);
glVertex2f(450,550+500-475);
glVertex2f(450,650+500-475);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(425,650+500-475);
glVertex2f(425,750+500-475);
glVertex2f(400,750+500-475);
glVertex2f(450,750+500-475);
glVertex2f(450,800+500-475);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(490,730+500-475);
glVertex2f(490,750+500-475);
glVertex2f(480,750+500-475);
glVertex2f(480,550+500-475);
glVertex2f(530,550+500-475);
glVertex2f(530,750+500-475);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(560,650+500-475);
glVertex2f(560,550+500-475);
glVertex2f(580,600+500-475);
glVertex2f(610,550+500-475);
glVertex2f(610,750+500-475);
glVertex2f(560,750+500-475);
glVertex2f(620,750+500-475);
glVertex2f(620,800+500-475);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(590,530+500-475);
glVertex2f(610,530+500-475);
glVertex2f(610,500+500-475);
glVertex2f(630,550+500-475);
glVertex2f(640,550+500-475);
glEnd();
}
glutPostRedisplay();
g+=1.5;
if(g<295)
{
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(250-100,550-800+g);
glVertex2f(320-100,550-800+g);
glVertex2f(250-100,550-800+g);
glVertex2f(250-100,750-800+g);
glVertex2f(250-100,750-800+g);
glVertex2f(320-100,750-800+g);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(250-100,650-800+g);
glVertex2f(300-100,650-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(340-100,750-800+g);
glVertex2f(340-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(410-100,750-800+g);
glVertex2f(340-100,650-800+g);
glVertex2f(340-100,650-800+g);
glVertex2f(410-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(430-100,550-800+g);
glVertex2f(455-100,750-800+g);
glVertex2f(455-100,750-800+g);
glVertex2f(480-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(440-100,650-800+g);
glVertex2f(470-100,650-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(510-100,750-800+g);
glVertex2f(510-100,550-800+g);
glVertex2f(510-100,550-800+g);
glVertex2f(580-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(600-100,550-800+g);
glVertex2f(635-100,750-800+g);
glVertex2f(635-100,750-800+g);
glVertex2f(670-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(620-100,650-800+g);
glVertex2f(650-100,650-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(690-100,750-800+g);
glVertex2f(725-100,550-800+g);
glVertex2f(725-100,550-800+g);
glVertex2f(760-100,750-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(850-100,750-800+g);
glVertex2f(780-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(780-100,750-800+g);
glVertex2f(810-100,650-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(870-100,550-800+g);
glVertex2f(905-100,750-800+g);
glVertex2f(905-100,750-800+g);
glVertex2f(940-100,550-800+g);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(890-100,650-800+g);
glVertex2f(920-100,650-800+g);
}
else
{
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(250-100,550-800+475);
glVertex2f(320-100,550-800+475);
glVertex2f(250-100,550-800+475);
glVertex2f(250-100,750-800+475);
glVertex2f(250-100,750-800+475);
glVertex2f(320-100,750-800+475);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(250-100,650-800+475);
glVertex2f(300-100,650-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(1,1,0);
glVertex2f(340-100,750-800+475);
glVertex2f(340-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(410-100,750-800+475);
glVertex2f(340-100,650-800+475);
glVertex2f(340-100,650-800+475);
glVertex2f(410-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(430-100,550-800+475);
glVertex2f(455-100,750-800+475);
glVertex2f(455-100,750-800+475);
glVertex2f(480-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(440-100,650-800+475);
glVertex2f(470-100,650-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(510-100,750-800+475);
glVertex2f(510-100,550-800+475);
glVertex2f(510-100,550-800+475);
glVertex2f(580-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(600-100,550-800+475);
glVertex2f(635-100,750-800+475);
glVertex2f(635-100,750-800+475);
glVertex2f(670-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(620-100,650-800+475);
glVertex2f(650-100,650-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(690-100,750-800+475);
glVertex2f(725-100,550-800+475);
glVertex2f(725-100,550-800+475);
glVertex2f(760-100,750-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(850-100,750-800+475);
glVertex2f(780-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(780-100,750-800+475);
glVertex2f(810-100,650-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(870-100,550-800+475);
glVertex2f(905-100,750-800+475);
glVertex2f(905-100,750-800+475);
glVertex2f(940-100,550-800+475);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(890-100,650-800+475);
glVertex2f(920-100,650-800+475);
glEnd();
}
glutPostRedisplay();
glRasterPos2f(250,100);
	for(j=0;j<strlen(str16);j++)
	{
		glColor3f(0,0,1);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str16[j]);
	}
	glEnd();
glutKeyboardFunc(keys2);
glFlush();
}
void mydisplaya()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(165,475);

	for(j=0;j<strlen(stra);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stra[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysa);
	glFlush();
}


void mydisplay3()
{
	float i;
glClear(GL_COLOR_BUFFER_BIT);

sky();
cloud();
ground();
back();
house();
drona();

grass();
stud2();
stud1();
stud();
ekalavya();
glRasterPos2f(200,50);
	for(j=0;j<strlen(str17);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str17[j]);
	}
	glEnd();
glutKeyboardFunc(keys3);
glFlush();
}

void mydisplayb()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(165,475);

	for(j=0;j<strlen(strb);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strb[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysb);
	glFlush();
}

void mydisplay4()
{

glClear(GL_COLOR_BUFFER_BIT);

sky();
ground();
back();
grass();
tree();
stone();
man();
sea();
house1();
glRasterPos2f(120,50);
	for(j=0;j<strlen(str18);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str18[j]);
	}
	glEnd();
glutKeyboardFunc(keys4);
glFlush();
}
void mydisplayc()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(195,475);

	for(j=0;j<strlen(strc);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strc[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysc);
	glFlush();
}

void mydisplay5a()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();

//ground();
back();
grass();
tree();
idle();
man();
sea();
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str19a);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str19a[j]);
	}
	glEnd();
glutKeyboardFunc(keys5a);
glFlush();
}

void mydisplay5()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();

//ground();
back();
grass();
tree();
idol();
man();
sea();
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str19b);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str19b[j]);
	}
	glEnd();
glutKeyboardFunc(keys5);
glFlush();
}
void mydisplay5b()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();

//ground();
back();
grass();
tree();
idle1();
man();
sea();
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str19);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str19[j]);
	}
	glEnd();
glutKeyboardFunc(keys5b);
glFlush();
}

void mydisplayd()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(180,475);

	for(j=0;j<strlen(strd);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strd[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysd);
	glFlush();
}

void mydisplay6()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();
//ground();
back();
grass();
tree();
idle1();
flower();
man();
sea();
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str20);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str20[j]);
	}
	glEnd();
glutKeyboardFunc(keys6);
glFlush();
}
void mydisplaye()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(165,475);

	for(j=0;j<strlen(stre);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,stre[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keyse);
	glFlush();
}

void mydisplay7()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();
//ground();
back();
grass();
tree();
idle1();
man1();
arrow();
sea();
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str21);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[j]);
	}
	glEnd();
glutKeyboardFunc(keys7);
glFlush();
}

void mydisplayf()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(50,475);

	for(j=0;j<strlen(strf);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strf[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysf);
	glFlush();
}


void mydisplay7first()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();
//ground();
back();
grass();
tree();
//idle1();
man1();
//man_ekh();
arjuna();
arrow_arjuna();
arrow1();
sea();
//house1();
bird1();
glRasterPos2f(200,30);
	for(j=0;j<strlen(str21a);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21a[j]);
	}
	glEnd();
glutKeyboardFunc(keys7first);
glFlush();
}

void mydisplay7a()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();
//ground();
back();
grass();
tree();
//idle1();
man1();
arrow1();
sea();
//house1();
bird();
arjuna1();
glRasterPos2f(70,30);
	for(j=0;j<strlen(str21b);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21b[j]);
	}
	glEnd();
glutKeyboardFunc(keys7a);
glFlush();
}

void mydisplayg()
{

	glClear(GL_COLOR_BUFFER_BIT);
	glRasterPos2f(100,475);

	for(j=0;j<strlen(strg);j++)
	{
		glColor3f(0,1,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strg[j]);
	}
	glEnd();
	glutPostRedisplay();
	glutKeyboardFunc(keysg);
	glFlush();
}
void mydisplay8()
{
glClear(GL_COLOR_BUFFER_BIT);
sky();
cloud();
ground();
back();
grass();
eee();
house();
man2();
drona1();
glRasterPos2f(82,185);
//glTranslated(300,800,0);
	for(j=0;j<strlen(str22);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,str22[j]);
	}
	glEnd();
glutKeyboardFunc(keys8);
glFlush();
}
void mydisplay9()
{
glClear(GL_COLOR_BUFFER_BIT);
sky();
cloud();
ground();
back();
grass();
house();
drona1();
cry();
fff();
man3();
thumb();
blood();
glRasterPos2f(22,60);
	for(j=0;j<strlen(str23);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,str23[j]);
	}
	glEnd();
glutKeyboardFunc(keys9);
glFlush();
}

void mydisplay10()
{
glClear(GL_COLOR_BUFFER_BIT);
sky();
cloud();
ground();
back();
grass();
house();
drona1();
cry();
man3();
leaf();
thumb1();
glFlush();
}
void thumb()
{
b+=0.2;
if(b<30)
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8-b);
glVertex2f(30.3,44-b);
glVertex2f(31,45-b);
glVertex2f(31.3,44-b);
glVertex2f(31,42.8-b);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-b);
glEnd();
}
else
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8-30);
glVertex2f(30.3,44-30);
glVertex2f(31,45-30);
glVertex2f(31.3,44-30);
glColor3f(0.7,0,0);
glVertex2f(31,42.8-30);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-30);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(29,12.8);
glVertex2f(32,12.4);
//glVertex2f(35,11.5);
//glVertex2f(36,10);
glVertex2f(33,11);
glVertex2f(30,11);
glVertex2f(27,10);
glVertex2f(29,12.8);
glEnd();
}
glutPostRedisplay();
}
void blood()
{
z+=0.2;
if(z<29)
{
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-z);
glVertex2f(30.5,42.8-z);
glVertex2f(30.5,42-z);
glVertex2f(30,42.8-z);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30,41-z);
glVertex2f(30.5,41-z);
glVertex2f(30.5,40-z);
glVertex2f(30,41-z);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30.1,40-z);
glVertex2f(31,40-z);
glVertex2f(31,39-z);
glVertex2f(30.1,40-z);

glEnd();
}
else
{
z=0.0;

}
}
void man3()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-60,110,-30,110);
//left hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8-3,47.7-3);
glVertex2f(25-3,46.2-3);
glVertex2f(25-3,46.2-3);
glVertex2f(24.5-3,43.7-3);
glVertex2f(24.5-3,43.7-3);
glVertex2f(23.3-3,44.2-3);
glVertex2f(23.3-3,44.2-3);
glVertex2f(22.8-3,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25-3,46.2-3);
glVertex2f(30-3,47.2-3);
glVertex2f(30-3,47.2-3);
glVertex2f(30.5-3,45.7-3);
glVertex2f(30.5-3,45.7-3);
glVertex2f(24.5-3,43.7-3);
glVertex2f(24.5-3,43.7-3);
glVertex2f(25-3,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30-3,47.2-3);
glVertex2f(32-3,48.7-3);
glVertex2f(32-3,48.7-3);
glVertex2f(32.5-3,48.2-3);
glVertex2f(32.5-3,48.2-3);
glVertex2f(33.5-3,47.2-3);
glVertex2f(33.5-3,47.2-3);
glVertex2f(32.5-3,46.2-3);
glVertex2f(32.5-3,46.2-3);
glVertex2f(30.5-3,45.7-3);
glVertex2f(30.5-3,45.7-3);
glVertex2f(30-3,47.2-3);
glEnd();
//knife
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(27,44);
glVertex2f(29.5,44);
glVertex2f(29.5,45);
glVertex2f(27,45);
glVertex2f(27,44);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(29.5,45);
glVertex2f(32,45);
glVertex2f(31,44.5);
glVertex2f(29.5,44);
glVertex2f(29.5,45);

glEnd();
//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(22,40.3);
glVertex2f(30,41);

glVertex2f(30,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(30,42.8);
glVertex2f(32.5,42.8);
glVertex2f(33,42.3);
glVertex2f(33,41);
glVertex2f(32.5,40);
glVertex2f(30.4,40);
glVertex2f(30,41);
glVertex2f(30,42.8);

glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void arrow1()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
t+=0.6;
if(t<55)
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+t,43+3+t);
glVertex2f(38+t,53+3+t);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+t,54+3+t);
glVertex2f(39+t,52+3+t);
glVertex2f(40+t,54+3+t);
glVertex2f(37+t,54+3+t);
}
else
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+55,43+3+55);
glVertex2f(38+55,53+3+55);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+55,54+3+55);
glVertex2f(39+55,52+3+55);
glVertex2f(40+55,54+3+55);
glVertex2f(37+55,54+3+55);


}
glEnd();
glutPostRedisplay();
}
void thumb1()
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8);
glVertex2f(30.3,44);
glVertex2f(31,45);
glVertex2f(31.3,44);
glVertex2f(31,42.8);
glColor3f(0.7,0,0);
glVertex2f(30,42.8);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(29,12.8+30);
glVertex2f(32,12.4+30);
//glVertex2f(35,11.5);
//glVertex2f(36,10);
glVertex2f(33,11+30);
glVertex2f(30,11+30);
glVertex2f(27,10+30);
glVertex2f(29,12.8+30);
glEnd();
}

void man2()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-30,110,-30,110);
c+=0.4;
if(c<25)
{
//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1+c,31-4);
glVertex2f(21.5-1+c,25-4);
glVertex2f(21.5-1+c,25-4);
glVertex2f(21-1+c,23-4);
glVertex2f(21-1+c,23-4);
glVertex2f(20.5-1+c,24.5-4);
glVertex2f(20.5-1+c,24.5-4);
glVertex2f(20-1+c,31-4);
glVertex2f(20-1+c,31-4);
glVertex2f(22-1+c,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1+c,25-4);
glVertex2f(22.5-1+c,25-4);
glVertex2f(22.5-1+c,25-4);
glVertex2f(23-1+c,24.5-4);
glVertex2f(23-1+c,24.5-4);
glVertex2f(23-1+c,24-4);
glVertex2f(23-1+c,24-4);
glVertex2f(22.5-1+c,23-4);
glVertex2f(22.5-1+c,23-4);
glVertex2f(21-1+c,23-4);
glVertex2f(21-1+c,23-4);
glVertex2f(21.5-1+c,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1+c,30.5-4);
glVertex2f(20-1+c,23-4);
glVertex2f(20-1+c,23-4);
glVertex2f(20.5-1+c,23-4);
glVertex2f(20.5-1+c,23-4);
glVertex2f(21-1+c,23-4);
glVertex2f(21-1+c,23-4);
glVertex2f(20.5-1+c,24.5-4);
glVertex2f(20.5-1+c,24.5-4);
glVertex2f(20-1+c,31-4);
glVertex2f(20-1+c,31-4);
glVertex2f(19.5-1+c,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18+c,55+1);
glVertex2f(18.5+c,56.4+1);
glVertex2f(18.5+c,56.4+1);
glVertex2f(19.5+c,56.9+1);
glVertex2f(19.5+c,56.9+1);
glVertex2f(22.5+c,56+1);
glVertex2f(22.5+c,56+1);
glVertex2f(22.3+c,55+1);
glVertex2f(22.3+c,55+1);
glVertex2f(18+c,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18+c,55);
glVertex2f(18.5+c,56);
glVertex2f(18.5+c,56);
glVertex2f(19.5+c,56.2);
glVertex2f(19.5+c,56.2);
glVertex2f(22.5+c,55.9);
glVertex2f(22.5+c,55.9);
glVertex2f(22.3+c,55);
glVertex2f(22.3+c,55);
glVertex2f(18+c,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18+c,55);
glVertex2f(22.3+c,55);
glVertex2f(22.3+c,55);
glVertex2f(22.8+c,53);
glVertex2f(22.8+c,53);
glVertex2f(22.3+c,52.8);
glVertex2f(22.3+c,52.8);
glVertex2f(18.5+c,51);
glVertex2f(18.5+c,51);
glVertex2f(18+c,52);
glVertex2f(18+c,52);
glVertex2f(18+c,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5+c,51);
glVertex2f(22.2+c,52.8);
glVertex2f(22.2+c,52.8);
glVertex2f(22.4+c,52);
glVertex2f(22.4+c,52);
glVertex2f(21.8+c,51.5);
glVertex2f(21.8+c,51.5);
glVertex2f(22.4+c,51.5);
glVertex2f(22.4+c,51.5);
glVertex2f(18.5+c,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5+c,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8+c,51.5);
glVertex2f(22.4+c,51.5);
glVertex2f(22.4+c,51.5);
glVertex2f(22.2+c,50.5);
glVertex2f(22.2+c,50.5);
glVertex2f(21.6+c,50.2);
glVertex2f(21.6+c,50.2);
glVertex2f(21.4+c,50);
glVertex2f(21.4+c,50);
glVertex2f(21.8+c,49);
glVertex2f(21.8+c,49);
glVertex2f(18.5+c,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19+c,49+3);
glVertex2f(21+c,49+3);
glVertex2f(21+c,45+3);
glVertex2f(19+c,45+3);
glVertex2f(19+c,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19+c,48);
glVertex2f(17+c,46);
glVertex2f(17+c,36);
glVertex2f(23+c,36);
glVertex2f(23+c,46);
glVertex2f(21+c,48);
glVertex2f(19+c,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17+c,36);
glVertex2f(23+c,36);
glVertex2f(23+c,32);
glVertex2f(17+c,32);
glVertex2f(17+c,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17+c,32);
glVertex2f(20+c,32);
glVertex2f(20+c,27);
glVertex2f(19.5+c,25);
glVertex2f(17.5+c,25);
glVertex2f(17+c,27);
glVertex2f(17+c,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20+c,32);
glVertex2f(23+c,32);
glVertex2f(23+c,27);
glVertex2f(22.5+c,25);
glVertex2f(19.5+c,25);
//glVertex2f(20,27);
glVertex2f(20+c,32);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(20.5+c,48-3);
glVertex2f(23.5+c,43-3);
glVertex2f(22.5+c,41.5-3);
glVertex2f(20.2+c,44.8-3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(23.5+c,43-3);
glVertex2f(26+c,40-3);
glVertex2f(25.5+c,38-3);
glVertex2f(22.5+c,41.5-3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(26+c,40-3);
glVertex2f(27+c,40.2-3);
glVertex2f(27+c,40.2-3);
glVertex2f(28+c,38.5-3);
glVertex2f(28+c,38.5-3);
glVertex2f(27+c,37-3);
glVertex2f(27+c,37-3);
//glVertex2f(26.5+p,37.3);
//glVertex2f(26.5+p,37.3);
glVertex2f(25.5+c,38-3);
glVertex2f(25.5+c,38-3);
glVertex2f(26+c,40-3);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3+c,54.7);
glVertex2f(21.8+c,54.2);
glVertex2f(22.3+c,54.7);
glVertex2f(21.8+c,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3+c,55);
glVertex2f(21.8+c,55.5);
glVertex2f(22.3+c,55);
glEnd();

}
else
{
	glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1+25,31-4);
glVertex2f(21.5-1+25,25-4);
glVertex2f(21.5-1+25,25-4);
glVertex2f(21-1+25,23-4);
glVertex2f(21-1+25,23-4);
glVertex2f(20.5-1+25,24.5-4);
glVertex2f(20.5-1+25,24.5-4);
glVertex2f(20-1+25,31-4);
glVertex2f(20-1+25,31-4);
glVertex2f(22-1+25,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1+25,25-4);
glVertex2f(22.5-1+25,25-4);
glVertex2f(22.5-1+25,25-4);
glVertex2f(23-1+25,24.5-4);
glVertex2f(23-1+25,24.5-4);
glVertex2f(23-1+25,24-4);
glVertex2f(23-1+25,24-4);
glVertex2f(22.5-1+25,23-4);
glVertex2f(22.5-1+25,23-4);
glVertex2f(21-1+25,23-4);
glVertex2f(21-1+25,23-4);
glVertex2f(21.5-1+25,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1+25,30.5-4);
glVertex2f(20-1+25,23-4);
glVertex2f(20-1+25,23-4);
glVertex2f(20.5-1+25,23-4);
glVertex2f(20.5-1+25,23-4);
glVertex2f(21-1+25,23-4);
glVertex2f(21-1+25,23-4);
glVertex2f(20.5-1+25,24.5-4);
glVertex2f(20.5-1+25,24.5-4);
glVertex2f(20-1+25,31-4);
glVertex2f(20-1+25,31-4);
glVertex2f(19.5-1+25,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18+25,55+1);
glVertex2f(18.5+25,56.4+1);
glVertex2f(18.5+25,56.4+1);
glVertex2f(19.5+25,56.9+1);
glVertex2f(19.5+25,56.9+1);
glVertex2f(22.5+25,56+1);
glVertex2f(22.5+25,56+1);
glVertex2f(22.3+25,55+1);
glVertex2f(22.3+25,55+1);
glVertex2f(18+25,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18+25,55);
glVertex2f(18.5+25,56);
glVertex2f(18.5+25,56);
glVertex2f(19.5+25,56.2);
glVertex2f(19.5+25,56.2);
glVertex2f(22.5+25,55.9);
glVertex2f(22.5+25,55.9);
glVertex2f(22.3+25,55);
glVertex2f(22.3+25,55);
glVertex2f(18+25,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18+25,55);
glVertex2f(22.3+25,55);
glVertex2f(22.3+25,55);
glVertex2f(22.8+25,53);
glVertex2f(22.8+25,53);
glVertex2f(22.3+25,52.8);
glVertex2f(22.3+25,52.8);
glVertex2f(18.5+25,51);
glVertex2f(18.5+25,51);
glVertex2f(18+25,52);
glVertex2f(18+25,52);
glVertex2f(18+25,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5+25,51);
glVertex2f(22.2+25,52.8);
glVertex2f(22.2+25,52.8);
glVertex2f(22.4+25,52);
glVertex2f(22.4+25,52);
glVertex2f(21.8+25,51.5);
glVertex2f(21.8+25,51.5);
glVertex2f(22.4+25,51.5);
glVertex2f(22.4+25,51.5);
glVertex2f(18.5+25,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5+25,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8+25,51.5);
glVertex2f(22.4+25,51.5);
glVertex2f(22.4+25,51.5);
glVertex2f(22.2+25,50.5);
glVertex2f(22.2+25,50.5);
glVertex2f(21.6+25,50.2);
glVertex2f(21.6+25,50.2);
glVertex2f(21.4+25,50);
glVertex2f(21.4+25,50);
glVertex2f(21.8+25,49);
glVertex2f(21.8+25,49);
glVertex2f(18.5+25,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19+25,49+3);
glVertex2f(21+25,49+3);
glVertex2f(21+25,45+3);
glVertex2f(19+25,45+3);
glVertex2f(19+25,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19+25,48);
glVertex2f(17+25,46);
glVertex2f(17+25,36);
glVertex2f(23+25,36);
glVertex2f(23+25,46);
glVertex2f(21+25,48);
glVertex2f(19+25,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17+25,36);
glVertex2f(23+25,36);
glVertex2f(23+25,32);
glVertex2f(17+25,32);
glVertex2f(17+25,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17+25,32);
glVertex2f(20+25,32);
glVertex2f(20+25,27);
glVertex2f(19.5+25,25);
glVertex2f(17.5+25,25);
glVertex2f(17+25,27);
glVertex2f(17+25,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20+25,32);
glVertex2f(23+25,32);
glVertex2f(23+25,27);
glVertex2f(22.5+25,25);
glVertex2f(19.5+25,25);
//glVertex2f(20,27);
glVertex2f(20+25,32);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(20.5+25,48-3);
glVertex2f(23.5+25,43-3);
glVertex2f(22.5+25,41.5-3);
glVertex2f(20.2+25,44.8-3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(23.5+25,43-3);
glVertex2f(26+25,40-3);
glVertex2f(25.5+25,38-3);
glVertex2f(22.5+25,41.5-3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(26+25,40-3);
glVertex2f(27+25,40.2-3);
glVertex2f(27+25,40.2-3);
glVertex2f(28+25,38.5-3);
glVertex2f(28+25,38.5-3);
glVertex2f(27+25,37-3);
glVertex2f(27+25,37-3);
//glVertex2f(26.5+p,37.3);
//glVertex2f(26.5+p,37.3);
glVertex2f(25.5+25,38-3);
glVertex2f(25.5+25,38-3);
glVertex2f(26+25,40-3);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3+25,54.7);
glVertex2f(21.8+25,54.2);
glVertex2f(22.3+25,54.7);
glVertex2f(21.8+25,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3+25,55);
glVertex2f(21.8+25,55.5);
glVertex2f(22.3+25,55);
glEnd();
}
glutPostRedisplay();
}

void cloud()
{
o+=0.2;
if(o<700)
{
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(50+o,600);
glVertex2f(55+o,610);
glVertex2f(65+o,620);
glVertex2f(80+o,620);
glVertex2f(85+o,610);
glVertex2f(95+o,600);
glVertex2f(50+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(90+o,600);
glVertex2f(95+o,610);
glVertex2f(105+o,620);
glVertex2f(120+o,620);
glVertex2f(125+o,610);
glVertex2f(135+o,600);
glVertex2f(90+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(50+400+o,600);
glVertex2f(55+400+o,610);
glVertex2f(65+400+o,620);
glVertex2f(80+400+o,620);
glVertex2f(85+400+o,610);
glVertex2f(95+400+o,600);
glVertex2f(50+400+o,600);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(90+400+o,600);
glVertex2f(95+400+o,610);
glVertex2f(105+400+o,620);
glVertex2f(120+400+o,620);
glVertex2f(125+400+o,610);
glVertex2f(135+400+o,600);
glVertex2f(90+400+o,600);
glEnd();
}
else
{
o=0.0;
}
glutPostRedisplay();
}
/*void drawsquare(double x1,double y1,double radius)
{
    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    double locationx=x1;
    double locationy=y1;
    double r=radius;

    for(double i=0;i<=360;i+=0.1)
    {
        glVertex2d(locationx+radius*i,locationy+radius*i);
    }
    glEnd();
}*/

void house1()
{

glBegin(GL_POLYGON);
glColor3f(0.9,0.9,0.4);
glVertex2f(400+50,330-50);
glVertex2f(400+50,150-50);
glVertex2f(650+50,150-50);
glVertex2f(650+50,330-50);
glVertex2f(400+50,330-50);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(500+50,150-50);
glVertex2f(500+50,250-50);
glVertex2f(550+50,250-50);
glVertex2f(550+50,150-50);
glVertex2f(500+50,150-50);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.3,0);
glVertex2f(425+50,225-50);
glVertex2f(475+50,225-50);
glVertex2f(475+50,250-50);
glColor3f(0,0,0);
glVertex2f(425+50,250-50);
glVertex2f(425+50,225-50);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.3,0);
glVertex2f(575+50,225-50);
glVertex2f(625+50,225-50);
glVertex2f(625+50,250-50);
glColor3f(0,0,0);
glVertex2f(575+50,250-50);
glVertex2f(575+50,225-50);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.3,0);
glVertex2f(525+50,330-50);
glVertex2f(475+50,290-50);
glVertex2f(350+50,290-50);
glColor3f(0,0,0);
glVertex2f(525+50,475-50);
glColor3f(0.4,0.3,0);
glVertex2f(700+50,290-50);
glVertex2f(575+50,290-50);
glVertex2f(525+50,330-50);
glEnd();
}
void drona1()
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	//body
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171,155);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175,145);
		glVertex2f(178,144);
		glVertex2f(181,143);
		glVertex2f(180,130);
		glVertex2f(179.5,125);
		glVertex2f(179,120);
		glVertex2f(179,115);
		glVertex2f(179,110);
		glVertex2f(179.8,105);
		glVertex2f(180,102);
		glVertex2f(180,100);
		glVertex2f(154.8,100);
		glVertex2f(154.8,102);
		glVertex2f(155,105);
		glVertex2f(155.2,110);
		glVertex2f(155,115);
		glVertex2f(154.5,120);
		glVertex2f(154.3,125);
		glVertex2f(154,128);
		glVertex2f(153.5,129);
		glVertex2f(152.5,130);
		glVertex2f(153,142);
		glVertex2f(155,143);
		glVertex2f(158,144);
		glVertex2f(160,145);
		glVertex2f(160,145);
		glVertex2f(161.5,148);
		glVertex2f(161.5,148);
		glVertex2f(162,150);
		glVertex2f(162,150);
		glVertex2f(162,155);
		glVertex2f(162,155);
		glVertex2f(171,155);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(153,142);
	glVertex2f(180,100);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180,102);
		glVertex2f(154.8,102);
	glEnd();
glBegin(GL_POLYGON);//body
		glColor3f(1.0,0.25,0.0);
		glVertex2f(175,149);
		glVertex2f(181,143);
		glVertex2f(170,100);
		glVertex2f(155,100);
glEnd();




//head
glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(167,152);
		glVertex2f(169,153);
		glVertex2f(172,155);
		glVertex2f(173.5,158);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,165);
		glVertex2f(159,160);
		glVertex2f(159.5,158);
		glVertex2f(160,157);
		glVertex2f(161,156);
		glVertex2f(162.5,154.5);
		glVertex2f(163,154);
		glVertex2f(164,153);
		glVertex2f(167,152);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(159,155);
glVertex2f(167,135);
glVertex2f(174.5,155);

glVertex2f(159,155);
glEnd();
//nose
glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(166.9,165);
	glVertex2f(166.9,161);
glEnd();
//mouth
glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(165,159);
	glVertex2f(166,158.7);
	glVertex2f(167,158.5);
	glVertex2f(168,158.6);
	glVertex2f(169.8,159);
glEnd();
//hair
glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(173,170);
		glVertex2f(173,170);
		glVertex2f(174,167);

		glVertex2f(174,167);
		glVertex2f(174,167);
		glVertex2f(174.5,162);

		glVertex2f(174.5,162);
		glVertex2f(174.5,164);

		glEnd();

glBegin(GL_POLYGON);
glVertex2f(174,169);
glVertex2f(173,172);
glVertex2f(171,174);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(167,173);
		glVertex2f(167,173);
		glVertex2f(169,172.8);
		glVertex2f(169,172.8);
		glVertex2f(171,172);
		glVertex2f(171,172);
glVertex2f(173,170);
glVertex2f(174,167);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(167,175);
glVertex2f(164,174.5);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,169);
glVertex2f(159,167);
		glVertex2f(159,167);
		glVertex2f(160,169);
		glVertex2f(160,169);
		glVertex2f(162,171.5);
		glVertex2f(162,171.5);
		glVertex2f(164,172.5);
		glVertex2f(164,172.5);
glVertex2f(167,173);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(160,158);
glVertex2f(160.8,157);
glVertex2f(160.8,154);
glVertex2f(160.8,150);
glVertex2f(160.8,145);
glVertex2f(160.8,143);
glVertex2f(160.8,136);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(161,157);
glVertex2f(161.8,156);
glVertex2f(161.8,154);
glVertex2f(161.8,145);
glVertex2f(161.8,143);
glVertex2f(161.8,140);
glVertex2f(161.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(172,156.5);
glVertex2f(172.8,156);
glVertex2f(172.8,154);
glVertex2f(172.8,145);
glVertex2f(172.8,143);
glVertex2f(172.8,140);
glVertex2f(172.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(173,158.5);
glVertex2f(173.8,157);
glVertex2f(173.8,154);
glVertex2f(173.8,150);
glVertex2f(173.8,145);
glVertex2f(173.8,143);
glVertex2f(173.8,136);
glEnd();
//STRIPS
glBegin(GL_LINES);
	glColor3f(1.0,1.0,1.0);
	glVertex2f(165,169);
	glVertex2f(169,169);
	glVertex2f(165,170.5);
	glVertex2f(169,170.5);
	glVertex2f(165,172);
	glVertex2f(169,172);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(167,174);
	glVertex2f(167,167);
glEnd();

//EYES
glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(160,165);
		glVertex2f(162,163.5);
		glVertex2f(163,163.5);
		glVertex2f(165,165);
		glVertex2f(163,166.5);
		glVertex2f(162,166.5);
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(168,165);
		glVertex2f(170,163.5);
		glVertex2f(171,163.5);
		glVertex2f(173,165);
		glVertex2f(171,166.5);
		glVertex2f(170,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(160,166.5);
		glVertex2f(162,168.5);
		glVertex2f(163,168.5);
		glVertex2f(165,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(168,166.5);
		glVertex2f(171,168.5);
		glVertex2f(170,168.5);
		glVertex2f(173,166.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);

		glColor3f(0.0,0.0,0.0);


	glBegin(GL_POLYGON);//hand1
		glColor3f(0.9,0.8,0);

		glVertex2f(153,142);
		glVertex2f(151,140.5);
		glVertex2f(150,139);
		glVertex2f(149,137);
		glVertex2f(148,135);
		glVertex2f(147.2,133);
		glVertex2f(147,130);
		glVertex2f(147,125);
		glVertex2f(147.1,120);
		glVertex2f(147.2,112);

//HALF

		glVertex2f(151.8,105);
		glVertex2f(152,110);
		glVertex2f(152.5,115);
		glVertex2f(152.5,120);
		glVertex2f(152.5,123);
		glVertex2f(152.5,125);
		glVertex2f(152.5,130);

		glVertex2f(152.5,135);
		glVertex2f(152.5,140);
		glVertex2f(152.5,143);
		glVertex2f(152.5,155);
		glVertex2f(152.5,160);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.9,0.8,0);
	//glVertex2f(87.2,115);
	glVertex2f(147.2+4.6,112);

	glVertex2f(146+4.6,97-4);
	glVertex2f(143+4.6,97-4);
	glVertex2f(143+4.6,115-4);
	glVertex2f(147.2+4.6,112);

glEnd();


	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.9,0.8,0);
		glVertex2f(180,143);//
		glVertex2f(182,142);
		glVertex2f(182,142);
		glVertex2f(183,141);
		glVertex2f(183,141);
		glVertex2f(184,139);
		glVertex2f(184,139);
		glVertex2f(185,136.5);
		glVertex2f(185,136.5);
		glVertex2f(186,135);
		glVertex2f(186,135);
		glVertex2f(187,130);
		glVertex2f(187,130);
		glVertex2f(187.2,125);
		glVertex2f(187.2,125);
		glVertex2f(187.5,120);
		glVertex2f(187.5,120);
		glVertex2f(187.5,117);
		glVertex2f(187.5,117);
		glVertex2f(187.2,115);
		glVertex2f(187.2,115);
		glVertex2f(187.2,112);
		glVertex2f(187.2,112);
		glVertex2f(187.2,108);
		glVertex2f(187.2,108);

		glVertex2f(184,103);
		glVertex2f(184,103);
		glVertex2f(183.5,105);
		glVertex2f(183.5,105);
		glVertex2f(183,110);
		glVertex2f(183,110);
		glVertex2f(182.5,115);
		glVertex2f(182.5,115);
		glVertex2f(182,120);
		glVertex2f(182,120);
		glVertex2f(180.5,125);//121
		glVertex2f(180,125);
		glVertex2f(179,143);//K
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(200,120);
		glVertex2f(203,125);
		glVertex2f(204,125);
		glVertex2f(207,121);
		glVertex2f(207,115);
		glVertex2f(204,112);
		glVertex2f(203,112);
		glVertex2f(200,113);
	glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(187.2,108);
		 glVertex2f(200,120);
		glVertex2f(200,120);
		glVertex2f(200,113);
		glVertex2f(200,113);
		glVertex2f(187,98);
		glVertex2f(187,98);
		glVertex2f(186,98.5);
		glVertex2f(186,98.5);
		glVertex2f(185,99);
		glVertex2f(185,99);
		glVertex2f(184,103);
		glEnd();
//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(200,120,0.8);
	//circle(200,118,0.8);
	//circle(200,116,0.8);
	//circle(200,114,0.8);


	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);
		glVertex2f(155,100);
		glVertex2f(154.2,95);
		glVertex2f(154,90);
		glVertex2f(154.3,85);
		glVertex2f(154,80);
		glVertex2f(154.5,75);
		glVertex2f(155,70);
		glVertex2f(155.3,65);
		glVertex2f(155.5,60);
		glVertex2f(156,55);
		glVertex2f(157.5,50);

		glVertex2f(165.5,50);
		glVertex2f(166.8,55);
		glVertex2f(166.8,60);
		glVertex2f(167,65);
		glVertex2f(167,70);
		glVertex2f(167,75);
		glVertex2f(166.9,77);
		glVertex2f(166.8,80);
		glVertex2f(167,90);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(157.9,50);
		glVertex2f(158,45);
		glVertex2f(158.2,40);
		glVertex2f(158.6,38);
		glVertex2f(164.5,38);
		glVertex2f(165,40);
		glVertex2f(165.2,45);
		glVertex2f(165.3,50);

	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167,90);
		glVertex2f(167.3,85);
		glVertex2f(168,80);
		glVertex2f(169,75);
		glVertex2f(169,70);
		glVertex2f(169.5,65);
		glVertex2f(170,60);
		glVertex2f(171.5,50);

		glVertex2f(180,50);
		glVertex2f(181,60);
		glVertex2f(181,65);
		glVertex2f(180.8,70);
		glVertex2f(180.8,75);
		glVertex2f(181,80);
		glVertex2f(181,90);
		glVertex2f(181,95);
		glVertex2f(180,100);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(171.8,50);
		glVertex2f(172,45);
		glVertex2f(173,38.5);
		glVertex2f(178.4,38.5);
		glVertex2f(179,45);
		glVertex2f(179.5,50);
		glEnd();
//skirt
	glColor3f(1.0,0.25,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(155,100);
		glVertex2f(154.2,95);
		glVertex2f(154,90);
		glVertex2f(154.3,74);
		glVertex2f(160.3,76);
		glVertex2f(167.3,74);
		glVertex2f(173.3,76);
		glVertex2f(181,74);
		glVertex2f(181,90);
		glVertex2f(181,95);
		glVertex2f(180,100);
	glEnd();

	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.9,0.8,0);
		glVertex2f(159,38);
		glVertex2f(158.5,35);
		glVertex2f(157.5,32);
		glVertex2f(157,30);
		glVertex2f(157.5,28);
		glVertex2f(159,26.5);
		glVertex2f(162,26);
		glVertex2f(164,27);
		glVertex2f(165.5,29);
		glVertex2f(165,32);
		glVertex2f(164.5,35);
		glVertex2f(164,38);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);




	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.9,0.8,0);
		glVertex2f(173,38.5);
		glVertex2f(172.5,35);
		glVertex2f(172.2,30);
		glVertex2f(172,28);
		glVertex2f(173,26.8);
		glVertex2f(175,27);
		glVertex2f(178,27.5);
		glVertex2f(180,30);
		glVertex2f(179.7,33);
		glVertex2f(179,35);
		glVertex2f(178,38.5);
		glEnd();

	//anklets
		//glColor3f(0.0,0.0,0.0);
		//circle(173,38.5,0.8);
		//circle(175,38.5,0.8);
		//circle(177,38.5,0.8);
		//circle(178.5,38.5,0.6);



		glBegin(GL_POLYGON);/*pony*/
		glColor3f(0.0,0.0,0.0);
		glVertex2f(164,185.6);
		glVertex2f(169,185.6);
		glVertex2f(170,182.8);
		glVertex2f(170,178.8);
		glVertex2f(169,174.8);
		glVertex2f(164,174.8);
		glVertex2f(163,178.8);
		glVertex2f(163,182.8);
		glEnd();

		//glColor3f(1.0,1.0,1.0);
		//circle(167,177.8,3);
		//glColor3f(0.0,0.0,0.0);
		//circle(167.2,180.5,3);

		glBegin(GL_POLYGON);//billu
		glColor3f(0.7,0,0);
		glVertex2f(203.5,80);
		glVertex2f(203.5,150);
		glVertex2f(204,150);
		glVertex2f(204,80);
		glVertex2f(203.5,150);
		glEnd();
		glBegin(GL_LINE_STRIP);//billu
		glColor3f(0.7,0,0);
		glVertex2f(203.5,150);
		glVertex2f(210,130);
		glVertex2f(210,100);
		glVertex2f(203.5,80);
		glVertex2f(203.5,75);
		glVertex2f(211,100);
		glVertex2f(211,130);
		glVertex2f(203.5,155);
		glVertex2f(203.5,150);
		glEnd();

}
void arrow()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
a+=0.6;
if(a<50)
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+a,43+a);
glVertex2f(38+a,53+a);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+a,54+a);
glVertex2f(39+a,52+a);
glVertex2f(40+a,54+a);
glVertex2f(37+a,54+a);
}
else
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+55,43+55);
glVertex2f(38+55,53+55);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+55,54+55);
glVertex2f(39+55,52+55);
glVertex2f(40+55,54+55);
glVertex2f(37+55,54+55);
}
glEnd();
glutPostRedisplay();
}

void arrow_arjuna()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
t+=0.5;
if(t<100)
{
    glTranslated(15,30,0);
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(31.5+t,46+3+t);
glVertex2f(41+t,56+3+t);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(40+t,57+3+t);
glVertex2f(42+t,55+3+t);
glVertex2f(43+t,57+3+t);
glVertex2f(40+t,57+3+t);
}
else
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(31.5+100,46+3+100);
glVertex2f(41+100,56+3+100);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(40+100,57+3+100);
glVertex2f(42+100,55+3+100);
glVertex2f(43+100,57+3+100);
glVertex2f(40+100,57+3+100);


}
glEnd();
glutPostRedisplay();
}
 void flower()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);

	f+=0.3;
	if(f<140)
	{
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(150,190-f);
		glVertex2f(153,190-f);
		glVertex2f(153,186-f);
		glVertex2f(150,186-f);
		glVertex2f(150,190-f);
		glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(150,190-f);
		glVertex2f(149,191-f);
		glVertex2f(152,193-f);
		glVertex2f(154,191-f);
		glVertex2f(153,190-f);
		glVertex2f(150,190-f);
		glEnd();
glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(153,190-f);
		glVertex2f(154,191-f);
		glVertex2f(155,188-f);
		glVertex2f(154,185-f);
		glVertex2f(153,186-f);
		glVertex2f(153,190-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,1,0);
		glVertex2f(160,200-f);
		glVertex2f(163,200-f);
		glVertex2f(163,196-f);
		glVertex2f(160,196-f);
		glVertex2f(160,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(160,200-f);
		glVertex2f(159,201-f);
		glVertex2f(162,203-f);
		glVertex2f(164,201-f);
		glVertex2f(163,200-f);
		glVertex2f(160,200-f);
		glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(163,200-f);
		glVertex2f(164,201-f);
		glVertex2f(165,198-f);
		glVertex2f(164,195-f);
		glVertex2f(163,196-f);
		glVertex2f(163,200-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(170,190-f);
		glVertex2f(169,191-f);
		glVertex2f(172,193-f);
		glVertex2f(174,191-f);
		glVertex2f(173,190-f);
		glVertex2f(170,190-f);

		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,0,1);
		glVertex2f(170,190-f);
		glVertex2f(173,190-f);
		glVertex2f(173,186-f);
		glVertex2f(170,186-f);
		glVertex2f(170,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,190-f);
		glVertex2f(174,191-f);
		glVertex2f(175,188-f);
		glVertex2f(174,185-f);
		glVertex2f(173,186-f);
		glVertex2f(173,190-f);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,1,1);
		glVertex2f(180,200-f);
		glVertex2f(183,200-f);
		glVertex2f(183,196-f);
		glVertex2f(180,196-f);
		glVertex2f(180,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(180,200-f);
		glVertex2f(179,201-f);
		glVertex2f(182,203-f);
		glVertex2f(184,201-f);
		glVertex2f(183,200-f);
		glVertex2f(180,200-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(183,200-f);
		glVertex2f(184,201-f);
		glVertex2f(185,198-f);
		glVertex2f(184,195-f);
		glVertex2f(183,196-f);
		glVertex2f(183,200-f);

		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,1);
		glVertex2f(170,210-f);
		glVertex2f(173,210-f);
		glVertex2f(173,206-f);
		glVertex2f(170,206-f);
		glVertex2f(170,210-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,210-f);
		glVertex2f(169,211-f);
		glVertex2f(172,213-f);
		glVertex2f(174,211-f);
		glVertex2f(173,210-f);
		glVertex2f(170,210-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,210-f);
		glVertex2f(174,211-f);
		glVertex2f(175,208-f);
		glVertex2f(174,205-f);
		glVertex2f(173,206-f);
		glVertex2f(173,210-f);
		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(190,190-f);
		glVertex2f(193,190-f);
		glVertex2f(193,186-f);
		glVertex2f(190,186-f);
		glVertex2f(190,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(190,190-f);
		glVertex2f(189,191-f);
		glVertex2f(192,193-f);
		glVertex2f(194,191-f);
		glVertex2f(193,190-f);
		glVertex2f(190,190-f);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(193,190-f);
		glVertex2f(194,191-f);
		glVertex2f(195,188-f);
		glVertex2f(194,185-f);
		glVertex2f(193,186-f);
		glVertex2f(193,190-f);
		glEnd();
	}

	else
	{
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(150,190-140);
		glVertex2f(153,190-140);
		glVertex2f(153,186-140);
		glVertex2f(150,186-140);
		glVertex2f(150,190-140);
		glEnd();
		glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(150,190-140);
		glVertex2f(149,191-140);
		glVertex2f(152,193-140);
		glVertex2f(154,191-140);
		glVertex2f(153,190-140);
		glVertex2f(150,190-140);
		glEnd();
glBegin(GL_POLYGON);
	glColor3f(1,1,0);
		glVertex2f(153,190-140);
		glVertex2f(154,191-140);
		glVertex2f(155,188-140);
		glVertex2f(154,185-140);
		glVertex2f(153,186-140);
		glVertex2f(153,190-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,1,0);
		glVertex2f(160,200-140);
		glVertex2f(163,200-140);
		glVertex2f(163,196-140);
		glVertex2f(160,196-140);
		glVertex2f(160,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(160,200-140);
		glVertex2f(159,201-140);
		glVertex2f(162,203-140);
		glVertex2f(164,201-140);
		glVertex2f(163,200-140);
		glVertex2f(160,200-140);
		glEnd();
	glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(163,200-140);
		glVertex2f(164,201-140);
		glVertex2f(165,198-140);
		glVertex2f(164,195-140);
		glVertex2f(163,196-140);
		glVertex2f(163,200-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,0,1);
		glVertex2f(170,190-140);
		glVertex2f(173,190-140);
		glVertex2f(173,186-140);
		glVertex2f(170,186-140);
		glVertex2f(170,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,190-140);
		glVertex2f(169,191-140);
		glVertex2f(172,193-140);
		glVertex2f(174,191-140);
		glVertex2f(173,190-140);
		glVertex2f(170,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,190-140);
		glVertex2f(174,191-140);
		glVertex2f(175,188-140);
		glVertex2f(174,185-140);
		glVertex2f(173,186-140);
		glVertex2f(173,190-140);
		glEnd();
	glBegin(GL_POLYGON);/*flowers*/
		glColor3f(0,1,1);
		glVertex2f(180,200-140);
		glVertex2f(183,200-140);
		glVertex2f(183,196-140);
		glVertex2f(180,196-140);
		glVertex2f(180,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(180,200-140);
		glVertex2f(179,201-140);
		glVertex2f(182,203-140);
		glVertex2f(184,201-140);
		glVertex2f(183,200-140);
		glVertex2f(180,200-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(183,200-140);
		glVertex2f(184,201-140);
		glVertex2f(185,198-140);
		glVertex2f(184,195-140);
		glVertex2f(183,196-140);
		glVertex2f(183,200-140);

		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,1);
		glVertex2f(170,210-140);
		glVertex2f(173,210-140);
		glVertex2f(173,206-140);
		glVertex2f(170,206-140);
		glVertex2f(170,210-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(170,210-140);
		glVertex2f(169,211-140);
		glVertex2f(172,213-140);
		glVertex2f(174,211-140);
		glVertex2f(173,210-140);
		glVertex2f(170,210-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,0,0);
		glVertex2f(173,210-140);
		glVertex2f(174,211-140);
		glVertex2f(175,208-140);
		glVertex2f(174,205-140);
		glVertex2f(173,206-140);
		glVertex2f(173,210-140);
		glEnd();
		glBegin(GL_POLYGON);/*flowers*/
		glColor3f(1,0,0);
		glVertex2f(190,190-140);
		glVertex2f(193,190-140);
		glVertex2f(193,186-140);
		glVertex2f(190,186-140);
		glVertex2f(190,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(190,190-140);
		glVertex2f(189,191-140);
		glVertex2f(192,193-140);
		glVertex2f(194,191-140);
		glVertex2f(193,190-140);
		glVertex2f(190,190-140);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		glVertex2f(193,190-140);
		glVertex2f(194,191-140);
		glVertex2f(195,188-140);
		glVertex2f(194,185-140);
		glVertex2f(193,186-140);
		glVertex2f(193,190-140);
		glEnd();
}
		glutPostRedisplay();
}


void bird1()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(-300,375,-50,400);
    gluOrtho2D(30,375,-50,375);
	//b+=0.7;

	//if(b<140)
	//{
    glScaled(0.6,0.6,0.6);
    glTranslated(167,250,0);
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		/*glVertex2f(180,190-b);
		glVertex2f(183,190-b);
		//glVertex2f(153,186-b);
		glVertex2f(180,186-b);
		glVertex2f(180,190-b);
		glEnd();*/
		//glBegin(GL_POLYGON);

		glVertex2f(300,265-b);
		glVertex2f(330,265-b);
		glVertex2f(330,250-b);


	glEnd();

	glBegin(GL_POLYGON);

		glVertex2f(330,275-b);
		glVertex2f(340,275-b);
		glVertex2f(330,265-b);


	glEnd();


	//}
	//else
	//{
		/*glBegin(GL_POLYGON);/*flowers*/
		/*glColor3f(1,0,0);
		glVertex2f(150,190-140);
		glVertex2f(153,190-140);
		glVertex2f(153,186-140);
		glVertex2f(150,186-140);
		glVertex2f(150,190-140);*/
		//glEnd();

    //}
		glutPostRedisplay();
}

void aaa()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(-300,375,-50,400);
    gluOrtho2D(30,375,-50,375);
	//b+=0.7;

	//if(b<140)
	//{
    glScaled(0.8,0.8,0.8);
    glTranslated(100,200,0);
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		/*glVertex2f(180,190-b);
		glVertex2f(183,190-b);
		//glVertex2f(153,186-b);
		glVertex2f(180,186-b);
		glVertex2f(180,190-b);
		glEnd();*/
		//glBegin(GL_POLYGON);

		glVertex2f(300,265);
		glVertex2f(330,265);
		glVertex2f(330,250);


	glEnd();


		glutPostRedisplay();
}
void bird()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(-300,375,-50,400);
    gluOrtho2D(30,375,-50,375);
	b+=0.8;

	if(b<140)
	{
    glScaled(0.6,0.6,0.6);
    glTranslated(167,220,0);
	glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		/*glVertex2f(180,190-b);
		glVertex2f(183,190-b);
		//glVertex2f(153,186-b);
		glVertex2f(180,186-b);
		glVertex2f(180,190-b);
		glEnd();*/
		//glBegin(GL_POLYGON);

		glVertex2f(300,265-b);
		glVertex2f(330,265-b);
		glVertex2f(330,250-b);


	glEnd();

	glBegin(GL_POLYGON);

		glVertex2f(330,275-b);
		glVertex2f(340,275-b);
		glVertex2f(330,265-b);


	glEnd();


	}
	else
	{
	     glScaled(0.6,0.6,0.6);
	     glTranslated(167,150,0);
		/*glBegin(GL_POLYGON);/*flowers*/
		/*glColor3f(1,0,0);
		glVertex2f(150,190-140);
		glVertex2f(153,190-140);
		glVertex2f(153,186-140);
		glVertex2f(150,186-140);
		glVertex2f(150,190-140);*/
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		/*glVertex2f(180,190-b);
		glVertex2f(183,190-b);
		//glVertex2f(153,186-b);
		glVertex2f(180,186-b);
		glVertex2f(180,190-b);
		glEnd();*/
		//glBegin(GL_POLYGON);

		glVertex2f(300,265-140);
		glVertex2f(330,265-140);
		glVertex2f(330,250-140);


	glEnd();

	glBegin(GL_POLYGON);

		glVertex2f(330,275-140);
		glVertex2f(340,275-140);
		glVertex2f(330,265-140);


	glEnd();


    }
		glutPostRedisplay();
}
	void idle()
{
glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);
	glColor3f(1.0,0.0,0.0);

//body
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171-3,155+3);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175-3,145+3);
		glVertex2f(178-3,144+3);
		glVertex2f(181-3,143+3);
		glVertex2f(180-3,130+3);
		glVertex2f(179.5-3,125+3);
		glVertex2f(179-3,120+3);
		glVertex2f(179-3,115+3);
		glVertex2f(179-3,110+3);
		glVertex2f(179.8-3,105+3);
		glVertex2f(180-3,102+3);
		glVertex2f(180-3,100+3);
		glVertex2f(154.8-3,100+3);
		glVertex2f(154.8-3,102+3);
		glVertex2f(155-3,105+3);
		glVertex2f(155.2-3,110+3);
		glVertex2f(155-3,115+3);
		glVertex2f(154.5-3,120+3);
		glVertex2f(154.3-3,125+3);
		glVertex2f(154-3,128+3);
		glVertex2f(153.5-3,129+3);
		glVertex2f(152.5-3,130+3);
		glVertex2f(153-3,142+3);
		glVertex2f(155-3,143+3);
		glVertex2f(158-3,144+3);
		glVertex2f(160-3,145+3);
		glVertex2f(160-3,145+3);
		glVertex2f(161.5-3,148+3);
		glVertex2f(161.5-3,148+3);
		glVertex2f(162-3,150+3);
		glVertex2f(162-3,150+3);
		glVertex2f(162-3,155+3);
		glVertex2f(162-3,155+3);
		glVertex2f(171-3,155+3);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(180-3,102+3);
		glVertex2f(154.8-3,102+3);
	glEnd();
glBegin(GL_POLYGON);
glVertex2f(177,103);
glVertex2f(190,103);
glVertex2f(190,70);
glVertex2f(135,70);
glVertex2f(135,103);
glVertex2f(177,103);
glEnd();

}
void idol()
{
glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);
	glColor3f(1.0,0.0,0.0);

//body
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171-3,155+3);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175-3,145+3);
		glVertex2f(178-3,144+3);
		glVertex2f(181-3,143+3);
		glVertex2f(180-3,130+3);
		glVertex2f(179.5-3,125+3);
		glVertex2f(179-3,120+3);
		glVertex2f(179-3,115+3);
		glVertex2f(179-3,110+3);
		glVertex2f(179.8-3,105+3);
		glVertex2f(180-3,102+3);
		glVertex2f(180-3,100+3);
		glVertex2f(154.8-3,100+3);
		glVertex2f(154.8-3,102+3);
		glVertex2f(155-3,105+3);
		glVertex2f(155.2-3,110+3);
		glVertex2f(155-3,115+3);
		glVertex2f(154.5-3,120+3);
		glVertex2f(154.3-3,125+3);
		glVertex2f(154-3,128+3);
		glVertex2f(153.5-3,129+3);
		glVertex2f(152.5-3,130+3);
		glVertex2f(153-3,142+3);
		glVertex2f(155-3,143+3);
		glVertex2f(158-3,144+3);
		glVertex2f(160-3,145+3);
		glVertex2f(160-3,145+3);
		glVertex2f(161.5-3,148+3);
		glVertex2f(161.5-3,148+3);
		glVertex2f(162-3,150+3);
		glVertex2f(162-3,150+3);
		glVertex2f(162-3,155+3);
		glVertex2f(162-3,155+3);
		glVertex2f(171-3,155+3);
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(180-3,102+3);
		glVertex2f(154.8-3,102+3);
	glEnd();
glBegin(GL_POLYGON);
glVertex2f(177,103);
glVertex2f(190,103);
glVertex2f(190,70);
glVertex2f(135,70);
glVertex2f(135,103);
glVertex2f(177,103);
glEnd();

//head
glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(167-3,152+3);
		glVertex2f(169-3,153+3);
		glVertex2f(172-3,155+3);
		glVertex2f(173.5-3,158+3);
		glVertex2f(174-3,160+3);
		glVertex2f(174.5-3,164+3);
		glVertex2f(174-3,169+3);
		glVertex2f(173-3,172+3);
		glVertex2f(171-3,174+3);
		glVertex2f(169-3,174.8+3);
		glVertex2f(167-3,175+3);
		glVertex2f(164-3,174.5+3);
		glVertex2f(162-3,173.5+3);
		glVertex2f(160-3,171+3);
		glVertex2f(159-3,169+3);
		glVertex2f(159-3,165+3);
		glVertex2f(159-3,160+3);
		glVertex2f(159.5-3,158+3);
		glVertex2f(160-3,157+3);
		glVertex2f(161-3,156+3);
		glVertex2f(162.5-3,154.5+3);
		glVertex2f(163-3,154+3);
		glVertex2f(164-3,153+3);
		glVertex2f(167-3,152+3);
	glEnd();

}
void sea()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);

glColor3f(0.7,0.4,0);
glVertex2f(700,400);
glColor3f(0,0.5,0);
glVertex2f(600,350);
glColor3f(0,0.5,0);
glVertex2f(550,300);
glVertex2f(500,250);
glVertex2f(450,225);

glVertex2f(350,0);
glColor3f(0.7,0.4,0);
glVertex2f(700,0);

glVertex2f(700,400);
glEnd();
}
void stone()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
//stone
glBegin(GL_POLYGON);
glColor3f(0.3,0.3,0.3);
glVertex2f(28,45);
glVertex2f(30,47);
glVertex2f(31,49);
glVertex2f(34,52);
glVertex2f(37,55);
glVertex2f(43,55);
glVertex2f(46,52);
glVertex2f(49,49);
glVertex2f(50,47);
glVertex2f(52,45);

glVertex2f(52,35);
glColor3f(0.3,0.3,0.3);
glVertex2f(46,30);
glVertex2f(43,25);
glColor3f(0,0,0);
glVertex2f(31,25);
glVertex2f(28,45);
glEnd();
}
void man()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
//left hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8-4,47.7-3);
glVertex2f(25-4,46.2-3);
glVertex2f(25-4,46.2-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(23.3-4,44.2-3);
glVertex2f(23.3-4,44.2-3);
glVertex2f(22.8-4,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25-4,46.2-3);
glVertex2f(30-4,47.2-3);
glVertex2f(30-4,47.2-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(24.5-4,43.7-3);
glVertex2f(25-4,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30-4,47.2-3);
glVertex2f(32-4,48.7-3);
glVertex2f(32-4,48.7-3);
glVertex2f(32.5-4,48.2-3);
glVertex2f(32.5-4,48.2-3);
glVertex2f(33.5-4,47.2-3);
glVertex2f(33.5-4,47.2-3);
glVertex2f(32.5-4,46.2-3);
glVertex2f(32.5-4,46.2-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30.5-4,45.7-3);
glVertex2f(30-4,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();


//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void tree()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(10,100.0,10,100.0);

glBegin(GL_POLYGON);
glColor3f(0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();
//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);

glEnd();


//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();
}

void eee()
{

glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(40,400,40,400);
	//glMatrixMode(GL_MODELVIEW);
	glScaled(0.4,0.4,0.4);
	glTranslated(480,590,0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glColor3f(1,1,1);
	glVertex2f(80,120);
	//glColor3f(0,0,0);
	glVertex2f(220,120);
	//glColor3f(1,0.5,0);
	glVertex2f(220,170);
	//glColor3f(1,0.5,0);
	glVertex2f(80,170);
	//glColor3f(1,0.5,0);
	glVertex2f(80,120);
	//glColor3f(0.8,0.5,0);
	//glVertex2f(80,220);
	glEnd();
	glPopMatrix();
}

void fff()
{

glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(40,400,40,400);
	//glMatrixMode(GL_MODELVIEW);
	glScaled(0.4,0.4,0.4);
	glTranslated(450,540,0);
	glBegin(GL_POLYGON);
	glPushMatrix();
	glColor3f(1,1,1);
	glVertex2f(80,120);
	//glColor3f(0,0,0);
	glVertex2f(200,120);
	//glColor3f(1,0.5,0);
	glVertex2f(200,170);
	//glColor3f(1,0.5,0);
	glVertex2f(80,170);
	//glColor3f(1,0.5,0);
	glVertex2f(80,120);
	//glColor3f(0.8,0.5,0);
	//glVertex2f(80,220);
	glEnd();
	glPopMatrix();
}
void house()
{

glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	gluOrtho2D(40,400,40,400);
	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2f(80,120);
	glColor3f(0,0,0);
	glVertex2f(140,120);
	glColor3f(1,0.5,0);
	glVertex2f(140,220);
	glColor3f(1,0.5,0);
	glVertex2f(80,220);
	glColor3f(1,0.5,0);
	glVertex2f(80,120);
	glColor3f(0.8,0.5,0);
	glVertex2f(80,220);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(65,210);
	glColor3f(0,0,0);
	glVertex2f(110,300);
	glColor3f(0,0,0);
	glVertex2f(155,210);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(95,120);
	glColor3f(0,0,0);
	glVertex2f(95,160);
	glColor3f(0,0,0);
	glVertex2f(95,160);
	glColor3f(0,0,0);
	glVertex2f(120,160);
	glColor3f(0,0,0);
	glVertex2f(120,160);
	glColor3f(1,0.5,0);
	glVertex2f(120,120);
	glEnd();
}

void man1()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
//left hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8,47.7-3);
glVertex2f(25,46.2-3);
glVertex2f(25,46.2-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(23.3,44.2-3);
glVertex2f(23.3,44.2-3);
glVertex2f(22.8,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25,46.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(25,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30,47.2-3);
glVertex2f(32,48.7-3);
glVertex2f(32,48.7-3);
glVertex2f(32.5,48.2-3);
glVertex2f(32.5,48.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5,35);
glVertex2f(28.5,55);
glVertex2f(32,50);
glVertex2f(32,40);
glVertex2f(28.5,35);

glEnd();

//bow arrow on back
glBegin(GL_POLYGON);
glColor3f(0.5,0,0);
glVertex2f(18-1,38);
glVertex2f(15-1,49);
glVertex2f(15-1,49);
glVertex2f(15.5-1,49);
glVertex2f(15.5-1,49);
glVertex2f(16-1,49.6);
glVertex2f(16-1,49.6);
glVertex2f(16.5-1,49.4);
glVertex2f(16.5-1,49.4);
glVertex2f(17-1,50);
glVertex2f(17-1,50);
glVertex2f(17.5-1,49.8);
glVertex2f(17.5-1,49.8);
glVertex2f(18-1,50.4);
glVertex2f(18-1,50.4);
glVertex2f(18.4-1,49);
glVertex2f(18.4-1,49);
glVertex2f(18-1,38);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.7-1,46.6);
glVertex2f(18.4-1,48.8);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.85-1,45.8);
glVertex2f(18.4-1,48);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.5-1,49);
glVertex2f(14.6-1,53);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(16.5-1,49.4);
glVertex2f(15.6-1,53.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(17.5-1,50);
glVertex2f(16.8-1,53.4);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0.0,0.0,0.0);
glVertex2f(14.3-1,52.1);
glVertex2f(14.6-1,53);
glVertex2f(15.2-1,52.6);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(15.3-1,52.3);
glVertex2f(15.6-1,53.2);
glVertex2f(16.2-1,52.8);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(16.5-1,52.5);
glVertex2f(16.8-1,53.4);
glVertex2f(17.4-1,53);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void arjuna()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
//left hand
glTranslated(10,30,0);
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8,47.7-3);
glVertex2f(25,46.2-3);
glVertex2f(25,46.2-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(23.3,44.2-3);
glVertex2f(23.3,44.2-3);
glVertex2f(22.8,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25,46.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(25,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30,47.2-3);
glVertex2f(32,48.7-3);
glVertex2f(32,48.7-3);
glVertex2f(32.5,48.2-3);
glVertex2f(32.5,48.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.3,0.2,0.10);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.25,0.35,0.45);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.2,0.25,0.8);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.2,0.25,0.8);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5,35);
glVertex2f(28.5,55);
glVertex2f(32,50);
glVertex2f(32,40);
glVertex2f(28.5,35);

glEnd();

//bow arrow on back
glBegin(GL_POLYGON);
glColor3f(0.54,0.45,0.3);
glVertex2f(18-1,38);
glVertex2f(15-1,49);
glVertex2f(15-1,49);
glVertex2f(15.5-1,49);
glVertex2f(15.5-1,49);
glVertex2f(16-1,49.6);
glVertex2f(16-1,49.6);
glVertex2f(16.5-1,49.4);
glVertex2f(16.5-1,49.4);
glVertex2f(17-1,50);
glVertex2f(17-1,50);
glVertex2f(17.5-1,49.8);
glVertex2f(17.5-1,49.8);
glVertex2f(18-1,50.4);
glVertex2f(18-1,50.4);
glVertex2f(18.4-1,49);
glVertex2f(18.4-1,49);
glVertex2f(18-1,38);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.7-1,46.6);
glVertex2f(18.4-1,48.8);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.85-1,45.8);
glVertex2f(18.4-1,48);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.5-1,49);
glVertex2f(14.6-1,53);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(16.5-1,49.4);
glVertex2f(15.6-1,53.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(17.5-1,50);
glVertex2f(16.8-1,53.4);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0.0,0.0,0.0);
glVertex2f(14.3-1,52.1);
glVertex2f(14.6-1,53);
glVertex2f(15.2-1,52.6);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(15.3-1,52.3);
glVertex2f(15.6-1,53.2);
glVertex2f(16.2-1,52.8);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(16.5-1,52.5);
glVertex2f(16.8-1,53.4);
glVertex2f(17.4-1,53);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}

void arjuna1()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
//left hand
glTranslated(10,30,0);
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8,47.7-3);
glVertex2f(25,46.2-3);
glVertex2f(25,46.2-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(23.3,44.2-3);
glVertex2f(23.3,44.2-3);
glVertex2f(22.8,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25,46.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(25,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30,47.2-3);
glVertex2f(32,48.7-3);
glVertex2f(32,48.7-3);
glVertex2f(32.5,48.2-3);
glVertex2f(32.5,48.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.3,0.2,0.10);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.25,0.35,0.45);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.2,0.25,0.8);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.2,0.25,0.8);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5,35);
glVertex2f(28.5,55);
glVertex2f(32,50);
glVertex2f(32,40);
glVertex2f(28.5,35);

glEnd();

//bow arrow on back
glBegin(GL_POLYGON);
glColor3f(0.54,0.45,0.3);
glVertex2f(18-1,38);
glVertex2f(15-1,49);
glVertex2f(15-1,49);
glVertex2f(15.5-1,49);
glVertex2f(15.5-1,49);
glVertex2f(16-1,49.6);
glVertex2f(16-1,49.6);
glVertex2f(16.5-1,49.4);
glVertex2f(16.5-1,49.4);
glVertex2f(17-1,50);
glVertex2f(17-1,50);
glVertex2f(17.5-1,49.8);
glVertex2f(17.5-1,49.8);
glVertex2f(18-1,50.4);
glVertex2f(18-1,50.4);
glVertex2f(18.4-1,49);
glVertex2f(18.4-1,49);
glVertex2f(18-1,38);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.7-1,46.6);
glVertex2f(18.4-1,48.8);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.85-1,45.8);
glVertex2f(18.4-1,48);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.5-1,49);
glVertex2f(14.6-1,53);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(16.5-1,49.4);
glVertex2f(15.6-1,53.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(17.5-1,50);
glVertex2f(16.8-1,53.4);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0.0,0.0,0.0);
glVertex2f(14.3-1,52.1);
glVertex2f(14.6-1,53);
glVertex2f(15.2-1,52.6);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(15.3-1,52.3);
glVertex2f(15.6-1,53.2);
glVertex2f(16.2-1,52.8);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(16.5-1,52.5);
glVertex2f(16.8-1,53.4);
glVertex2f(17.4-1,53);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void man_ekh()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);

//left hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(22.8,47.7-3);
glVertex2f(25,46.2-3);
glVertex2f(25,46.2-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(23.3,44.2-3);
glVertex2f(23.3,44.2-3);
glVertex2f(22.8,47.7-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(25,46.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30,47.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(24.5,43.7-3);
glVertex2f(25,46.2-3);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(30,47.2-3);
glVertex2f(32,48.7-3);
glVertex2f(32,48.7-3);
glVertex2f(32.5,48.2-3);
glVertex2f(32.5,48.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(33.5,47.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(32.5,46.2-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30.5,45.7-3);
glVertex2f(30,47.2-3);
glEnd();

//right leg
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);

glVertex2f(22-1,31-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21.5-1,25-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(22-1,31-4);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(21.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(22.5-1,25-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24.5-4);
glVertex2f(23-1,24-4);
glVertex2f(23-1,24-4);
glVertex2f(22.5-1,23-4);
glVertex2f(22.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21.5-1,25-4);
glEnd();
//LEFT LEg
glBegin(GL_POLYGON);
glColor3f(0.80,0.45,0.20);
glVertex2f(19.5-1,30.5-4);
glVertex2f(20-1,23-4);
glVertex2f(20-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(20.5-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(21-1,23-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20.5-1,24.5-4);
glVertex2f(20-1,31-4);
glVertex2f(20-1,31-4);
glVertex2f(19.5-1,30.5-4);
glEnd();


//head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(18,55+1);
glVertex2f(18.5,56.4+1);
glVertex2f(18.5,56.4+1);
glVertex2f(19.5,56.9+1);
glVertex2f(19.5,56.9+1);
glVertex2f(22.5,56+1);
glVertex2f(22.5,56+1);
glVertex2f(22.3,55+1);
glVertex2f(22.3,55+1);
glVertex2f(18,55+1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(18,55);
glVertex2f(18.5,56);
glVertex2f(18.5,56);
glVertex2f(19.5,56.2);
glVertex2f(19.5,56.2);
glVertex2f(22.5,55.9);
glVertex2f(22.5,55.9);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(18,55);
glEnd();

glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(18,55);
glVertex2f(22.3,55);
glVertex2f(22.3,55);
glVertex2f(22.8,53);
glVertex2f(22.8,53);
glVertex2f(22.3,52.8);
glVertex2f(22.3,52.8);
glVertex2f(18.5,51);
glVertex2f(18.5,51);
glVertex2f(18,52);
glVertex2f(18,52);
glVertex2f(18,55);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.3);
glVertex2f(18.5,51);
glVertex2f(22.2,52.8);
glVertex2f(22.2,52.8);
glVertex2f(22.4,52);
glVertex2f(22.4,52);
glVertex2f(21.8,51.5);
glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(18.5,51);
//glColor3f(0.5,0.4,0.3);

glVertex2f(21.8,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.4,51.5);
glVertex2f(22.2,50.5);
glVertex2f(22.2,50.5);
glVertex2f(21.6,50.2);
glVertex2f(21.6,50.2);
glVertex2f(21.4,50);
glVertex2f(21.4,50);
glVertex2f(21.8,49);
glVertex2f(21.8,49);
glVertex2f(18.5,51);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(19,49+3);
glVertex2f(21,49+3);
glVertex2f(21,45+3);
glVertex2f(19,45+3);
glVertex2f(19,49+3);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0.4,0);
glVertex2f(19,48);
glVertex2f(17,46);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,46);
glVertex2f(21,48);
glVertex2f(19,48);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.5,0.3,0.5);
glVertex2f(17,36);
glVertex2f(23,36);
glVertex2f(23,32);
glVertex2f(17,32);
glVertex2f(17,36);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(17,32);
glVertex2f(20,32);
glVertex2f(20,27);
glVertex2f(19.5,25);
glVertex2f(17.5,25);
glVertex2f(17,27);
glVertex2f(17,32);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(20,32);
glVertex2f(23,32);
glVertex2f(23,27);
glVertex2f(22.5,25);
glVertex2f(19.5,25);
//glVertex2f(20,27);
glVertex2f(20,32);
glEnd();


//right hand
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(21.5,44.8);
glVertex2f(22.5,42.8);
glVertex2f(22.5,42.8);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(20,43.3);
glVertex2f(20,43.3);
glVertex2f(21.5,44.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(22.5,42.8);
glVertex2f(26.5,46.8);
glVertex2f(26.5,46.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(22,40.3);
glVertex2f(22,40.3);
glVertex2f(22.5,42.8);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.5,0.4,0.5);
glVertex2f(26.5,46.8);
glVertex2f(28.5,48.3);
glVertex2f(28.5,48.3);
glVertex2f(30,46.8);
glVertex2f(30,46.8);
glVertex2f(29,45.8);
glVertex2f(29,45.8);
glVertex2f(27,45.3);
glVertex2f(27,45.3);
glVertex2f(26.5,46.8);
glEnd();
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5,35);
glVertex2f(28.5,55);
glVertex2f(32,50);
glVertex2f(32,40);
glVertex2f(28.5,35);

glEnd();

//bow arrow on back
glBegin(GL_POLYGON);
glColor3f(0.5,0,0);
glVertex2f(18-1,38);
glVertex2f(15-1,49);
glVertex2f(15-1,49);
glVertex2f(15.5-1,49);
glVertex2f(15.5-1,49);
glVertex2f(16-1,49.6);
glVertex2f(16-1,49.6);
glVertex2f(16.5-1,49.4);
glVertex2f(16.5-1,49.4);
glVertex2f(17-1,50);
glVertex2f(17-1,50);
glVertex2f(17.5-1,49.8);
glVertex2f(17.5-1,49.8);
glVertex2f(18-1,50.4);
glVertex2f(18-1,50.4);
glVertex2f(18.4-1,49);
glVertex2f(18.4-1,49);
glVertex2f(18-1,38);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.7-1,46.6);
glVertex2f(18.4-1,48.8);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.85-1,45.8);
glVertex2f(18.4-1,48);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(15.5-1,49);
glVertex2f(14.6-1,53);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(16.5-1,49.4);
glVertex2f(15.6-1,53.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(17.5-1,50);
glVertex2f(16.8-1,53.4);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0.0,0.0,0.0);
glVertex2f(14.3-1,52.1);
glVertex2f(14.6-1,53);
glVertex2f(15.2-1,52.6);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(15.3-1,52.3);
glVertex2f(15.6-1,53.2);
glVertex2f(16.2-1,52.8);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(16.5-1,52.5);
glVertex2f(16.8-1,53.4);
glVertex2f(17.4-1,53);
glEnd();

//eyes
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(21.3,54.7);
glVertex2f(21.8,54.2);
glVertex2f(22.3,54.7);
glVertex2f(21.8,55.2);
glEnd();
glBegin(GL_LINE_STRIP);
glVertex2f(21.3,55);
glVertex2f(21.8,55.5);
glVertex2f(22.3,55);
glEnd();

}
void sky()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
glVertex2f(0,400);
glVertex2f(700,400);
glColor3f(0.7,0.7,1);
glVertex2f(700,700);
glVertex2f(0,700);
glVertex2f(0,400);
glEnd();
}
void ground()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);
glColor3f(0,0.3,0);
glVertex2f(0,400);
glVertex2f(700,400);
glColor3f(0,1,0);
glVertex2f(700,0);

glVertex2f(0,0);
glVertex2f(0,400);
glEnd();
}
void back()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-20,100.0,-20,100.0);

glBegin(GL_POLYGON);
glColor3f(0.0,0.8,0.1);
glVertex2f(28,65);
glVertex2f(30,64.5);
 glVertex2f(32.5,64);
glVertex2f(34,64.5);
 glVertex2f(35.5,65);
 glVertex2f(39,66);
 glVertex2f(37,67.5);
 glVertex2f(37,68);
 glVertex2f(39,69.5);

glVertex2f(39,71.5);
glVertex2f(39.3,72);
glVertex2f(39.6,73);
glVertex2f(39.9,73.5);
glVertex2f(40,74);
 glVertex2f(40.5,75);
glVertex2f(40,76.5);
 glVertex2f(43,77.5);
 glVertex2f(42.5,79);
 glVertex2f(43,80);
 glVertex2f(41.5,82.5);
 glVertex2f(40.5,82);
glVertex2f(40,81.5);
glVertex2f(41,82.5);
glVertex2f(41.5,83.5);
glVertex2f(42,85);
glVertex2f(39,87);
glVertex2f(37,88.5);
glVertex2f(33,86);
glVertex2f(32,84);
glVertex2f(33,90);
glVertex2f(28,65);

glEnd();
//root
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(26.5,49);
glVertex2f(28,48.5);
 glVertex2f(30,50);
 glVertex2f(28.5,52.5);
 glVertex2f(28,55);
 glVertex2f(28.5,67.5);
 glVertex2f(28,55);
 glVertex2f(28,60);
 glVertex2f(28.5,67.5);
 glVertex2f(28,65);
 glVertex2f(28.5,67.5);
 glVertex2f(29.5,71);
 glVertex2f(30,72.5);
 glVertex2f(25,80);
 glVertex2f(25,50);
 glVertex2f(26.5,49);
 glEnd();


//tree 1 branch
glShadeModel(GL_SMOOTH);
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.2);
glVertex2f(16.5,70);
glVertex2f(12.5,70);
 glVertex2f(11,71.5);
 glVertex2f(10,72.5);
glColor3f(0.0,0.85,0.1);
 glVertex2f(10,75);
 glVertex2f(7.5,75);
 glVertex2f(6,76);
 glVertex2f(5,78.5);
 glVertex2f(5,80);
 glVertex2f(7.5,82.5);
 glVertex2f(5,85);
 glVertex2f(2.7,87);
 glVertex2f(2.75,90);
glColor3f(0.1,0.6,0.1);
 glVertex2f(2.8,91);
 glVertex2f(3.5,92.5);
 glVertex2f(5,95);
 glVertex2f(7,97.5);
 glVertex2f(10,98);
 glVertex2f(15,99);
 glColor3f(0.1,0.6,0.2);
 glVertex2f(20,98.5);
glVertex2f(25,98);
 glVertex2f(30,97.5);

 glVertex2f(30.5,97);
 glVertex2f(30,95);
 glVertex2f(32.5,92.5);
 glVertex2f(34,87.5);
glVertex2f(35,85);
 glVertex2f(34.5,82.5);

 glVertex2f(34,79);
 glVertex2f(34.5,77.5);
  glColor3f(0.1,0.6,0.0);
 glVertex2f(33,76);
 glVertex2f(32.5,74.5);
 glVertex2f(31,73);
 glVertex2f(30,72.5);
 glVertex2f(27.5,72.5);
 glVertex2f(26,73);
 glVertex2f(25,75);

glEnd();


//tree1 root
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(17.5,56);
glVertex2f(17.0,62.5);
 glVertex2f(17.5,67.5);
glVertex2f(16.5,70.0);
 glVertex2f(16.0,72.5);
 glVertex2f(15.5,75.0);
 glVertex2f(15.0,80.0);
 glVertex2f(20.0,85.0);
 glVertex2f(21.5,77.0);

glVertex2f(26.0,87.0);
glVertex2f(30.0,85.0);
 glVertex2f(28.0,80.0);
glVertex2f(25.5,75.0);
 glVertex2f(25,72.5);
 glVertex2f(25,70.0);
 glVertex2f(25.0,55.0);
 glVertex2f(25.5,52.5);
 glVertex2f(26.0,50.0);

glVertex2f(26.5,48.0);
glVertex2f(27.0,47.5);
glVertex2f(28.5,46.0);
glVertex2f(29,44);
glVertex2f(30.0,40.0);
glVertex2f(20.0,47.5);
glVertex2f(17.5,47.0);
glVertex2f(18.0,50.0);
glVertex2f(17.0,54.0);

 glVertex2f(20.0,53.0);
 glVertex2f(17.5,56.0);
 glEnd();
//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);

 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();





//tree 2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();
}
void grass()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,150.0,0.0,150.0);
//grass 2

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();

}
void drona()
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	//body
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171,155);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175,145);
		glVertex2f(178,144);
		glVertex2f(181,143);
		glVertex2f(180,130);
		glVertex2f(179.5,125);
		glVertex2f(179,120);
		glVertex2f(179,115);
		glVertex2f(179,110);
		glVertex2f(179.8,105);
		glVertex2f(180,102);
		glVertex2f(180,100);
		glVertex2f(154.8,100);
		glVertex2f(154.8,102);
		glVertex2f(155,105);
		glVertex2f(155.2,110);
		glVertex2f(155,115);
		glVertex2f(154.5,120);
		glVertex2f(154.3,125);
		glVertex2f(154,128);
		glVertex2f(153.5,129);
		glVertex2f(152.5,130);
		glVertex2f(153,142);
		glVertex2f(155,143);
		glVertex2f(158,144);
		glVertex2f(160,145);
		glVertex2f(160,145);
		glVertex2f(161.5,148);
		glVertex2f(161.5,148);
		glVertex2f(162,150);
		glVertex2f(162,150);
		glVertex2f(162,155);
		glVertex2f(162,155);
		glVertex2f(171,155);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(153,142);
	glVertex2f(180,100);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180,102);
		glVertex2f(154.8,102);
	glEnd();
glBegin(GL_POLYGON);//body
		glColor3f(1.0,0.25,0.0);
		glVertex2f(175,149);
		glVertex2f(181,143);
		glVertex2f(170,100);
		glVertex2f(155,100);
glEnd();




//head
glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(167,152);
		glVertex2f(169,153);
		glVertex2f(172,155);
		glVertex2f(173.5,158);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,165);
		glVertex2f(159,160);
		glVertex2f(159.5,158);
		glVertex2f(160,157);
		glVertex2f(161,156);
		glVertex2f(162.5,154.5);
		glVertex2f(163,154);
		glVertex2f(164,153);
		glVertex2f(167,152);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(159,155);
glVertex2f(167,135);
glVertex2f(174.5,155);

glVertex2f(159,155);
glEnd();
//nose
glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(166.9,165);
	glVertex2f(166.9,161);
glEnd();
//mouth
glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(165,159);
	glVertex2f(166,158.7);
	glVertex2f(167,158.5);
	glVertex2f(168,158.6);
	glVertex2f(169.8,159);
glEnd();
//hair
glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(173,170);
		glVertex2f(173,170);
		glVertex2f(174,167);

		glVertex2f(174,167);
		glVertex2f(174,167);
		glVertex2f(174.5,162);

		glVertex2f(174.5,162);
		glVertex2f(174.5,164);

		glEnd();

glBegin(GL_POLYGON);
glVertex2f(174,169);
glVertex2f(173,172);
glVertex2f(171,174);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(167,173);
		glVertex2f(167,173);
		glVertex2f(169,172.8);
		glVertex2f(169,172.8);
		glVertex2f(171,172);
		glVertex2f(171,172);
glVertex2f(173,170);
glVertex2f(174,167);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(167,175);
glVertex2f(164,174.5);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,169);
glVertex2f(159,167);
		glVertex2f(159,167);
		glVertex2f(160,169);
		glVertex2f(160,169);
		glVertex2f(162,171.5);
		glVertex2f(162,171.5);
		glVertex2f(164,172.5);
		glVertex2f(164,172.5);
glVertex2f(167,173);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(160,158);
glVertex2f(160.8,157);
glVertex2f(160.8,154);
glVertex2f(160.8,150);
glVertex2f(160.8,145);
glVertex2f(160.8,143);
glVertex2f(160.8,136);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(161,157);
glVertex2f(161.8,156);
glVertex2f(161.8,154);
glVertex2f(161.8,145);
glVertex2f(161.8,143);
glVertex2f(161.8,140);
glVertex2f(161.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(172,156.5);
glVertex2f(172.8,156);
glVertex2f(172.8,154);
glVertex2f(172.8,145);
glVertex2f(172.8,143);
glVertex2f(172.8,140);
glVertex2f(172.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(173,158.5);
glVertex2f(173.8,157);
glVertex2f(173.8,154);
glVertex2f(173.8,150);
glVertex2f(173.8,145);
glVertex2f(173.8,143);
glVertex2f(173.8,136);
glEnd();
//STRIPS
glBegin(GL_LINES);
	glColor3f(1.0,1.0,1.0);
	glVertex2f(165,169);
	glVertex2f(169,169);
	glVertex2f(165,170.5);
	glVertex2f(169,170.5);
	glVertex2f(165,172);
	glVertex2f(169,172);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(167,174);
	glVertex2f(167,167);
glEnd();

//EYES
glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(160,165);
		glVertex2f(162,163.5);
		glVertex2f(163,163.5);
		glVertex2f(165,165);
		glVertex2f(163,166.5);
		glVertex2f(162,166.5);
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(168,165);
		glVertex2f(170,163.5);
		glVertex2f(171,163.5);
		glVertex2f(173,165);
		glVertex2f(171,166.5);
		glVertex2f(170,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(160,166.5);
		glVertex2f(162,168.5);
		glVertex2f(163,168.5);
		glVertex2f(165,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(168,166.5);
		glVertex2f(171,168.5);
		glVertex2f(170,168.5);
		glVertex2f(173,166.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);

		glColor3f(0.0,0.0,0.0);
	//RUDRAKSH

	glBegin(GL_POLYGON);//hand1
		glColor3f(0.9,0.8,0);

		glVertex2f(153,142);
		glVertex2f(151,140.5);
		glVertex2f(150,139);
		glVertex2f(149,137);
		glVertex2f(148,135);
		glVertex2f(147.2,133);
		glVertex2f(147,130);
		glVertex2f(147,125);
		glVertex2f(147.1,120);
		glVertex2f(147.2,112);

//HALF

		glVertex2f(151.8,105);
		glVertex2f(152,110);
		glVertex2f(152.5,115);
		glVertex2f(152.5,120);
		glVertex2f(152.5,123);
		glVertex2f(152.5,125);
		glVertex2f(152.5,130);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.9,0.8,0);
	//glVertex2f(87.2,115);
	glVertex2f(147.2,112);

	glVertex2f(143.2,125);
	glVertex2f(139.2,125);
	glVertex2f(146.2,101);
	//glVertex2(87.2,100);
	glVertex2f(148.2,100.5);
	glVertex2f(149.2,101);
	glVertex2f(150.2,101.5);
	glVertex2f(151.2,102);
	glVertex2f(151.8,105);
glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(139.2,125);
		glVertex2f(137.6,129);
		glVertex2f(137.6,136);
		glVertex2f(139.2,138);
		glVertex2f(140.2,139);
		glVertex2f(141.2,139.1);
		glVertex2f(142.2,139.2);
		glVertex2f(143.2,139.3);
		glVertex2f(144.2,138);
		glVertex2f(144.2,137);
		glVertex2f(144.2,136);
		glVertex2f(144.2,135);
		glVertex2f(144,134);
		glVertex2f(143.8,133);
		glVertex2f(143.6,132);
		glVertex2f(143.6,130);
		glVertex2f(144.2,131);
		glVertex2f(144.3,132);
		glVertex2f(144.4,133);
		glVertex2f(144.8,134);
		glVertex2f(144.9,135);
		glVertex2f(145,136);
		glVertex2f(145.1,136);
		glVertex2f(145.3,136);
		glVertex2f(145.8,136);
		glVertex2f(146.2,136);
		glVertex2f(146.2,135);
		glVertex2f(146.2,133);
		glVertex2f(146,134);
		glVertex2f(145.8,132);
		glVertex2f(145.4,130);
		glVertex2f(145,128);
		glVertex2f(144.6,126);
		glVertex2f(143.6,124.2);
		glEnd();
		//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(139.2,125,0.8);
	//circle(141.2,125,0.8);
	//circle(143.2,125,0.8);

//rays
	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,137);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,127);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2,100-s3);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2,99.5-s3);
	glutPostRedisplay();
	glEnd();



	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.9,0.8,0);
		glVertex2f(180,143);//
		glVertex2f(182,142);
		glVertex2f(182,142);
		glVertex2f(183,141);
		glVertex2f(183,141);
		glVertex2f(184,139);
		glVertex2f(184,139);
		glVertex2f(185,136.5);
		glVertex2f(185,136.5);
		glVertex2f(186,135);
		glVertex2f(186,135);
		glVertex2f(187,130);
		glVertex2f(187,130);
		glVertex2f(187.2,125);
		glVertex2f(187.2,125);
		glVertex2f(187.5,120);
		glVertex2f(187.5,120);
		glVertex2f(187.5,117);
		glVertex2f(187.5,117);
		glVertex2f(187.2,115);
		glVertex2f(187.2,115);
		glVertex2f(187.2,112);
		glVertex2f(187.2,112);
		glVertex2f(187.2,108);
		glVertex2f(187.2,108);






		glVertex2f(184,103);
		glVertex2f(184,103);
		glVertex2f(183.5,105);
		glVertex2f(183.5,105);
		glVertex2f(183,110);
		glVertex2f(183,110);
		glVertex2f(182.5,115);
		glVertex2f(182.5,115);
		glVertex2f(182,120);
		glVertex2f(182,120);
		glVertex2f(180.5,125);//121
		glVertex2f(180,125);
		glVertex2f(179,143);//K
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(200,120);
		glVertex2f(203,125);
		glVertex2f(204,125);
		glVertex2f(207,121);
		glVertex2f(207,115);
		glVertex2f(204,112);
		glVertex2f(203,112);
		glVertex2f(200,113);
	glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(187.2,108);
		 glVertex2f(200,120);
		glVertex2f(200,120);
		glVertex2f(200,113);
		glVertex2f(200,113);
		glVertex2f(187,98);
		glVertex2f(187,98);
		glVertex2f(186,98.5);
		glVertex2f(186,98.5);
		glVertex2f(185,99);
		glVertex2f(185,99);
		glVertex2f(184,103);
		glEnd();
//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(200,120,0.8);
	//circle(200,118,0.8);
	//circle(200,116,0.8);
	//circle(200,114,0.8);


	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);
		glVertex2f(155,100);
		glVertex2f(154.2,95);
		glVertex2f(154,90);
		glVertex2f(154.3,85);
		glVertex2f(154,80);
		glVertex2f(154.5,75);
		glVertex2f(155,70);
		glVertex2f(155.3,65);
		glVertex2f(155.5,60);
		glVertex2f(156,55);
		glVertex2f(157.5,50);

		glVertex2f(165.5,50);
		glVertex2f(166.8,55);
		glVertex2f(166.8,60);
		glVertex2f(167,65);
		glVertex2f(167,70);
		glVertex2f(167,75);
		glVertex2f(166.9,77);
		glVertex2f(166.8,80);
		glVertex2f(167,90);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(157.9,50);
		glVertex2f(158,45);
		glVertex2f(158.2,40);
		glVertex2f(158.6,38);
		glVertex2f(164.5,38);
		glVertex2f(165,40);
		glVertex2f(165.2,45);
		glVertex2f(165.3,50);

	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167,90);
		glVertex2f(167.3,85);
		glVertex2f(168,80);
		glVertex2f(169,75);
		glVertex2f(169,70);
		glVertex2f(169.5,65);
		glVertex2f(170,60);
		glVertex2f(171.5,50);

		glVertex2f(180,50);
		glVertex2f(181,60);
		glVertex2f(181,65);
		glVertex2f(180.8,70);
		glVertex2f(180.8,75);
		glVertex2f(181,80);
		glVertex2f(181,90);
		glVertex2f(181,95);
		glVertex2f(180,100);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.9,0.8,0);
		glVertex2f(171.8,50);
		glVertex2f(172,45);
		glVertex2f(173,38.5);
		glVertex2f(178.4,38.5);
		glVertex2f(179,45);
		glVertex2f(179.5,50);
		glEnd();
//skirt
	glColor3f(1.0,0.25,0.0);
	glBegin(GL_POLYGON);
		glVertex2f(155,100);
		glVertex2f(154.2,95);
		glVertex2f(154,90);
		glVertex2f(154.3,74);
		glVertex2f(160.3,76);
		glVertex2f(167.3,74);
		glVertex2f(173.3,76);
		glVertex2f(181,74);
		glVertex2f(181,90);
		glVertex2f(181,95);
		glVertex2f(180,100);
	glEnd();
	//glColor3f(0.0,0.0,0.0);
		//circle(160.3,80,1);
		//circle(161.3,88,1);
		//circle(175.3,92,1);
		//circle(177.3,96,1);
		//circle(179.3,85,1);
		//circle(170.3,82,1);
		//circle(170.3,87,1);
		//circle(168.3,95,1);
		//circle(158.3,97,1);
	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.9,0.8,0);
		glVertex2f(159,38);
		glVertex2f(158.5,35);
		glVertex2f(157.5,32);
		glVertex2f(157,30);
		glVertex2f(157.5,28);
		glVertex2f(159,26.5);
		glVertex2f(162,26);
		glVertex2f(164,27);
		glVertex2f(165.5,29);
		glVertex2f(165,32);
		glVertex2f(164.5,35);
		glVertex2f(164,38);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);




	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.9,0.8,0);
		glVertex2f(173,38.5);
		glVertex2f(172.5,35);
		glVertex2f(172.2,30);
		glVertex2f(172,28);
		glVertex2f(173,26.8);
		glVertex2f(175,27);
		glVertex2f(178,27.5);
		glVertex2f(180,30);
		glVertex2f(179.7,33);
		glVertex2f(179,35);
		glVertex2f(178,38.5);
		glEnd();

	//anklets
		//glColor3f(0.0,0.0,0.0);
		//circle(173,38.5,0.8);
		//circle(175,38.5,0.8);
		//circle(177,38.5,0.8);
		//circle(178.5,38.5,0.6);



		glBegin(GL_POLYGON);/*pony*/
		glColor3f(0.0,0.0,0.0);
		glVertex2f(164,185.6);
		glVertex2f(169,185.6);
		glVertex2f(170,182.8);
		glVertex2f(170,178.8);
		glVertex2f(169,174.8);
		glVertex2f(164,174.8);
		glVertex2f(163,178.8);
		glVertex2f(163,182.8);
		glEnd();

		//glColor3f(1.0,1.0,1.0);
		//circle(167,177.8,3);
		//glColor3f(0.0,0.0,0.0);
		//circle(167.2,180.5,3);
		glBegin(GL_POLYGON);//BILLU
		glColor3f(0.7,0.0,0.0);
		glVertex2f(120,134);
		glVertex2f(160,134);
		glVertex2f(160,132.5);
		glVertex2f(120,132.5);
		glVertex2f(120,134);
		glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.0,0.0,0.0);
		glVertex2f(160,136);
		glVertex2f(160,131);
		glVertex2f(163,133);
		glVertex2f(160,136);
		glEnd();
		glBegin(GL_POLYGON);//billu
		glColor3f(0.7,0,0);
		glVertex2f(203.5,80);
		glVertex2f(203.5,150);
		glVertex2f(204,150);
		glVertex2f(204,80);
		glVertex2f(203.5,150);
		glEnd();
		glBegin(GL_LINE_STRIP);//billu
		glColor3f(0.7,0,0);
		glVertex2f(203.5,150);
		glVertex2f(210,130);
		glVertex2f(210,100);
		glVertex2f(203.5,80);
		glVertex2f(203.5,75);
		glVertex2f(211,100);
		glVertex2f(211,130);
		glVertex2f(203.5,155);
		glVertex2f(203.5,150);
		glEnd();

		}

void stud()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);


glBegin(GL_POLYGON);//head
		glColor3f(0,0,0);
		glVertex2f(167,-32);
		glVertex2f(169,-33);
		glVertex2f(172,-35);
		glVertex2f(173.5,-38);
		glVertex2f(174,-40);
		glVertex2f(174.5,-44);
		glVertex2f(174,-49);
		glVertex2f(173,-52);
		glVertex2f(171,-54);
		glVertex2f(169,-54.8);
		glVertex2f(167,-55);
		glVertex2f(164,-54.5);
		glVertex2f(162,-53.5);
		glVertex2f(160,-51);
		glVertex2f(159,-49);
		glVertex2f(159,-45);
		glVertex2f(159,-40);
		glVertex2f(159.5,-38);
		glVertex2f(160,-37);
		glVertex2f(161,-36);
		glVertex2f(162.5,-34.5);
		glVertex2f(163,-34);
		glVertex2f(164,-33);
		glVertex2f(167,-32);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0);
glVertex2f(185,-100);
glVertex2f(149,-100);
glVertex2f(149,-70);
glVertex2f(162,-65);
glVertex2f(162,-54);
glVertex2f(164,-54.5);
glVertex2f(167,-55);
glVertex2f(169,-54.8);
glVertex2f(171,-54);
glVertex2f(171,-65);
glVertex2f(185,-70);
glVertex2f(185,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(160,-125);
glVertex2f(140,-125);
glVertex2f(130,-120);
glVertex2f(130,-110);
glVertex2f(149,-100);
glVertex2f(167,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(174,-125);
glVertex2f(194,-125);
glVertex2f(204,-120);
glVertex2f(204,-110);
glVertex2f(185,-100);
glVertex2f(167,-100);
glEnd();

}
void stud1()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-250,320,-250,320);

glBegin(GL_POLYGON);//head
		glColor3f(0,0,0);
		glVertex2f(167,-32);
		glVertex2f(169,-33);
		glVertex2f(172,-35);
		glVertex2f(173.5,-38);
		glVertex2f(174,-40);
		glVertex2f(174.5,-44);
		glVertex2f(174,-49);
		glVertex2f(173,-52);
		glVertex2f(171,-54);
		glVertex2f(169,-54.8);
		glVertex2f(167,-55);
		glVertex2f(164,-54.5);
		glVertex2f(162,-53.5);
		glVertex2f(160,-51);
		glVertex2f(159,-49);
		glVertex2f(159,-45);
		glVertex2f(159,-40);
		glVertex2f(159.5,-38);
		glVertex2f(160,-37);
		glVertex2f(161,-36);
		glVertex2f(162.5,-34.5);
		glVertex2f(163,-34);
		glVertex2f(164,-33);
		glVertex2f(167,-32);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0);
glVertex2f(185,-100);
glVertex2f(149,-100);
glVertex2f(149,-70);
glVertex2f(162,-65);
glVertex2f(162,-54);
glVertex2f(164,-54.5);
glVertex2f(167,-55);
glVertex2f(169,-54.8);
glVertex2f(171,-54);
glVertex2f(171,-65);
glVertex2f(185,-70);
glVertex2f(185,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(160,-125);
glVertex2f(140,-125);
glVertex2f(130,-120);
glVertex2f(130,-110);
glVertex2f(149,-100);
glVertex2f(167,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(174,-125);
glVertex2f(194,-125);
glVertex2f(204,-120);
glVertex2f(204,-110);
glVertex2f(185,-100);
glVertex2f(167,-100);
glEnd();
}
void stud2()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-350,400,-350,400);

glBegin(GL_POLYGON);//head
		glColor3f(0,0,0);
		glVertex2f(167,-32);
		glVertex2f(169,-33);
		glVertex2f(172,-35);
		glVertex2f(173.5,-38);
		glVertex2f(174,-40);
		glVertex2f(174.5,-44);
		glVertex2f(174,-49);
		glVertex2f(173,-52);
		glVertex2f(171,-54);
		glVertex2f(169,-54.8);
		glVertex2f(167,-55);
		glVertex2f(164,-54.5);
		glVertex2f(162,-53.5);
		glVertex2f(160,-51);
		glVertex2f(159,-49);
		glVertex2f(159,-45);
		glVertex2f(159,-40);
		glVertex2f(159.5,-38);
		glVertex2f(160,-37);
		glVertex2f(161,-36);
		glVertex2f(162.5,-34.5);
		glVertex2f(163,-34);
		glVertex2f(164,-33);
		glVertex2f(167,-32);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0.9,0.8,0);
glVertex2f(185,-100);
glVertex2f(149,-100);
glVertex2f(149,-70);
glVertex2f(162,-65);
glVertex2f(162,-54);
glVertex2f(164,-54.5);
glVertex2f(167,-55);
glVertex2f(169,-54.8);
glVertex2f(171,-54);
glVertex2f(171,-65);
glVertex2f(185,-70);
glVertex2f(185,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(160,-125);
glVertex2f(140,-125);
glVertex2f(130,-120);
glVertex2f(130,-110);
glVertex2f(149,-100);
glVertex2f(167,-100);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,0.25,0);
glVertex2f(167,-100);
glVertex2f(167,-115);
glVertex2f(174,-125);
glVertex2f(194,-125);
glVertex2f(204,-120);
glVertex2f(204,-110);
glVertex2f(185,-100);
glVertex2f(167,-100);
glEnd();
}
void idle1()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(30,375,-50,375);

//body
	glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171,155);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175,145);
		glVertex2f(178,144);
		glVertex2f(181,143);
		glVertex2f(180,130);
		glVertex2f(179.5,125);
		glVertex2f(179,120);
		glVertex2f(179,115);
		glVertex2f(179,110);
		glVertex2f(179.8,105);
		glVertex2f(180,102);
		glVertex2f(180,100);
		glVertex2f(154.8,100);
		glVertex2f(154.8,102);
		glVertex2f(155,105);
		glVertex2f(155.2,110);
		glVertex2f(155,115);
		glVertex2f(154.5,120);
		glVertex2f(154.3,125);
		glVertex2f(154,128);
		glVertex2f(153.5,129);
		glVertex2f(152.5,130);
		glVertex2f(153,142);
		glVertex2f(155,143);
		glVertex2f(158,144);
		glVertex2f(160,145);
		glVertex2f(160,145);
		glVertex2f(161.5,148);
		glVertex2f(161.5,148);
		glVertex2f(162,150);

		glVertex2f(162,150);

		glVertex2f(162,155);
		glVertex2f(162,155);
		glVertex2f(171,155);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180,102);
		glVertex2f(154.8,102);
	glEnd();
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(177+3,103-3);
glColor3f(0.3,0.3,0.3);
glVertex2f(190+3,103-3);
glVertex2f(190+3,70-3);
glVertex2f(135+3,70-3);
glVertex2f(135+3,103-3);
glVertex2f(177+3,103-3);
glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2f(162,150);
glVertex2f(165,130);
glVertex2f(168,120);
glVertex2f(171,130);
glVertex2f(174,150);
glEnd();


//head
glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(167,152);
		glVertex2f(169,153);
		glVertex2f(172,155);
		glVertex2f(173.5,158);
		glVertex2f(174,160);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,165);
		glVertex2f(159,160);
		glVertex2f(159.5,158);
		glVertex2f(160,157);
		glVertex2f(161,156);
		glVertex2f(162.5,154.5);
		glVertex2f(163,154);
		glVertex2f(164,153);
		glVertex2f(167,152);
	glEnd();

//nose
glBegin(GL_LINES);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(166.9,165);
	glVertex2f(166.9,161);
glEnd();
//mouth
glBegin(GL_LINE_STRIP);
	glColor3f(0.0,0.0,0.0);
	glVertex2f(165,159);
	glVertex2f(166,158.7);
	glVertex2f(167,158.5);
	glVertex2f(168,158.6);
	glVertex2f(169.8,159);
glEnd();
//hair
glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(174.5,164);
		glVertex2f(174,169);
		glVertex2f(174,169);
		glVertex2f(173,172);
		glVertex2f(173,170);
		glVertex2f(173,170);
		glVertex2f(174,167);

		glVertex2f(174,167);
		glVertex2f(174,167);
		glVertex2f(174.5,162);

		glVertex2f(174.5,162);
		glVertex2f(174.5,164);

		glEnd();

glBegin(GL_POLYGON);
glVertex2f(174,169);
glVertex2f(173,172);
glVertex2f(171,174);
		glVertex2f(171,174);
		glVertex2f(169,174.8);
		glVertex2f(169,174.8);
		glVertex2f(167,175);
		glVertex2f(167,173);
		glVertex2f(167,173);
		glVertex2f(169,172.8);
		glVertex2f(169,172.8);
		glVertex2f(171,172);
		glVertex2f(171,172);
glVertex2f(173,170);
glVertex2f(174,167);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(167,175);
glVertex2f(164,174.5);
		glVertex2f(164,174.5);
		glVertex2f(162,173.5);
		glVertex2f(162,173.5);
		glVertex2f(160,171);
		glVertex2f(160,171);
		glVertex2f(159,169);
		glVertex2f(159,169);
glVertex2f(159,167);
		glVertex2f(159,167);
		glVertex2f(160,169);
		glVertex2f(160,169);
		glVertex2f(162,171.5);
		glVertex2f(162,171.5);
		glVertex2f(164,172.5);
		glVertex2f(164,172.5);
glVertex2f(167,173);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(160,158);
glVertex2f(160.8,157);
glVertex2f(160.8,154);
glVertex2f(160.8,150);
glVertex2f(160.8,145);
glVertex2f(160.8,143);
glVertex2f(160.8,136);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(161,157);
glVertex2f(161.8,156);
glVertex2f(161.8,154);
glVertex2f(161.8,145);
glVertex2f(161.8,143);
glVertex2f(161.8,140);
glVertex2f(161.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(172,156.5);
glVertex2f(172.8,156);
glVertex2f(172.8,154);
glVertex2f(172.8,145);
glVertex2f(172.8,143);
glVertex2f(172.8,140);
glVertex2f(172.8,135);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(173,158.5);
glVertex2f(173.8,157);
glVertex2f(173.8,154);
glVertex2f(173.8,150);
glVertex2f(173.8,145);
glVertex2f(173.8,143);
glVertex2f(173.8,136);
glEnd();
//EYES
glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,0.0);
		glVertex2f(160,165);
		glVertex2f(162,163.5);
		glVertex2f(163,163.5);
		glVertex2f(165,165);
		glVertex2f(163,166.5);
		glVertex2f(162,166.5);
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(168,165);
		glVertex2f(170,163.5);
		glVertex2f(171,163.5);
		glVertex2f(173,165);
		glVertex2f(171,166.5);
		glVertex2f(170,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(160,166.5);
		glVertex2f(162,168.5);
		glVertex2f(163,168.5);
		glVertex2f(165,166.5);
	glEnd();
glBegin(GL_LINE_STRIP);

		glVertex2f(168,166.5);
		glVertex2f(171,168.5);
		glVertex2f(170,168.5);
		glVertex2f(173,166.5);
	glEnd();
	glColor3f(1.0,1.0,1.0);

		glColor3f(0.0,0.0,0.0);


	glBegin(GL_POLYGON);//hand1
		glColor3f(0.3,0.3,0.3);

		glVertex2f(153,142);
		glVertex2f(151,140.5);
		glVertex2f(150,139);
		glVertex2f(149,137);
		glVertex2f(148,135);
		glVertex2f(147.2,133);
		glVertex2f(147,130);
		glVertex2f(147,125);
		glVertex2f(147.1,120);
		glVertex2f(147.2,112);

//HALF

		glVertex2f(151.8,105);
		glVertex2f(152,110);
		glVertex2f(152.5,115);
		glVertex2f(152.5,120);
		glVertex2f(152.5,123);
		glVertex2f(152.5,125);
		glVertex2f(152.5,130);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0.3,0.3,0.3);
	//glVertex2f(87.2,115);
	glVertex2f(147.2,112);

	glVertex2f(143.2,125);
	glVertex2f(139.2,125);
	glVertex2f(146.2,101);
	//glVertex2(87.2,100);
	glVertex2f(148.2,100.5);
	glVertex2f(149.2,101);
	glVertex2f(150.2,101.5);
	glVertex2f(151.2,102);
	glVertex2f(151.8,105);
glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.3,0.3,0.3);
		glVertex2f(139.2,125);
		glVertex2f(137.6,129);
		glVertex2f(137.6,136);
		glVertex2f(139.2,138);
		glVertex2f(140.2,139);
		glVertex2f(141.2,139.1);
		glVertex2f(142.2,139.2);
		glVertex2f(143.2,139.3);
		glVertex2f(144.2,138);
		glVertex2f(144.2,137);
		glVertex2f(144.2,136);
		glVertex2f(144.2,135);
		glVertex2f(144,134);
		glVertex2f(143.8,133);
		glVertex2f(143.6,132);
		glVertex2f(143.6,130);
		glVertex2f(144.2,131);
		glVertex2f(144.3,132);
		glVertex2f(144.4,133);
		glVertex2f(144.8,134);
		glVertex2f(144.9,135);
		glVertex2f(145,136);
		glVertex2f(145.1,136);
		glVertex2f(145.3,136);
		glVertex2f(145.8,136);
		glVertex2f(146.2,136);
		glVertex2f(146.2,135);
		glVertex2f(146.2,133);
		glVertex2f(146,134);
		glVertex2f(145.8,132);
		glVertex2f(145.4,130);
		glVertex2f(145,128);
		glVertex2f(144.6,126);
		glVertex2f(143.6,124.2);
		glEnd();


//rays
	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,137);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2,127);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2,100-s3);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2,99.5-s3);
	glutPostRedisplay();
	glEnd();



	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.3,0.3,0.3);
		glVertex2f(180,143);//
		glVertex2f(182,142);
		glVertex2f(182,142);
		glVertex2f(183,141);
		glVertex2f(183,141);
		glVertex2f(184,139);
		glVertex2f(184,139);
		glVertex2f(185,136.5);
		glVertex2f(185,136.5);
		glVertex2f(186,135);
		glVertex2f(186,135);
		glVertex2f(187,130);
		glVertex2f(187,130);
		glVertex2f(187.2,125);
		glVertex2f(187.2,125);
		glVertex2f(187.5,120);
		glVertex2f(187.5,120);
		glVertex2f(187.5,117);
		glVertex2f(187.5,117);
		glVertex2f(187.2,115);
		glVertex2f(187.2,115);
		glVertex2f(187.2,112);
		glVertex2f(187.2,112);
		glVertex2f(187.2,108);
		glVertex2f(187.2,108);






		glVertex2f(184,103);
		glVertex2f(184,103);
		glVertex2f(183.5,105);
		glVertex2f(183.5,105);
		glVertex2f(183,110);
		glVertex2f(183,110);
		glVertex2f(182.5,115);
		glVertex2f(182.5,115);
		glVertex2f(182,120);
		glVertex2f(182,120);
		glVertex2f(180.5,125);//121
		glVertex2f(180,125);
		glVertex2f(179,143);//K
	glEnd();
	glBegin(GL_POLYGON);

		glVertex2f(200,120);
		glVertex2f(203,125);
		glVertex2f(204,125);
		glVertex2f(207,121);
		glVertex2f(207,115);
		glVertex2f(204,112);
		glVertex2f(203,112);
		glVertex2f(200,113);
	glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(187.2,108);
		 glVertex2f(200,120);
		glVertex2f(200,120);
		glVertex2f(200,113);
		glVertex2f(200,113);
		glVertex2f(187,98);
		glVertex2f(187,98);
		glVertex2f(186,98.5);
		glVertex2f(186,98.5);
		glVertex2f(185,99);
		glVertex2f(185,99);
		glVertex2f(184,103);
		glEnd();
		glBegin(GL_POLYGON);/*pony*/
		glColor3f(0.3,0.3,0.3);
		glVertex2f(164,185.6);
		glVertex2f(169,185.6);
		glVertex2f(170,182.8);
		glVertex2f(170,178.8);
		glVertex2f(169,174.8);
		glVertex2f(164,174.8);
		glVertex2f(163,178.8);
		glVertex2f(163,182.8);
		glEnd();

}

void ekalavya()
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(20,480,20,480);
	i+=0.7;
	if(i<130)
{

	//body
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171+i,155+i);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175+i,145+i);
		glVertex2f(178+i,144+i);
		glVertex2f(181+i,143+i);
		glVertex2f(180+i,130+i);
		glVertex2f(179.5+i,125+i);
		glVertex2f(179+i,120+i);
		glVertex2f(179+i,115+i);
		glVertex2f(179+i,110+i);
		glVertex2f(179.8+i,105+i);
		glVertex2f(180+i,102+i);
		glVertex2f(180+i,100+i);
		glVertex2f(154.8+i,100+i);
		glVertex2f(154.8+i,102+i);
		glVertex2f(155+i,105+i);
		glVertex2f(155.2+i,110+i);
		glVertex2f(155+i,115+i);
		glVertex2f(154.5+i,120+i);
		glVertex2f(154.3+i,125+i);
		glVertex2f(154+i,128+i);
		glVertex2f(153.5+i,129+i);
		glVertex2f(152.5+i,130+i);
		glVertex2f(153+i,142+i);
		glVertex2f(155+i,143+i);
		glVertex2f(158+i,144+i);
		glVertex2f(160+i,144+i);
		glVertex2f(160+i,145+i);
		glVertex2f(161.5+i,148+i);
		glVertex2f(161.5+i,148+i);
		glVertex2f(162+i,150+i);
		glVertex2f(162+i,150+i);
		glVertex2f(162+i,155+i);
		glVertex2f(162+i,155+i);
		glVertex2f(171+i,155+i);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180+i,102+i);
		glVertex2f(154.8+i,102+i);
	glEnd();




//head
glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(167+i,152+i);
		glVertex2f(169+i,153+i);
		glVertex2f(172+i,155+i);
		glVertex2f(173.5+i,158+i);
		glVertex2f(174+i,160+i);
		glVertex2f(174.5+i,164+i);
		glVertex2f(174+i,169+i);
		glVertex2f(173+i,172+i);
		glVertex2f(171+i,174+i);
		glVertex2f(169+i,174.8+i);
		glVertex2f(167+i,175+i);
		glVertex2f(164+i,174.5+i);
		glVertex2f(162+i,173.5+i);
		glVertex2f(160+i,171+i);
		glVertex2f(159+i,169+i);
		glVertex2f(159+i,165+i);
		glVertex2f(159+i,160+i);
		glVertex2f(159.5+i,158+i);
		glVertex2f(160+i,157+i);
		glVertex2f(161+i,156+i);
		glVertex2f(162.5+i,154.5+i);
		glVertex2f(163+i,154+i);
		glVertex2f(164+i,153+i);
		glVertex2f(167+i,152+i);
	glEnd();







//EYES

//glBegin(GL_LINE_STRIP);

	//RUDRAKSH
		//circle(172.5,146.5,1);
		//circle(172.5,144.5,1);
		//circle(172.5,142.5,1);
		//circle(172.5,140.5,1);
		//circle(172.5,138.5,1);
		//circle(172.5,136.5,1);
		//circle(172.5,134.5,1);
		//circle(172.5,132.5,1);
		//circle(171.5,130.5,1);
		//circle(170.5,128.5,1);
		//circle(169.5,126.5,1);
		//circle(168.5,124.5,1);
		//circle(167.5,123.5,1);
		//circle(166.5,122.5,1);
		//circle(165.5,124.5,1);
		//circle(164.5,126.5,1);
		//circle(163.5,128.5,1);
		//circle(162.5,130.5,1);
		//circle(161.5,132.5,1);
		//circle(160.5,134.5,1);
		//circle(160.5,136.5,1);
		//circle(160.5,138.5,1);
		//circle(160.5,140.5,1);
		//circle(160.5,142.5,1);
		//circle(160.5,144.5,1);
		//circle(112.5,140.5,1);

	glBegin(GL_POLYGON);//hand1
		glColor3f(0.7,0.4,0);

		glVertex2f(153+i,142+i);
		glVertex2f(151+i,140.5+i);
		glVertex2f(150+i,139+i);
		glVertex2f(149+i,137+i);
		glVertex2f(148+i,135+i);
		glVertex2f(147.2+i,133+i);
		glVertex2f(147+i,130+i);
		glVertex2f(147+i,125+i);
		glVertex2f(147.1+i,120+i);
		glVertex2f(147.2+i,112+i);
        glVertex2f(147.2+i,92+i);

//HALF
		glVertex2f(151.8+i,85+i);
		glVertex2f(152+i,110+i);
		glVertex2f(152.5+i,115+i);
		glVertex2f(152.5+i,120+i);
		glVertex2f(152.5+i,123+i);
		glVertex2f(152.5+i,125+i);
		glVertex2f(152.5+i,130+i);
	glEnd();




	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+i,137+i);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+i,127+i);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2+i,100-s3+i);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2+i,99.5-s3+i);
	glutPostRedisplay();
	glEnd();



	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.7,0.4,0);
		glVertex2f(180+i,143+i);
		glVertex2f(182+i,142+i);
		glVertex2f(182+i,142+i);
		glVertex2f(183+i,141+i);
		glVertex2f(183+i,141+i);
		glVertex2f(184+i,139+i);
		glVertex2f(184+i,139+i);
		glVertex2f(185+i,136.5+i);
		glVertex2f(185+i,136.5+i);
		glVertex2f(186+i,135+i);
		glVertex2f(186+i,135+i);
		glVertex2f(187+i,130+i);
		glVertex2f(187+i,130+i);
		glVertex2f(187.2+i,125+i);
		glVertex2f(187.2+i,125+i);
		glVertex2f(187.5+i,120+i);
		glVertex2f(187.5+i,120+i);
		glVertex2f(187.5+i,117+i);
		glVertex2f(187.5+i,117+i);
		glVertex2f(187.2+i,115+i);
		glVertex2f(187.2+i,115+i);
		glVertex2f(187.2+i,112+i);
		glVertex2f(187.2+i,112+i);
		glVertex2f(187.2+i,108+i);
		glVertex2f(187.2+i,90+i);






		glVertex2f(184+i,85+i);
		glVertex2f(184+i,103+i);
		glVertex2f(183.5+i,105+i);
		glVertex2f(183.5+i,105+i);
		glVertex2f(183+i,110+i);
		glVertex2f(183+i,110+i);
		glVertex2f(182.5+i,115+i);
		glVertex2f(182.5+i,115+i);
		glVertex2f(182+i,120+i);
		glVertex2f(182+i,120+i);
		glVertex2f(180.5+i,125+i);//121
		glVertex2f(180+i,125+i);
		glVertex2f(179+i,143+i);//K
	glEnd();



	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);
		glVertex2f(155+i,100+i);
		glVertex2f(154.2+i,95+i);
		glVertex2f(154+i,90+i);
		glVertex2f(154.3+i,85+i);
		glVertex2f(154+i,80+i);
		glVertex2f(154.5+i,75+i);
		glVertex2f(155+i,70+i);
		glVertex2f(155.3+i,65+i);
		glVertex2f(155.5+i,60+i);
		glVertex2f(156+i,55+i);
		glVertex2f(157.5+i,50+i);

		glVertex2f(165.5+i,50+i);
		glVertex2f(166.8+i,55+i);
		glVertex2f(166.8+i,60+i);
		glVertex2f(167+i,65+i);
		glVertex2f(167+i,70+i);
		glVertex2f(167+i,75+i);
		glVertex2f(166.9+i,77+i);
		glVertex2f(166.8+i,80+i);
		glVertex2f(167+i,90+i);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		glVertex2f(157.9+i,50+i);
		glVertex2f(158+i,45+i);
		glVertex2f(158.2+i,40+i);
		glVertex2f(158.6+i,38+i);
		glVertex2f(164.5+i,38+i);
		glVertex2f(165+i,40+i);
		glVertex2f(165.2+i,45+i);
		glVertex2f(165.3+i,50+i);

	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167+i,90+i);
		glVertex2f(167.3+i,85+i);
		glVertex2f(168+i,80+i);
		glVertex2f(169+i,75+i);
		glVertex2f(169+i,70+i);
		glVertex2f(169.5+i,65+i);
		glVertex2f(170+i,60+i);
		glVertex2f(171.5+i,50+i);

		glVertex2f(180+i,50+i);
		glVertex2f(181+i,60+i);
		glVertex2f(181+i,65+i);
		glVertex2f(180.8+i,70+i);
		glVertex2f(180.8+i,75+i);
		glVertex2f(181+i,80+i);
		glVertex2f(181+i,90+i);
		glVertex2f(181+i,95+i);
		glVertex2f(180+i,100+i);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.6,0.4,0);
		glVertex2f(171.8+i,50+i);
		glVertex2f(172+i,45+i);
		glVertex2f(173+i,38.5+i);
		glVertex2f(178.4+i,38.5+i);
		glVertex2f(179+i,45+i);
		glVertex2f(179.5+i,50+i);
		glEnd();
//skirt
	glColor3f(0.5,0.3,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(155+i,100+i);
		glVertex2f(154.2+i,95+i);
		glVertex2f(154+i,90+i);
		glVertex2f(154.3+i,74+i);
		glVertex2f(160.3+i,76+i);
		glVertex2f(167.3+i,74+i);
		glVertex2f(173.3+i,76+i);
		glVertex2f(181+i,74+i);
		glVertex2f(181+i,90+i);
		glVertex2f(181+i,95+i);
		glVertex2f(180+i,100+i);
	glEnd();
	//glColor3f(0.0,0.0,0.0);
		//circle(160.3,80,1);
		//circle(161.3,88,1);
		//circle(175.3,92,1);
		//circle(177.3,96,1);
		//circle(179.3,85,1);
		//circle(170.3,82,1);
		//circle(170.3,87,1);
		//circle(168.3,95,1);
		//circle(158.3,97,1);
	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.7,0.4,0);
		glVertex2f(159+i,38+i);
		glVertex2f(158.5+i,35+i);
		glVertex2f(157.5+i,32+i);
		glVertex2f(157+i,30+i);
		glVertex2f(157.5+i,28+i);
		glVertex2f(159+i,26.5+i);
		glVertex2f(162+i,26+i);
		glVertex2f(164+i,27+i);
		glVertex2f(165.5+i,29+i);
		glVertex2f(165+i,32+i);
		glVertex2f(164.5+i,35+i);
		glVertex2f(164+i,38+i);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);




	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.7,0.4,0);
		glVertex2f(173+i,38.5+i);
		glVertex2f(172.5+i,35+i);
		glVertex2f(172.2+i,30+i);
		glVertex2f(172+i,28+i);
		glVertex2f(173+i,26.8+i);
		glVertex2f(175+i,27+i);
		glVertex2f(178+i,27.5+i);
		glVertex2f(180+i,30+i);
		glVertex2f(179.7+i,33+i);
		glVertex2f(179+i,35+i);
		glVertex2f(178+i,38.5+i);

	}
else
{
//body
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171+130,155+130);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175+130,145+130);
		glVertex2f(178+130,144+130);
		glVertex2f(181+130,143+130);
		glVertex2f(180+130,130+130);
		glVertex2f(179.5+130,125+130);
		glVertex2f(179+130,120+130);
		glVertex2f(179+130,115+130);
		glVertex2f(179+130,110+130);
		glVertex2f(179.8+130,105+130);
		glVertex2f(180+130,102+130);
		glVertex2f(180+130,100+130);
		glVertex2f(154.8+130,100+130);
		glVertex2f(154.8+130,102+130);
		glVertex2f(155+130,105+130);
		glVertex2f(155.2+130,110+130);
		glVertex2f(155+130,115+130);
		glVertex2f(154.5+130,120+130);
		glVertex2f(154.3+130,125+130);
		glVertex2f(154+130,128+130);
		glVertex2f(153.5+130,129+130);
		glVertex2f(152.5+130,130+130);
		glVertex2f(153+130,142+130);
		glVertex2f(155+130,143+130);
		glVertex2f(158+130,144+130);
		glVertex2f(160+130,144+130);
		glVertex2f(160+130,145+130);
		glVertex2f(161.5+130,148+130);
		glVertex2f(161.5+130,148+130);
		glVertex2f(162+130,150+130);
		glVertex2f(162+130,150+130);
		glVertex2f(162+130,155+130);
		glVertex2f(162+130,155+130);
		glVertex2f(171+130,155+130);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180+130,102+130);
		glVertex2f(154.8+130,102+130);
	glEnd();




//head
glBegin(GL_POLYGON);
		glColor3f(0,0,0);
		glVertex2f(167+130,152+130);
		glVertex2f(169+130,153+130);
		glVertex2f(172+130,155+130);
		glVertex2f(173.5+130,158+130);
		glVertex2f(174+130,160+130);
		glVertex2f(174.5+130,164+130);
		glVertex2f(174+130,169+130);
		glVertex2f(173+130,172+130);
		glVertex2f(171+130,174+130);
		glVertex2f(169+130,174.8+130);
		glVertex2f(167+130,175+130);
		glVertex2f(164+130,174.5+130);
		glVertex2f(162+130,173.5+130);
		glVertex2f(160+130,171+130);
		glVertex2f(159+130,169+130);
		glVertex2f(159+130,165+130);
		glVertex2f(159+130,160+130);
		glVertex2f(159.5+130,158+130);
		glVertex2f(160+130,157+130);
		glVertex2f(161+130,156+130);
		glVertex2f(162.5+130,154.5+130);
		glVertex2f(163+130,154+130);
		glVertex2f(164+130,153+130);
		glVertex2f(167+130,152+130);
	glEnd();







//EYES

//glBegin(GL_LINE_STRIP);

	//RUDRAKSH
		//circle(172.5,146.5,1);
		//circle(172.5,144.5,1);
		//circle(172.5,142.5,1);
		//circle(172.5,140.5,1);
		//circle(172.5,138.5,1);
		//circle(172.5,136.5,1);
		//circle(172.5,134.5,1);
		//circle(172.5,132.5,1);
		//circle(171.5,130.5,1);
		//circle(170.5,128.5,1);
		//circle(169.5,126.5,1);
		//circle(168.5,124.5,1);
		//circle(167.5,123.5,1);
		//circle(166.5,122.5,1);
		//circle(165.5,124.5,1);
		//circle(164.5,126.5,1);
		//circle(163.5,128.5,1);
		//circle(162.5,130.5,1);
		//circle(161.5,132.5,1);
		//circle(160.5,134.5,1);
		//circle(160.5,136.5,1);
		//circle(160.5,138.5,1);
		//circle(160.5,140.5,1);
		//circle(160.5,142.5,1);
		//circle(160.5,144.5,1);
		//circle(112.5,140.5,1);

	glBegin(GL_POLYGON);//hand1
		glColor3f(0.7,0.4,0);

		glVertex2f(153+130,142+130);
		glVertex2f(151+130,140.5+130);
		glVertex2f(150+130,139+130);
		glVertex2f(149+130,137+130);
		glVertex2f(148+130,135+130);
		glVertex2f(147.2+130,133+130);
		glVertex2f(147+130,130+130);
		glVertex2f(147+130,125+130);
		glVertex2f(147.1+130,120+130);
		glVertex2f(147.2+130,112+130);
		glVertex2f(147.2+130,92+130);

//HALF
		glVertex2f(151.8+130,85+130);
		glVertex2f(152+130,110+130);
		glVertex2f(152.5+130,115+130);
		glVertex2f(152.5+130,120+130);
		glVertex2f(152.5+130,123+130);
		glVertex2f(152.5+130,125+130);
		glVertex2f(152.5+130,130+130);
	glEnd();



//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(139.2,125,0.8);
	//circle(141.2,125,0.8);
	//circle(143.2,125,0.8);

//rays
	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+130,137+130);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+130,127+130);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2+130,100-s3+130);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2+130,99.5-s3+130);
	glutPostRedisplay();
	glEnd();



	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.7,0.4,0);
		glVertex2f(180+130,143+130);
		glVertex2f(182+130,142+130);
		glVertex2f(182+130,142+130);
		glVertex2f(183+130,141+130);
		glVertex2f(183+130,141+130);
		glVertex2f(184+130,139+130);
		glVertex2f(184+130,139+130);
		glVertex2f(185+130,136.5+130);
		glVertex2f(185+130,136.5+130);
		glVertex2f(186+130,135+130);
		glVertex2f(186+130,135+130);
		glVertex2f(187+130,130+130);
		glVertex2f(187+130,130+130);
		glVertex2f(187.2+130,125+130);
		glVertex2f(187.2+130,125+130);
		glVertex2f(187.5+130,120+130);
		glVertex2f(187.5+130,120+130);
		glVertex2f(187.5+130,117+130);
		glVertex2f(187.5+130,117+130);
		glVertex2f(187.2+130,115+130);
		glVertex2f(187.2+130,115+130);
		glVertex2f(187.2+130,112+130);
		glVertex2f(187.2+130,112+130);
		glVertex2f(187.2+130,108+130);
		glVertex2f(187.2+130,90+130);






		glVertex2f(184+130,85+130);
		glVertex2f(184+130,103+130);
		glVertex2f(183.5+130,105+130);
		glVertex2f(183.5+130,105+130);
		glVertex2f(183+130,110+130);
		glVertex2f(183+130,110+130);
		glVertex2f(182.5+130,115+130);
		glVertex2f(182.5+130,115+130);
		glVertex2f(182+130,120+130);
		glVertex2f(182+130,120+130);
		glVertex2f(180.5+130,125+130);//121
		glVertex2f(180+130,125+130);
		glVertex2f(179+130,143+130);//K
	glEnd();


//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(200,120,0.8);
	//circle(200,118,0.8);
	//circle(200,116,0.8);
	//circle(200,114,0.8)


//TRISHUL


	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);
		glVertex2f(155+130,100+130);
		glVertex2f(154.2+130,95+130);
		glVertex2f(154+130,90+130);
		glVertex2f(154.3+130,85+130);
		glVertex2f(154+130,80+130);
		glVertex2f(154.5+130,75+130);
		glVertex2f(155+130,70+130);
		glVertex2f(155.3+130,65+130);
		glVertex2f(155.5+130,60+120);
		glVertex2f(156+130,55+130);
		glVertex2f(157.5+130,50+130);

		glVertex2f(165.5+130,50+130);
		glVertex2f(166.8+130,55+130);
		glVertex2f(166.8+130,60+130);
		glVertex2f(167+130,65+130);
		glVertex2f(167+130,70+130);
		glVertex2f(167+130,75+130);
		glVertex2f(166.9+130,77+130);
		glVertex2f(166.8+130,80+130);
		glVertex2f(167+130,90+130);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		glVertex2f(157.9+130,50+130);
		glVertex2f(158+130,45+130);
		glVertex2f(158.2+130,40+130);
		glVertex2f(158.6+130,38+130);
		glVertex2f(164.5+130,38+130);
		glVertex2f(165+130,40+130);
		glVertex2f(165.2+130,45+130);
		glVertex2f(165.3+130,50+130);

	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167+130,90+130);
		glVertex2f(167.3+130,85+130);
		glVertex2f(168+130,80+130);
		glVertex2f(169+130,75+130);
		glVertex2f(169+130,70+130);
		glVertex2f(169.5+130,65+130);
		glVertex2f(170+130,60+130);
		glVertex2f(171.5+130,50+130);

		glVertex2f(180+130,50+130);
		glVertex2f(181+130,60+130);
		glVertex2f(181+130,65+130);
		glVertex2f(180.8+130,70+130);
		glVertex2f(180.8+130,75+130);
		glVertex2f(181+130,80+130);
		glVertex2f(181+130,90+130);
		glVertex2f(181+130,95+130);
		glVertex2f(180+130,100+130);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.6,0.4,0);
		glVertex2f(171.8+130,50+130);
		glVertex2f(172+130,45+130);
		glVertex2f(173+130,38.5+130);
		glVertex2f(178.4+130,38.5+130);
		glVertex2f(179+130,45+130);
		glVertex2f(179.5+130,50+130);
		glEnd();
//skirt
	glColor3f(0.5,0.3,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(155+130,100+130);
		glVertex2f(154.2+130,95+130);
		glVertex2f(154+130,90+130);
		glVertex2f(154.3+130,74+130);
		glVertex2f(160.3+130,76+130);
		glVertex2f(167.3+130,74+130);
		glVertex2f(173.3+130,76+130);
		glVertex2f(181+130,74+130);
		glVertex2f(181+130,90+130);
		glVertex2f(181+130,95+130);
		glVertex2f(180+130,100+130);
	glEnd();
	//glColor3f(0.0,0.0,0.0);
		//circle(160.3,80,1);
		//circle(161.3,88,1);
		//circle(175.3,92,1);
		//circle(177.3,96,1);
		//circle(179.3,85,1);
		//circle(170.3,82,1);
		//circle(170.3,87,1);
		//circle(168.3,95,1);
		//circle(158.3,97,1);
	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.7,0.4,0);
		glVertex2f(159+130,38+130);
		glVertex2f(158.5+130,35+130);
		glVertex2f(157.5+130,32+130);
		glVertex2f(157+130,30+130);
		glVertex2f(157.5+130,28+130);
		glVertex2f(159+130,26.5+130);
		glVertex2f(162+130,26+130);
		glVertex2f(164+130,27+130);
		glVertex2f(165.5+130,29+130);
		glVertex2f(165+130,32+130);
		glVertex2f(164.5+130,35+130);
		glVertex2f(164+130,38+130);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);




	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.7,0.4,0);
		glVertex2f(173+130,38.5+130);
		glVertex2f(172.5+130,35+130);
		glVertex2f(172.2+130,30+130);
		glVertex2f(172+130,28+130);
		glVertex2f(173+130,26.8+130);
		glVertex2f(175+130,27+130);
		glVertex2f(178+130,27.5+130);
		glVertex2f(180+130,30+130);
		glVertex2f(179.7+130,33+130);
		glVertex2f(179+130,35+130);
		glVertex2f(178+130,38.5+130);

}
glEnd();
glutPostRedisplay();

}
void cry()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	l+=0.3;
	if(l<25)
	{
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(163,163.5-l);
	glVertex2f(163,162.5-4-l);
	glVertex2f(163.7,163.5-l);
	glVertex2f(163,163.5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(163-1,163.5-5-l);
	glVertex2f(163-1,162.5-4-5-l);
	glVertex2f(163.7-1,163.5-5-l);
	glVertex2f(163-1,163.5-5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(171,163.5-l);
	glVertex2f(171,163.5-5-l);
	glVertex2f(171.7,163.5-l);
	glVertex2f(171,163.5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(171-1,163.5-5-l);
	glVertex2f(171-1,163.5-5-5-l);
	glVertex2f(171.7-1,163.5-5-l);
	glVertex2f(171-1,163.5-5-l);
	glEnd();
}
else
{
l=0;
}
glutPostRedisplay();
}

void leaf()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-60,110,-30,110);
glBegin(GL_POLYGON);
glColor3f(0,1,0);
glVertex2f(27,48-2);
glVertex2f(33,48-2);
glVertex2f(33,40);
glVertex2f(30,37);
glVertex2f(27,40);
glVertex2f(27,48-2);

glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(30,48-2);
glVertex2f(30,37);
glVertex2f(30,39);
glVertex2f(27,42);
glVertex2f(30,39);
glVertex2f(33,42);
glVertex2f(30,39+2);
glVertex2f(27,42+2);
glVertex2f(30,39+2);
glVertex2f(33,42+2);
glVertex2f(30,39+4);
glVertex2f(27,42+4);
glVertex2f(30,39+4);
glVertex2f(33,42+4);
glEnd();
}

void keys1(unsigned char key1,int x,int y)
{
	if(key1=='q')
	{//glutDestroyWindow(1);
	PlaySound(TEXT("1.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page2");
	glutDisplayFunc(mydisplay2);
	myinit1();
	}
	glutMainLoop();

}
void keys2(unsigned char key2,int x,int y)
{
	if(key2=='p')
	{
	//glutDestroyWindow(2);
	PlaySound(TEXT("22.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page3");
	glutDisplayFunc(mydisplaya);
	myinit2();
	}
	glutMainLoop();

}
void keysa(unsigned char keya,int x,int y)
{
	if(keya=='1')
	{
	//glutDestroyWindow(2);
	PlaySound(TEXT("22.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page3");
	glutDisplayFunc(mydisplay3);
	myinit2();
	}
	glutMainLoop();

}
void keys3(unsigned char key3,int x,int y)
{
	if(key3=='r')
	{
//	glutDestroyWindow(3);
	PlaySound(TEXT("3.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page4");
	glutDisplayFunc(mydisplayb);
	}
	myinit2();
	glutMainLoop();

}
void keysb(unsigned char keyb,int x,int y)
{
	if(keyb=='2')
	{
//	glutDestroyWindow(3);
	PlaySound(TEXT("3.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page4");
	glutDisplayFunc(mydisplay4);
	}
	myinit2();
	glutMainLoop();

}
void keys4(unsigned char key4,int x,int y)
{
	if(key4=='s')
	{
	//glutDestroyWindow(4);
	PlaySound(TEXT("4.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page5");
	glutDisplayFunc(mydisplayc);
	myinit2();
	}
	glutMainLoop();

}
void keysc(unsigned char keyc,int x,int y)
{
	if(keyc=='3')
	{
	//glutDestroyWindow(4);
	PlaySound(TEXT("4.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page5");
	glutDisplayFunc(mydisplay5a);
	myinit2();
	}
	glutMainLoop();

}
void keys5a(unsigned char key5a,int x,int y)
{
	if(key5a=='n')
	{
	//glutDestroyWindow(5);
	PlaySound(TEXT("5.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page5");
	glutDisplayFunc(mydisplay5);
	myinit2();
	}
	glutMainLoop();

}
void keys5(unsigned char key5,int x,int y)
{
	if(key5=='j')
	{
	//glutDestroyWindow(5);
	PlaySound(TEXT("5.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page6");
	glutDisplayFunc(mydisplay5b);
	myinit2();
	}
	glutMainLoop();

}
void keys5b(unsigned char key5b,int x,int y)
{
	if(key5b=='t')
	{
	//glutDestroyWindow(5);
	PlaySound(TEXT("5.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page6");
	glutDisplayFunc(mydisplayd);
	myinit2();
	}
	glutMainLoop();

}
void keysd(unsigned char keyd,int x,int y)
{
	if(keyd=='4')
	{
	//glutDestroyWindow(5);
	PlaySound(TEXT("5.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page6");
	glutDisplayFunc(mydisplay6);
	myinit2();
	}
	glutMainLoop();

}
void keys6(unsigned char key6,int x,int y)
{
	if(key6=='u')
	{
	//glutDestroyWindow(6);
	PlaySound(TEXT("6.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page7");
	glutDisplayFunc(mydisplaye);
	myinit2();
	}
	glutMainLoop();

}
void keyse(unsigned char keye,int x,int y)
{
	if(keye=='5')
	{
	//glutDestroyWindow(6);
	PlaySound(TEXT("6.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page7");
	glutDisplayFunc(mydisplay7);
	myinit2();
	}
	glutMainLoop();

}
void keys7(unsigned char key7,int x,int y)
{
	if(key7=='f')
	{
	//glutDestroyWindow(7);
	PlaySound(TEXT("7.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page8");
	glutDisplayFunc(mydisplayf);
	myinit2();
	}
	glutMainLoop();

}

void keysf(unsigned char keyf,int x,int y)
{
	if(keyf=='6')
	{
	//glutDestroyWindow(7);
	PlaySound(TEXT("7.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page8");
	glutDisplayFunc(mydisplay7first);
	myinit2();
	}
	glutMainLoop();

}
void keys7first(unsigned char key7first,int x,int y)
{
	if(key7first=='m')
	{
	//glutDestroyWindow(7);
	PlaySound(TEXT("7.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page8");
	glutDisplayFunc(mydisplay7a);
	myinit2();
	}
	glutMainLoop();

}

void keys7a(unsigned char key7a,int x,int y)
{
	if(key7a=='x')
	{
	//glutDestroyWindow(7);
	PlaySound(TEXT("7.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page8");
	glutDisplayFunc(mydisplayg);
	myinit2();
	}
	glutMainLoop();

}

void keysg(unsigned char keyg,int x,int y)
{
	if(keyg=='7')
	{
	//glutDestroyWindow(7);
	PlaySound(TEXT("7.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page8");
	glutDisplayFunc(mydisplay8);
	myinit2();
	}
	glutMainLoop();

}
void keys8(unsigned char key8,int x,int y)
{
	if(key8=='h')
	{
	//glutDestroyWindow(8);
	PlaySound(TEXT("8.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page9");
	glutDisplayFunc(mydisplay9);
	myinit2();
	}
	glutMainLoop();

}
void keys9(unsigned char key9,int x,int y)
{
	if(key9=='l')
	{
		//glutDestroyWindow(9);
	PlaySound(TEXT("9.wav"),NULL,SND_FILENAME|SND_ASYNC);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutCreateWindow("EKALAYA page10");
	glutDisplayFunc(mydisplay10);
	myinit2();
	}
	glutMainLoop();

}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(3200,1200);
	glutInitWindowPosition(0,0);
	glutCreateWindow("EKALAYA");
	glutDisplayFunc(mydisplay);
	glutKeyboardFunc(keys1);
	myinit();
	glutMainLoop();
}
