#include <stdio.h>
int main(void)
{
	int out[100][100],n,i,j,k,x,y,p,q;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			out[i][j]=0;
		}
	}
	x=1;
	y=1;
	p=1;
	q=1;
	while(p<=2*n-1)
	{
		//printf("%d\n",p);
		if(p%4==1)
		{
			for(i=x,j=y;j<=n;j++,q++)
			{
				//printf("%d %d\n",i,j);
				if(out[i][j]==0)
				out[i][j]=q;
				else
				{
					j--;
					break;
				}
			}
			if(j==n+1) j--;
			y=j;
			x++;
		}
		else if(p%4==2)
		{
			for(i=x,j=y;i<=n;i++,q++)
			{
				//printf("%d %d\n",i,j);
				if(out[i][j]==0)
				out[i][j]=q;
				else
				{
					i--;
					break;
				}
			}
			if(i==n+1) i--;
			x=i;
			y--;
		}
		else if(p%4==3)
		{
			for(i=x,j=y;j>=1;j--,q++)
			{
				//printf("%d %d\n",i,j);
				if(out[i][j]==0)
				out[i][j]=q;
				else
				{
					j++;
					break;
				}
			}
			if(j==0) j++;
			y=j;
			x--;
		}
		else
		{
			for(i=x,j=y;i>=1;i--,q++)
			{
				//printf("%d %d\n",i,j);
				if(out[i][j]==0)
				out[i][j]=q;
				else
				{
					i++;
					break;
				}
			} 
			if(i==0) i++;
			x=i;
			y++;
		}
		p++;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",out[i][1]);
		for(j=2;j<=n;j++)
		{
			printf(" %d",out[i][j]);
		}
		printf("\n");
	}
	return 0;
}
