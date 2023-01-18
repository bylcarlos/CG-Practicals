#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 float x1,y1,x2,y2,x,y,dx,dy;
 int gd=DETECT, gm, len, i;

 printf("Enter (X1,Y1) and (X2,Y2) : ");
 scanf("%f%f%f%f", &x1,&y1,&x2,&y2);

 dx=abs(x2-x1);
 dy=abs(y2-y1);

 if(dx>dy)
 {
  len=dx;
 }
 else
 {
  len=dy;
 }
 dx=(x2-x1)/len;
 dy=(y2-y1)/len;
 i=1;
 x=x1;
 y=y1;

 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 while (i<=len)
 {
  putpixel(x,y,4);
  x=x+dx;
  y=y+dy;
  i++;
 }
 getch();
}