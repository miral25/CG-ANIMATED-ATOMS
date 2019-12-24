#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void amplification();
void stimulator();

void main()
{
   int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   amplification();
   stimulator();
   getch();
   closegraph();
}

void amplification()
{
    setbkcolor(BLACK); //Background color
	
    setcolor(WHITE);
    circle(170,230,8);

    setfillstyle(1,YELLOW);
    floodfill(170,230,WHITE);
    setcolor(GREEN);
    settextstyle(11,0,2);
    outtextxy(150,250,"ATOM");
    delay(100);

    settextstyle(7,0,4);
    setcolor(WHITE);
    outtextxy(110,380,"Amplification of Atoms");
    delay(1000);

    setcolor(WHITE);
    circle(250,180,8);     //SECOND_UP
    circle(250,280,8);
    floodfill(250,180,WHITE);
    floodfill(250,280,WHITE);
    delay(500);

    circle(330,120,8);     //THIRD_UP
    circle(330,195,8);

    circle(330,265,8);
    circle(330,340,8);     //THIRD_DOWN

    floodfill(330,120,WHITE);
    floodfill(330,195,WHITE);
    floodfill(330,265,WHITE);
    floodfill(330,340,WHITE);
    delay(500);

    circle(410,80,8);
    circle(410,125,8);
    circle(410,165,8);
    circle(410,210,8);

    circle(410,245,8);
    circle(410,285,8);
    circle(410,325,8);
    circle(410,370,8);

    floodfill(410,80,WHITE);
    floodfill(410,125,WHITE);
    floodfill(410,165,WHITE);
    floodfill(410,210,WHITE);
    floodfill(410,245,WHITE);
    floodfill(410,285,WHITE);
    floodfill(410,325,WHITE);
    floodfill(410,370,WHITE);

    delay(2000);
    cleardevice();
}

void stimulator()
{
    setbkcolor(BLACK); // Background color
	
	setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(100,50,"Stimulation of ATOM to Release Photons");
	
    setcolor(WHITE);
    setfillstyle(1,RED);        // ATOM
    circle(310,230,30);
    floodfill(310,230,WHITE);
    setcolor(YELLOW);
    settextstyle(11,0,2);
    outtextxy(296,270,"ATOM");

    setcolor(WHITE);
    setfillstyle(1,GREEN);     // PHOTON
    circle(190,110,5);
    floodfill(190,110,WHITE);
    setcolor(GREEN);
    //outtextxy(170,120,"PHOTON");
    delay(1500);
    //setcolor(GREEN);
    //outtextxy(170,120,"PHOTON");

    setfillstyle(1,BLACK);
    floodfill(190,110,WHITE);
    setcolor(BLACK);
    circle(190,110,5);

    setcolor(WHITE);
    circle(210,130,5);
    setfillstyle(1,GREEN);
    floodfill(210,130,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(210,130,WHITE);
    setcolor(BLACK);
    circle(210,130,5);

    setcolor(WHITE);
    circle(230,150,5);
    setfillstyle(1,GREEN);
    floodfill(230,150,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(230,150,WHITE);
    setcolor(BLACK);
    circle(230,150,5);

    setcolor(WHITE);
    circle(250,170,5);
    setfillstyle(1,GREEN);
    floodfill(250,170,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(250,170,WHITE);
    setcolor(BLACK);
    circle(250,170,5);

    setcolor(WHITE);
    circle(270,190,5);
    setfillstyle(1,GREEN);
    floodfill(270,190,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(270,190,WHITE);
    setcolor(BLACK);
    circle(270,190,5);

    setcolor(WHITE);
    circle(295,215,5);
    setfillstyle(1,GREEN);
    floodfill(295,215,WHITE);
    delay(300);
    setfillstyle(1,RED);
    floodfill(295,215,WHITE);
    setcolor(RED);
    circle(295,215,5);

    setcolor(WHITE);
    setfillstyle(1,YELLOW);        // ATOM
    circle(310,230,30);
    floodfill(310,230,WHITE);
    
    setcolor(WHITE);
    delay(300);
    setfillstyle(1,RED);        // ATOM
    circle(310,230,30);
    floodfill(310,230,WHITE);

    setcolor(WHITE);
    circle(346,225,5);
    setfillstyle(1,GREEN);
    floodfill(346,225,WHITE);
    circle(346,235,5);
    floodfill(346,235,WHITE);
    delay(800);
    setfillstyle(1,BLACK);
    floodfill(346,225,WHITE);
    floodfill(346,235,WHITE);
    setcolor(BLACK);
    circle(346,225,5);
    circle(346,235,5);

    setcolor(WHITE);
    circle(365,205,5);
    setfillstyle(1,GREEN);
    floodfill(365,205,WHITE);
    circle(365,255,5);
    floodfill(365,255,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(365,205,WHITE);
    floodfill(365,255,WHITE);
    setcolor(BLACK);
    circle(365,205,5);
    circle(365,255,5);

    setcolor(WHITE);
    circle(385,185,5);
    setfillstyle(1,GREEN);
    floodfill(385,185,WHITE);
    circle(385,275,5);
    floodfill(385,275,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(385,185,WHITE);
    floodfill(385,275,WHITE);
    setcolor(BLACK);
    circle(385,185,5);
    circle(385,275,5);

    setcolor(WHITE);
    circle(405,165,5);
    setfillstyle(1,GREEN);
    floodfill(405,165,WHITE);
    circle(405,295,5);
    floodfill(405,295,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(405,165,WHITE);
    floodfill(405,295,WHITE);
    setcolor(BLACK);
    circle(405,165,5);
    circle(405,295,5);

    setcolor(WHITE);
    circle(425,145,5);
    setfillstyle(1,GREEN);
    floodfill(425,145,WHITE);
    circle(425,315,5);
    floodfill(425,315,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(425,145,WHITE);
    floodfill(425,315,WHITE);
    setcolor(BLACK);
    circle(425,145,5);
    circle(425,315,5);

	setcolor(WHITE);
    circle(445,125,5);
    setfillstyle(1,GREEN);
    floodfill(445,125,WHITE);
    circle(445,335,5);
    floodfill(445,335,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(445,125,WHITE);
    floodfill(445,335,WHITE);
    setcolor(BLACK);
    circle(445,125,5);
    circle(445,335,5);

    setcolor(WHITE);
    circle(465,105,5);
    setfillstyle(1,GREEN);
    floodfill(465,105,WHITE);
    circle(465,355,5);
    floodfill(465,355,WHITE);
    delay(300);
    setfillstyle(1,BLACK);
    floodfill(465,105,WHITE);
    floodfill(465,355,WHITE);
    setcolor(BLACK);
    circle(465,105,5);
    circle(465,355,5);

    setcolor(WHITE);
    circle(485,95,5);
    setfillstyle(1,GREEN);
    floodfill(485,95,WHITE);
    circle(485,375,5);
    floodfill(485,375,WHITE);
    circle(190,110,5);
    floodfill(190,110,WHITE);
    setcolor(YELLOW);
    settextstyle(11,0,2);
    outtextxy(170,120,"PHOTON");
    outtextxy(465,110,"PHOTON");
    outtextxy(465,390,"PHOTON");

    delay(1000);
}
