#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   float rx,ry,x,y,d1,d2,dx,dy;
   printf("\n enter rx and ry \n");
   scanf("%f%f",&rx,&ry);
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");
   x=0;
   y=ry;
   d1=(ry*ry)-(rx*rx*ry)+(0.25*rx*rx);
   dx=(2*ry*ry*x);
   dy=(2*rx*rx*y);
   do
   {
	putpixel(200+x,200+y,15);
	putpixel(200-x,200-y,15);
	putpixel(200+x,200-y,15);
	putpixel(200-x,200+y,15);
	delay(100);
	if(d1<0)
	{
		x=x+1;
		y=y;
		dx=dx+(2*ry*ry);
		d1=d1+dx+(ry*ry);
	}
	else
	{
		x=x+1;
		y=y-1;
		dx=dx+(2*ry*ry);
		dy=dy-(2*rx*rx);
		d1=d1+dx-dy+(ry*ry);
	}
   }while(dx<dy);
   d2=(ry*ry)*((x+0.5)*(x+0.5))+(rx*rx)*((y-1)*(y-1))-((rx*rx)*(ry*ry));
   do
   {
	putpixel(200+x,200+y,15);
	putpixel(200-x,200-y,15);
	putpixel(200+x,200-y,15);
	putpixel(200-x,200+y,15);
	delay(100);
	if(d2>0)
	{
		x=x;
		y=y-1;
		dy=dy-(2*rx*rx);
		d2=d2-dy+(rx*rx);
	}
	else
	{
		x=x+1;
		y=y-1;
		dy=dy-(2*rx*rx);
		dx=dx+(2*ry*ry);
		d2=d2+dx-dy+(rx*rx);
	}
   }
   while(y>0);




   /* clean up */
   getch();
   closegraph();

}

