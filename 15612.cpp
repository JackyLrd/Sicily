#include <stdio.h>
int main(void)
{
	int a[50000],n,i,j,k,m;
	j=3;
	i=2;
	a[1]=2;
	while(i<=10000)
	{
		m=1;
		for(k=2;k<j;k++)
		{
			if(j%k==0)
			{
			m++;	
			}
			else m=m;
		}
		if(m==1)
		{
			a[i]=j;
			i++;
		}
		else;
		j++;
	}
	scanf("%d",&n);
    while(n!=1)
    {
    	k=n;
    	i=1;
    	while(n==k)
    	{
    		if(n%a[i]==0)
    		{
    			n=n/a[i];
    			printf("%d\n",a[i]);
			}
			else;
			i++;
		}
	}
	return 0;
}
