#include<graphics.h>
#include<stdio.h>
void draw(int x0,int y0,int x1,int y1)
{
int x,y,dx,dy,p;
dx=(x1-x0);
dy=(y1-y0);
p=2*dy-dx;
x=x0;y=y0;
while(x<x1)
{
if(p>=0)
{
putpixel(x,y,BLUE);
//p=p+2*dy-2*dx;
p=p-2*dx;
y++;
}else
{
putpixel(x,y,BLUE);
p=p+2*dy;
x++;
}
}
}
void main()
{
int gd=DETECT,gm;
int x0,x1,y0,y1;
initgraph(&gd,&gm,"");
printf("ENTER x0,y0\n");
scanf("%d",&x0);
scanf("%d",&y0);
printf("ENTER x1,y1\n");
scanf("%d",&x1);
scanf("%d",&y1);
draw(x0,y0,x1,y1);
getch();
closegraph();
}