#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void  main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int a[7][5]={{1,1,1,1,1},{0,0,0,0,1},{0,0,0,1,0},{0,0,1,0,0},{0,1,0,0,0},
   {1,0,0,0,0},{1,1,1,1,1}},i,j;



   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /*a[0][0]=1;
   a[0][1]=1;
   a[0][2]=1;
   a[0][3]=1;
   a[0][4]=1;
   a[1][0]=0;
   a[1][1]=0;
   a[1][2]=0;
   a[1][3]=0;
   a[1][4]=1;
   a[2][0]=0;
   a[2][1]=0;
   a[2][2]=0;
   a[2][3]=1;
   a[2][4]=0;
   a[3][0]=0;
   a[3][1]=0;
   a[3][2]=1;
   a[3][3]=0;
   a[3][4]=0;
   a[4][0]=0;
   a[4][1]=1;
   a[4][2]=0;
   a[4][3]=0;
   a[4][4]=0;
   a[5][0]=1;
   a[5][1]=0;
   a[5][2]=0;
   a[5][3]=0;
   a[5][4]=0;
   a[6][0]=1;
   a[6][1]=1;
   a[6][2]=1;
   a[6][3]=1;
   a[6][4]=1;*/
   for(i=0;i<7;i++)
   {
	for(j=0;j<5;j++)
	{
		if(a[i][j]==1)
		{
			putpixel(200+j,200+i,15);
		}
	}
   }


   getch();
   closegraph();

}


