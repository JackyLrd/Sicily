#include <stdio.h>  
#include <stdlib.h>   
#include <time.h>
char in; 	
int jug,i,j,k,x,y,dx[5],dy[5],flag=0,flag2=0,snakex[21],snakey[21],foodx,foody,sum=5;
char game[13][13];
void button();											//判断输入 
void move();											//根据判断对蛇进行操作 
void start();				
void check();											//判断是否越界or自吃 
void initialize();										//初始化地图，蛇 
void food(); 											//随机生成事物 
void check_head();										//判断是否吃到食物 
int main(void)
{
	initialize();										//初始化 
	start();
	while(1)											//WHILE not 游戏结束 DO
	{
		button();										//ch＝等待输入
		move();											
		check();
		if(flag==0);
		else break;
		system("cls");									//清屏 
		for(i=0;i<12;i++)								//输出 
		{
			for(j=0;j<12;j++)
			{
				printf("%c",game[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
void button()
{
	scanf("%1s",&in);
	if(in=='a')											//‘A’:左前进一步，break
	{
		jug=1;			
	}
	else if(in=='d')									//‘D’:右前进一步，break
	{
		jug=2;
	}	
	else if(in=='s')									//‘S’:下前进一步，break
	{
		jug=3;
	}
	else if(in=='w')									//‘W’:上前进一步，break
	{
		jug=4;	
	}
	else
	{
		jug=jug;										//什么都不做，蛇按原来方向前进一步 
	}
}
void move()
{
	x=x+dx[jug];
	y=y+dy[jug];
	check_head();
	if(flag2==0)
	{
		game[snakey[21-sum]][snakex[21-sum]]=' ';
	}
	else food();
	for(i=21-sum;i<20;i++)
	{
		snakex[i]=snakex[i+1];
		snakey[i]=snakey[i+1];
	}
	for(i=21-sum;i<20;i++)
	{
		game[snakey[i]][snakex[i]]='X';
	}
	snakex[20]=x;
	snakey[20]=y;
	game[snakey[20]][snakex[20]]='H';
}
void start()
{
	for(i=16;i<=20;i++)
	{
		snakex[i]=i-15;
		snakey[i]=1;
	}
	for(i=16;i<=20;i++)
	{
		game[snakey[i]][snakex[i]]='X';
	}
	snakex[20]=x;
	snakey[20]=y;
	game[snakey[20]][snakex[20]]='H';
	food();
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			printf("%c",game[i][j]);
		}
		printf("\n");
	}
}
void check()
{
	if(x==11||y==0||y==11||x==0) flag=1;
	else;
	for(i=21-sum;i<20;i++)
	{
		if(x==snakex[i]&&y==snakey[i])
		{
			flag=1;
			break;
		}
		else;
	}
}
void initialize()
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
	for(i=0;i<12;i++)
	{
		if(i==0||i==11)
		{
			for(j=0;j<12;j++)
			{
				game[i][j]='*';
			}
		}
		else
		{
			game[i][0]='*';
			game[i][11]='*';
			for(j=1;j<=10;j++)
			{
				game[i][j]=' ';
			}
		}
	}
}
void food()
{
	while(1)
	{
		foodx=rand()%10;
		for(i=21-sum;i<=20;i++)
		{
			if(foodx==snakex[i]) break;
			else;
		}
		if(i==21) break;
		else;
	}
	while(1)
	{
		foody=rand()%10;
		for(i=21-sum;i<=20;i++)
		{
			if(foody==snakey[i]) break;
			else;
		}
		if(i==21) break;
		else;
	}
	game[foody][foodx]='$';
}
void check_head()
{
	if(x==foodx&&y==foody) 
	{
		flag2=1;
		sum++;
	}
	else flag2=0;
}
