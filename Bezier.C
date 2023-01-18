#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void bez(float xa,float ya,float xb,float yb,float xc,float yc,float xd,float yd,int n)
{
 float xab,yab,xbc,ybc,xcd,ycd,xabc,yabc,xbcd,ybcd,xabcd,yabcd;
 xab=(xa+xb)/2;
 yab=(ya+yb)/2;
 xbc=(xb+xc)/2;
 ybc=(yb+yc)/2;
 xcd=(xc+xd)/2;
 ycd=(yc+yd)/2;
 xabc=(xab+xbc)/2;
 yabc=(yab+ybc)/2;
 xbcd=(xbc+xcd)/2;
 ybcd=(ybc+ycd)/2;
 xabcd=(xabc+xbcd)/2;
 yabcd=(yabc+ybcd)/2;
 n--;
 if(n==0)
 {
  line(xa,ya,xb,yb);
  line(xb,yb,xc,yc);
  line(xc,yc,xd,yd);
 }
 else
 {
  bez(xa,ya,xab,yab,xabc,yabc,xabcd,yabcd,n);
  bez(xabcd,yabcd,xbcd,ybcd,xcd,ycd,xd,yd,n);
 }
}

void main()
{
 int gm,gd=DETECT;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 bez(100,100,150,70,180,60,240,90,10);
 getch();
}