#include <stdio.h>
#include <memory.h>
int count[1000];
int money[8]={1,5,10,50,100,200,500,1000};
int main(void)
{
	double n;
	int i,j,k,x,y;
	while(scanf("%lf",&n)!=EOF)
	{
		memset(count,0,sizeof(count));
		n*=10;
		x=(int)n;
		count[0]=1;
		for(i=7;i>=0;i--)
			for(j=money[i];j<=n;j++)
				count[j]=count[j]+count[j-money[i]];
		printf("%d\n",count[x]);
	}
	return 0;
}
