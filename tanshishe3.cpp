#include <stdio.h>  
#include <stdlib.h>  
#include <conio.h>  
char in; 	
int jug=2,i,j,k,x,y,dx[5],dy[5],flag=0,snakex[6],snakey[6];
char game[100][100];
void button();
void move();
void start();
void check();
int main(void)
{
	dx[1]=-1;
	dy[1]=0;
	dx[2]=1;
	dy[2]=0;
	dx[3]=0;
	dy[3]=1;
	dx[4]=0;
	dy[4]=-1;
	x=5;
	y=1;
	start();
	getch();
	while(1)
	{
		_sleep(200);
		button();
		move();
		system("cls");	
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=10;j++)
			{
				printf("%c",game[i][j]);
			}
			printf("\n");
		}
		check();
		if(flag==0);
		else break;
	}
	return 0;
}
void button()
{
    if(kbhit()!=0)
    {
    	while(kbhit()!=0)
		{
			in=getch();
		}
		if(in=='a')
		{
			jug=1;			
		}
		else if(in=='d')
		{
			jug=2;
		}	
		else if(in=='s')
		{
			jug=3;
		}
		else
		{
			jug=4;	
		}
	}
}
void move()
{
	x=x+dx[jug];
	y=y+dy[jug];
	game[snakey[1]][snakex[1]]='-';
	for(i=1;i<5;i++)
	{
		snakex[i]=snakex[i+1];
		snakey[i]=snakey[i+1];
	}
	for(i=1;i<5;i++)
	{
		game[snakey[i]][snakex[i]]='X';
	}
	snakex[5]=x;
	snakey[5]=y;
	game[snakey[5]][snakex[5]]='H';
}
void start()
{
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			game[i][j]='-';
		}
	}
	for(i=1;i<=5;i++)
	{
		snakex[i]=i;
		snakey[i]=1;
	}
	for(i=1;i<5;i++)
	{
		game[snakey[i]][snakex[i]]='X';
	}
	game[snakey[5]][snakex[5]]='H';
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%c",game[i][j]);
		}
		printf("\n");
	}
}
void check()
{
	if(x==10||y==0||y==10||x==0) flag=1;
	else;
	for(i=1;i<5;i++)
	{
		if(x==snakex[i]&&y==snakey[i])
		{
			flag=1;
			break;
		}
		else;
	}
}
