#include <stdio.h>  
#include <stdlib.h>   
#include <time.h>
#include <math.h>
char in; 	
int jug=0,i,j,k,x,y,dx[5],dy[5],flag=0,flag2=0,flag3=0,snakex[21],snakey[21],foodx,foody,sum=5;
char game[13][13];
void button();											//�ж����� 
void move();											//�����ж϶��߽��в��� 				
void check();											//�ж��Ƿ�Խ��or�Գ� 
void initialize();										//��ʼ����ͼ���� 
void food(); 											//����������� 
void obstacle(); 
void check_head();										//�ж��Ƿ�Ե�ʳ�� 
void ai();												//�Զ���ʳ�� 
void aicheck(int z);									//���ѡ��ĺ��� 
int main(void)
{
	initialize();										//��ʼ�� 
	while(1)											//WHILE not ��Ϸ���� DO
	{
		_sleep(200);
//		button();										//ch���ȴ�����
		ai();
		move();											
		check();
		if(flag==0);
		else break;
		system("cls");									//���� 
		for(i=0;i<12;i++)								//��� 
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
	if(in=='a')											//��A��:��ǰ��һ����break
	{
		jug=1;			
	}
	else if(in=='d')									//��D��:��ǰ��һ����break
	{
		jug=2;
	}	
	else if(in=='s')									//��S��:��ǰ��һ����break
	{
		jug=3;
	}
	else if(in=='w')									//��W��:��ǰ��һ����break
	{
		jug=4;	
	}
	else
	{
		jug=jug;										//ʲô���������߰�ԭ������ǰ��һ�� 
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
void check()
{
	if(x==11||y==0||y==11||x==0) flag=1;
	else
	{
		for(i=21-sum;i<20;i++)
		{
			if(x==snakex[i]&&y==snakey[i])
			{
				flag=1;
				break;
			}
			else;
		}
		if(flag==1);
		else
		{
			if(x==8||x==3||x==5)
			{
				if(y==5||y==2||y==9) flag=1;
				else;
			}
			else;
		}
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
	game[5][8]='-';										//�ϰ����� 
	game[9][3]='-';
	game[2][5]='-';
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
void food()
{
	while(1)
	{
		foodx=rand()%10;
		if(foodx==8||foodx==3||foodx==5) continue;
		else
		{
			for(i=21-sum;i<=20;i++)
			{
				if(foodx==snakex[i]) break;
				else;
			}
			if(i==21) break;
			else;
		}
	}
	while(1)
	{
		foody=rand()%10;
		if(foody==5||foody==9||foody==2) continue;
		else
		{
			for(i=21-sum;i<=20;i++)
			{
				if(foody==snakey[i]) break;
				else;
			}
			if(i==21) break;
			else;
		}
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
void ai()
{
	int dis[4];										//������ distance[3]={0,0,0,0} ��¼��ʳ��ľ���
	int min=999;
	dis[0]=abs(x-1-foodx)+abs(y-foody);				//�ֱ������ͷ�ܱ��ĸ�λ�õ�ʳ��ľ��롣H ͷ��λ�ã�F ʳ��λ��
	dis[1]=abs(x+1-foodx)+abs(y-foody);
	dis[2]=abs(x-foodx)+abs(y+1-foody);
	dis[3]=abs(x-foodx)+abs(y-1-foody);
	while(1)
	{
		flag3=0;
		for(k=0;k<4;k++)
		{
			min=min<dis[k]?min:dis[k];				//ѡ�� distance �д���С������±� p��ע����С���벻���� 9999
		}
		for(k=0;k<4;k++)
		{
			if(min==dis[k]) break;				
			else;
		}
		aicheck(k);
		if(flag3==0)								//�����ȷ����������һ��������ѡ��һ��������С��ѡ����� 
		{
			jug=k+1;
			break;
		}
		else
		{
			dis[k]=1000;
			min=999;
		}
	}
}
void aicheck(int z)									//��鵱ǰѡ���Ƿ���ȷ(�Գԣ��ߵ��߽�,ײ���ϰ��ﶼ�ǲ��е�) 
{
	if(z==0)
	{
		if(x-1==0) flag3=1;
		else
		{
			flag3=0;
			for(i=21-sum;i<20;i++)
			{
				if(x-1==snakex[i]&&y==snakey[i])
				{
					flag3=1;
					break;
				}
				else;
			}
			if(flag3==1);
			else
			{
				if((x-1==8&&y==5)||(x-1==3&&y==2)||(x-1==5&&y==9)) flag3=1;
				else;
			}
		}
	}
	else if(z==1)
	{
		if(x+1==11) flag3=1;
		else
		{
			flag3=0;
			for(i=21-sum;i<20;i++)
			{
				if(x+1==snakex[i]&&y==snakey[i])
				{
					flag3=1;
					break;
				}
				else;
			}
			if(flag3==1);
			else
			{
				if((x+1==8&&y==5)||(x+1==3&&y==2)||(x+1==5&&y==9)) flag3=1;
				else;
			}
		}
	}
	else if(z==2)
	{
		if(y+1==11) flag3=1;
		else
		{
			flag3=0;
			for(i=21-sum;i<20;i++)
			{
				if(x==snakex[i]&&y+1==snakey[i])
				{
					flag3=1;
					break;
				}
				else;
			}
			if(flag3==1);
			else
			{
				if((x==8&&y+1==5)||(x==3&&y+1==2)||(x==5&&y+1==9)) flag3=1;
				else;
			}
		}
	}
	else
	{
		if(y-1==0) flag3=1;
		else
		{
			flag3=0;
			for(i=21-sum;i<20;i++)
			{
				if(x==snakex[i]&&y-1==snakey[i])
				{
					flag3=1;
					break;
				}
				else;
			}
			if(flag3==1);
			else
			{
				if((x==8&&y-1==5)||(x==3&&y-1==2)||(x==5&&y-1==9)) flag3=1;
				else;
			}
		}
	}
	
}
