#include <iostream>
#include <iomanip>
#include<windows.h>
using namespace std;
int map[20][20]={0};
class Ball
{
	public:
		int x;
		int y;
		int dx;
		int dy;
		Ball(int x,int y,int dx,int dy)
		{
			this->x=x;
			this->y=y;
			this->dx=dx;
			this->dy=dy;
		}
		void hit()
		{
			if(x<=1||x>=8)
				dx=-dx;
			if(y<=1||y>=12)
				dy=-dy;
			x+=dx;
			y+=dy;
		}
};
void show()
{
	Ball ball(4,4,1,1);
	while(true)
	{
		for(int i=0;i<20;i++)
		{
			for(int j=0;j<20;j++)
			{
				map[i][j]=1;
			}
		}
		map[ball.y][ball.x]=3;
		for(int i=0;i<=14;i++)
		{
			cout<<setw(2);
			for(int j=0;j<=10;j++)
			{	
			//	cout<<setw(2);
				if(i==0)
				{
					if(j==0||j==1||j==10)
						cout<<" ";
					else
						cout<<j-1;
				}
				else if(i==1||i==14)
				{
					if(j==0)
						cout<<" ";
					else
						cout<<"-";
				}
				else
				{
					if(j==0)
						cout<<i-1;
					else if(j==1||j==10)
						cout<<"|";
					else
					{
						if(map[i-1][j-1]==1)
							cout<<" ";
						else if(map[i-1][j-1]==3)
							cout<<"o";
						else
							cout<<"0"; 
					}
				}
			}
			cout<<endl;
		}
		map[ball.y][ball.x]=1;
		ball.hit();
		//system("pause");
		Sleep(50);
		system("cls");	
	}
}
int main()
{
	show();
}
