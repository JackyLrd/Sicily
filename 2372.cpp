#include <stdio.h>
void cou(int n,int x);
long long int count;
int main(void)
{
	int T,n,i,j,k;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&i,&n);
		count=0;
		if(n!=1)
		{
			cou(n,0);
		}
		else count=10;
		printf("%d %lld\n",i,count);
	}
}
void cou(int n,int x)
{
	int i;
	if(n>1)
	{
		for(i=x;i<=9;i++)
		{
			cou(n-1,i);
		}
	}
	else
	{
		for(i=x;i<=9;i++)
		{
			count++;
		}
	}
}
