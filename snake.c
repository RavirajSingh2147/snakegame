#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void snake();
inr x1=100,x2=110,y1=100;y2=110;
int c;
void main()
{
	int a=DETECT;
	int b;
	inigraph(&a,&b,"");
	do{
		c=getch();
		snake();
	}while(c!=97);
	getch();
}
void snake()
{
	while(kbhit()==0)
	{
	rectangle(x1,y1,x2,y2);
	if(c==77)
	{
		x1+=10;
		x2+=10;
		
	}
	if(c==75)
	{
		x1-=10;
		x2-=10;
		
	}
	if(c==72)
	{
		y1-=10;
		y2-=10;
		
	}
	if(c==80)
	{
		y1+=10;
		y2+=10;
delay(100);
cleardevice();
		
	}
	}
}
