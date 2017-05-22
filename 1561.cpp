#include <stdio.h>
int main(void)
{
	int a[50000],n,i,j,k,m;
	j=3;
	i=2;
	a[1]=2;
	scanf("%d",&n);
	while(i<=n)
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
	for(i=1;i<=j;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

