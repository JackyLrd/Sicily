#include <stdio.h>
void srh(int i,int j);
int count,a[100][100];
int main(void)
{
	int n,m,i,j,k;
	while(scanf("%d %d",&n,&m)&&(m!=0||n!=0))
	{
		count=0;
		for(i=0;i<=m+1;i++)
		{
			for(j=0;j<=n+1;j++)
			{
				a[i][j]=0;
			}
		}
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==1)
				{
					count++;
					srh(i,j);
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
void srh(int i,int j)
{
	a[i][j]=0;
	int m;
	int n;
	for(m=i-1;m<=i+1;m++)
	{
		for(n=j-1;n<=j+1;n++)
		{
			if(a[m][n]!=0)
			{
				srh(m,n);
			}
			else;
		}
	}
}

