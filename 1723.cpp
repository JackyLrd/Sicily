#include <stdio.h>
int main(void)
{
	int a,b,i,max,min;
	while(scanf("%d %d",&a,&b)&&(a!=0||b!=0))
	{
		if(a==b) printf("%d\n",a);
		else
		{
			if(a>b)
			{
				max=a;
				min=b;
			}
			else
			{
				max=b;
				min=a;
			}
			for(i=min;i>=1;i--)
			{
				if(a%i==0&&b%i==0)
				{
					printf("%d\n",i);
					break;
				}
				else;
			}
		}
	}
	return 0;
}
