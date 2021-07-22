#include<iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
	int &gd-DETECT,gm;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	
	rectangle(1,450,620,470);
	
	line(10,450,12,380);
	line(40,450,38,380);
	
	line(9,380,41,380);
	line(9,375,41,375);
	ellipse(10,377,90,270,3,3);
	ellipse(41,378,270,90,3,3);
	line(12,375,14,320);
	line(38,375,36,320);
	//ellipse(25,331,0,360,12,2.5);
	line(11,320,39,320);
	line(11,315,39,315);
	ellipse(11,318,90,270,3,2);
	ellipse(39,318,270,90,3,2);
	
	line(14,315,16,250);
	line(36,315,34,250);
	//ellipse(25,268,0,360,10,4);
	ellipse(25,244,20,200,11,6);
	ellipse(25,245,200,10,11,6);
	
	line(17,239,17,227);
	line(33,239,33,227);
	
	line(472,420,500,420);
	ellipse(472,418,90,270,3,2);
	ellipse(500,418,270,90,3,2);
	
	line(475,415,477,375);
	line(498,415,477,375);
	//ellipse(25,331,0,360,12,2.5);
	line(474,374,499,374);
	line(474,370,499,370);
	ellipse(473,372,90,270,3,2);
	ellipse(499,372,270,90,3,2);
	
	line(495,369,493,340);
	line(476,369,478,340);
	//ellipse(25,269,0,360,10,4);
	ellipse(485,334,20,200,11,6);
	ellipse(485,334,200,10,11,6);
	
	line(478,329,478,317);
	line(492,329,492,317);
	line(496,316,474,316);
	
	ellipse(473,312,90,270,3,3);
	ellipse(495,312,270,90,3,3);
	ellipse(484,309,0,180,10,13);
	//outtextxy(450,459,Draw By ShubhamPandey");
	settextstyle(3,0,7);
	outtextxy(50,50,"TAJ MAHAL");
	
	getch();
	closegraph();
}