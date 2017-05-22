#include <stdio.h>
int main(void)
{
	int a[6],b[6],c[6],h,m,s,n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d:%d:%d",&h,&m,&s);
		j=5;
        while(j>=0)
        {
        	a[j]=h%2;
        	h=h/2;
        	j--;
		}
		j=5;
		 while(j>=0)
        {
        	b[j]=m%2;
        	m=m/2;
        	j--;
		}
		j=5;
		 while(j>=0)
        {
        	c[j]=s%2;
        	s=s/2;
        	j--;
		}
		printf("%d ",i);
        for(j=0;j<=5;j++)
        {
        	printf("%d%d%d",a[j],b[j],c[j]);
		}
		printf(" ");
		for(j=0;j<=5;j++)
		{
			printf("%d",a[j]);
		}
		for(j=0;j<=5;j++)
		{
			printf("%d",b[j]);
		}
		for(j=0;j<=5;j++)
		{
			printf("%d",c[j]);
		}
		printf("\n");
	}
	return 0;
}
