#include <stdio.h>
void fun(int four,int sev,int len,int x);
int c(int q,int y);
int p[500][10];
int k=0;
int main(void)
{
	int i,j;
	for(i=2;i<=8;i+=2)
	{
		fun(i/2,i/2,i,1);
	}
	for(i=0;i<=k;i++)
	{
		for(j=1;j<=8;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void fun(int four,int sev,int len,int x)
{
	int i;
	if(x==len)
	{
		if(four>0) p[k][x]=4;
		else p[k][x]=7;
		k++;
	}
	else
	{
		if(four>0)
		{
			
			for(i=k;i<k+c(four,four+sev-1);i++)
			{
				p[i][x]=4;
			}
			fun(four-1,sev,len,x+1);
		}
		else;
		if(sev>0)
		{
			
			for(i=k;i<k+c(four,four+sev-1);i++)
			{
				p[i][x]=7;
			}
			fun(four,sev-1,len,x+1);
		}
		else;
	}
}
int c(int q,int y)
{
	int ans;
	int i,n=1,m=1;
	for(i=2;i<=q;i++)
	{
		n*=i;
	}
	for(i=2;i<=y;i++)
	{
		m*=i;
	}
	ans=m/n;
	if(ans==0) ans=1;
	return ans;
}
