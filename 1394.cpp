#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,n,i,j,k;
	while(scanf("%d %d",&b,&n)&&(b!=0||n!=0))
	{
		a=0;
		for(i=1;i<=b;i++)
		{
			if(pow(i,n)<=b&&pow(i+1,n)>=b)
			{
				if(b-pow(i,n)<=pow(i+1,n)-b)
				{
					a=i;
					break;
				}
				else
				{
					a=i+1;
					break;
				}
			}
			else;
		}
		printf("%d\n",a);
	}
	return 0;
}
