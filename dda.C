#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void dda(int x0, int y0, int x1, int y1)
{
     float x, y,dx,dy,steps;
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
putpixel(x, y,BLUE);
x += dx;
y += dy;
i=i+1;
    }
}


void main()
{
    int gd = DETECT ,gm, i;
     clrscr();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    dda(40,20,20,60);
    dda(40,20,60,60);
    dda(30,40,50,40);
    dda(80,20,120,20);
    dda(100,20,100,60);
    dda(80,60,100,60);
    dda(140,20,120,60);
    dda(140,20,160,60);
    dda(130,40,150,40);
    dda(200,20,200,60);
    dda(180,20,200,40);
    getch();
    closegraph();
}