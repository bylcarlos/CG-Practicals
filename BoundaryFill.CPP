#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void b_fill(int x, int y, int b_col, int new_col)
{
 if (getpixel(x,y) != b_col && getpixel(x,y) != new_col)
 {
  putpixel (x,y,new_col);
  delay(1);
  b_fill(x+1, y, b_col, new_col);
  b_fill(x-1, y, b_col, new_col);
  b_fill(x, y+1, b_col, new_col);
  b_fill(x, y-1, b_col, new_col);
 }
}

void main()
{
 int gd = DETECT, gm;
 initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");
 rectangle (100, 100, 150, 150);
 b_fill (110, 110, 15, 4);
 getch();
}