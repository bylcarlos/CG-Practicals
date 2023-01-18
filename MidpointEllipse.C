#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
 float x,y,dx,dy,rx,ry,d1,d2;
 int gd = DETECT, gm;
 printf("Enter RX and RY : ");
 scanf("%f%f", &rx, &ry);

 x=0;
 y=ry;
 dx=2*ry*ry*x;
 dy=2*rx*rx*y;

 d1=ry*ry-rx*rx*ry+rx*rx/4;

 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 while (dx<dy)
 {
  putpixel(x+200,y+200,2);
  putpixel(x+200,-y+200,3);
  putpixel(-x+200,y+200,4);
  putpixel(-x+200,-y+200,5);

  delay(20);

  if(d1<0)
  {
   x=x+1;
   y=y;
   dx=dx+2*ry*ry;
   d1=d1+dx+ry*ry;
  }
  else
  {
   x=x+1;
   y=y-1;
   dx=dx+2*ry*ry;
   dy=dy-2*rx*rx;
   d1=d1+dx-dy+ry*ry;
  }
 }

 d2=(x+0.5)*(x+0.5)*ry*ry+(y-1)*(y-1)*rx*rx-rx*rx*ry*ry;

 while(y>0)
 {
  putpixel(x+200,y+200,2);
  putpixel(x+200,-y+200,3);
  putpixel(-x+200,y+200,4);
  putpixel(-x+200,-y+200,5);

  delay(20);

  if(d2<0)
  {
   x=x+1;
   y=y-1;
   dx=dx+2*ry*ry;
   dy=dy-2*rx*rx;
   d2=d2+dx-dy+rx*rx;
  }
  else
  {
   x=x;
   y=y-1;
   dy=dy-2*rx*rx;
   d2=d2-dy+rx*rx;
 }
}
getch();
}