#include <stdio.h>
int main(void)
{
	int a[40],b,c,i,n;
	scanf("%d",&b);
	n=1;
	while(b!=0)
	{
		a[n]=b%2;
		b=b/2;
		n++;
	}
    for(i=n;i>=1;i--)
	{
	printf("%d ",a[i]);
	}
	return 0;
}
