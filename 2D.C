#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
 float a[5][2], b[5][2], tx, ty, sx, sy, th, xp, yp, shx, shy;
 int gd = DETECT, gm, i;
 printf("Enter X & Y coordinates of Polygon : \n");
 for (i=0; i<4; i++)
 {
  printf("X-coordinate : ");
  scanf("%f", &a[i][0]);
  printf("Y-coordinates : ");
  scanf("%f", &a[i][1]);
 }

 a[4][0] = a[0][0];
 a[4][1] = a[0][1];
 printf("Enter tx and ty value : ");
 scanf("%f%f", &tx, &ty);
 printf("Enter sx and sy value : ");
 scanf("%f%f", &sx, &sy);
 printf("Enter Theta value : ");
 scanf("%f", &th);
 printf("Enter values of xp and yp : ");
 scanf("%f%f", &xp, &yp);
 printf("Enter values of X-Shear factor : ");
 scanf("%f", &shx);
 printf("Enter values of Y-Shear factor : ");
 scanf("%f", &shy);

 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
 for (i=0; i<4; i++)
 line(a[i][0], a[i][1], a[i+1][0], a[i+1][1]);

 // Translation
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0] + tx;
  b[i][1] = a[i][1] + ty;
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 // Scaling
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0]*sx;
  b[i][1] = a[i][1]*sy;
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }


 //Rotation about origin
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0] *cos(th *3.14 / 180) - a[i][1] *sin(th *3.14 / 180);
  b[i][1] = a[i][0] *sin(th *3.14 / 180) + a[i][1] *cos(th *3.14 / 180);
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }
		
 // Rotation about any arbitary point
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0] *cos(th *3.14 / 180) - a[i][1] *sin(th *3.14 / 180) - xp* cos(th *3.14 / 180) + yp* sin(th *3.14 / 180) + xp;
  b[i][1] = a[i][0] *sin(th *3.14 / 180) + a[i][1] *cos(th *3.14 / 180) - xp* sin(th *3.14 / 180) - yp* cos(th *3.14 / 180) + yp;
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 // For X-Shearing
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0] + a[i][1]*shx;
  b[i][1] = a[i][1];
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

 // For Y-Shearing
 for (i=0; i<5; i++)
 {
  b[i][0] = a[i][0];
  b[i][1] = a[i][1] + a[i][0]*shy;
 }

 for (i=0; i<4; i++)
 {
  line(b[i][0], b[i][1], b[i+1][0], b[i+1][1]);
 }

getch();

}
