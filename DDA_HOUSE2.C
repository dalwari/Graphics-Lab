#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void dda(int x0,int y0,int x1,int y1,char C)
{
	float x,y,dx,dy,steps;
	int i;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
	   {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
	putpixel(x, y,C);
	x += dx;
	y += dy;
	i=i+1;
    }
}
void main()
{
    int gd = DETECT ,gm, i,k;
    //float x, y,dx,dy,steps;
    //x0, x1, y0, y1;
    clrscr();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
   // dda(40,20,20,60);
    dda(10,40,40,20,RED);
    dda(10,40,10,50,RED);
    dda(10,50,40,30,RED);
   dda(40,20,40,30,RED);
    //----------------------------
    dda(40,20,80,40,GREEN);
    dda(80,40,80,50,GREEN);
    dda(40,30,80,50,GREEN);
   //---------------------------------
    dda(20,45,20,80,GREEN);
    dda(70,45,70,80,GREEN);
    dda(20,80,70,80,GREEN);
    //---------------------------------
    dda(40,70,50,70,BLUE);
    dda(40,70,40,80,BLUE);
    dda(50,70,50,80,BLUE);
    //-------------------------------------
    dda(40,50,50,50,BROWN);
    dda(40,60,50,60,BROWN);
    dda(40,55,50,55,BROWN);
    dda(45,50,45,60,BROWN);
    dda(40,50,40,60,BROWN);
    dda(50,50,50,60,BROWN);
    //--------------------------------------------
    dda(67,20,75,20,BLUE);
    for(k=1;k<=5;++k)
    {
    dda(67,20+k,75,20+k,BLUE);
    }
   // dda(67,25,75,25);
    dda(67,20,67,33,BLUE);
    dda(75,20,75,38,BLUE);
    //--------------------------------------------------
    dda(55,60,65,60,RED);
    dda(55,70,65,70,RED);
    dda(55,65,65,65,RED);
    dda(55,60,55,70,RED);
    dda(65,60,65,70,RED);
    dda(60,60,60,70,RED);
    //------------------------------------------------------
    dda(24,60,38,60,GREEN);
    dda(24,65,38,65,GREEN);
    dda(24,70,38,70,GREEN);
    dda(24,60,24,70,GREEN);
    dda(38,60,38,70,GREEN);
    dda(31,60,31,70,GREEN);
    //----------------------------------
    dda(42,74,44,74,RED);
    dda(42,76,44,76,RED);
    dda(42,74,42,76,RED);
    dda(44,74,44,76,RED);

    getch();
    closegraph();
}
//dda(10,20,20,10)
//dda(10,20,10,25)
//dda(20,10,10,15)
//dda(10,25,10,15)
