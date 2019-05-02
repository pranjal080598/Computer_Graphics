#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int gd,gm;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\tc\bgi");
	getch();
	closegraph();
}