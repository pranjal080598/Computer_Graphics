#include<graphics.h>
struct cp
{
	int x,y;
	int c[4];
};
void main()
{
	struct cp p1,p2;
	int gdriver = DETECT, gmode, errorcode;
	int s,i,wx1,wy1,wx2,wy2,x=0 ;
	float m;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
	clrscr();
	printf("Enter x1,y1\n");
	scanf("%d %d",&p1.x,&p1.y);
	printf("Enter x2,y2\n");
	scanf("%d %d",&p2.x,&p2.y);
	line(p1.x,p1.y,p2.x,p2.y);
	printf("Enter wx1,wy1\n");
	scanf("%d %d",&wx1,&wy1);
	printf("Enter wx2,wy2\n");
	scanf("%d %d",&wx2,&wy2);
	line(wx1,wy1,wx2,wy1);
	line(wx2,wy1,wx2,wy2);
	line(wx2,wy2,wx1,wy2);
	line(wx1,wy2,wx1,wy1);
	for(i=0;i<4;i++)
	{
		p1.c[i]=0;
		p2.c[i]=0;
	}
      /*	for(i=0;i<4;i++)
	{
		printf("%d",p1.c[i]);
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("%d",p2.c[i]);
	} */

//for(i=0;i<4;i++)
//{
	if(p1.x<wx1)
	{
		p1.c[3]=1;
	}

	else if(p1.x>wx2)
	{
		p1.c[2]=1;
	}
	 if(p1.y > wy2)
	{
		p1.c[1]=1;
	}
	else if(p1.y<wy1)

	{
		p1.c[0]=1;
	}

	if(p2.x<wx1)
	{
		p2.c[3]=1;
	}
	else if(p2.x>wx2)
	{
		p2.c[2]=1;
	}
	 if(p2.y>wy2)
	{
		p2.c[1]=1;
	}
	 else if(p2.y<wy1)
	{
		p2.c[0]=1;
	}
//}
printf("\n");
	for(i=0;i<4;i++)
	{
		printf("%d",p1.c[i]);
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		printf("%d",p2.c[i]);
	}


	for(i=0;i<4;i++)
	{
		if(p1.c[i]==0 && p2.c[i]==0)
		{
			x++;

		}

	}
	if(x==4)
	{
		printf("\nline visible\n");
	}

	m=(p2.y-p1.y)/(p2.x-p1.x);
	if(x!=4)
	{
		if(p1.c[0]==1 && p1.c[1]==0)
		{
			/*p1.x=p1.x+ (wy1-p1.y)/m;  */
			p1.y=wy1;
		}
	       else if(p2.c[0]==1 && p2.c[1]==0)
		{
		       /*	p2.x=p2.x+ (wy1-p2.y)/m;    */
			p2.y=wy1;
		}
		if(p1.c[0]==0 && p1.c[1]==1)
		{
		       /*	p1.x=(wy2-p1.y)/m + p1.x;   */
			p1.y=wy2;
		}
		else if(p2.c[0]==0 && p2.c[1]==1)
		{
		       /*	p2.x=(wy2-p2.y)/m + p2.x; */
			p2.y=wy2;
		}
		if(p1.c[2]==0 && p1.c[3]==1)
		{
		       //	p1.y=(wx1-p1.x)*m + p1.y;
			p1.x=wx1;
		}
		else if(p2.c[2]==0 && p2.c[3]==1)
		{
		       //	p2.y=(wx1-p2.x)*m + p2.y;
			p2.x=wx1;
		}
		if(p1.c[2]==1 && p1.c[3]==0)
		{
			//p1.y=(wx2-p1.x)*m + p1.y;
			p1.x=wx2;
		}
		else if(p2.c[2]==1 && p2.c[3]==0)
		{
			//p2.y=(wx2-p2.x)*m + p2.y;
			p2.x=wx2;
		}
	}
	clrscr();
	line(wx1,wy1,wx2,wy1);
	line(wx2,wy1,wx2,wy2);
	line(wx2,wy2,wx1,wy2);
	line(wx1,wy2,wx1,wy1);
	line(p1.x,p1.y,p2.x,p2.y);
	getch();
	closegraph();
}