#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
	int x1,y1,x2,y2,x3,y3,gm,gd,a,b,c,d,e,f,ty,tx,th;
	clrscr();
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	printf("enter x1,y1=");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter x2,y2=");
	scanf("%d%d",&x2,&y2);
	printf("\nEnter x3,y3=");
	scanf("%d%d",&x3,&y3);
	delay(100);
	line(x1,y1,x2,y2);
	line(x1,y1,x3,y3);
	line(x2,y2,x3,y3);
	printf("Enter the theta value to rotate the triangle:");
	scanf("%d",&th);
	a=(x1*cos(th))-(y1*sin(th));
	b=(x1*sin(th))+(y1*cos(th));
	c=(x2*cos(th))-(y2*sin(th));
	d=(x2*sin(th))+(y2*cos(th));
	e=(x3*cos(th))-(y3*sin(th));
	f=(x3*sin(th))+(y3*cos(th));
	delay(100);
	line(a,b,c,d);
	line(a,b,e,f);
	line(c,d,e,f);
	getch();
	closegraph();
}