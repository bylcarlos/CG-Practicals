#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void ffill(int x, int y, int old, int n)
{
 if(getpixel(x,y)==old)
 {
  putpixel(x,y,n);
  delay(1);
  ffill(x+1,y,old,n);
  ffill(x-1,y,old,n);
  ffill(x,y+1,old,n);
  ffill(x,y-1,old,n);
 }
}

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 rectangle(100,100,150,150);
 ffill(110,110,0,4);
 getch();
}