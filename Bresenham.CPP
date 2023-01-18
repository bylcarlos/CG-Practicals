#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int x1,y1,x2,y2,x,y,dx,dy;
 int gd=DETECT, gm, i, d;

 printf("Enter X1, Y1, X2, Y2 : ");
 scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
 dx=(x2-x1);
 dy=(y2-y1);
 d=2*dy-dx;
 i=1;
 x=x1;
 y=y1;

 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 while(i<=dx)
 {
  putpixel(x,y,3);
  if(d<0)
  {
   x=x+1;
   y=y;
   d=d+2*dy;
  }
  else
  {
   x=x+1;
   y=y+1;
   d=d+2*dy-2*dx;
  }
  i++;
 }
 getch();
}
