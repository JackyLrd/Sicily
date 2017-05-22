#include <stdio.h>
int main(void)
{
	int T,i,j,k,a,b;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d%d",&b,&a);
		for(j=1;j<=a;j++)
		{
			for(k=1;k<=b;k++)
			{
				if(j==1||j==a) printf("*");
				else
				{
					if(k==1||k==b) printf("*");
					else printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
