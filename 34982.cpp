#include <stdio.h>
int main(void)
{
	int n,i,j,k,a[500],m,p;
	scanf("%d",&n);
	p=1;
	while(n!=0)
	{
		k=n;
		i=2;
		while(k==n)
		{
			if(n%i==0) 
			{
				m=1;
				for(j=2;j<=i;j++)
				{
					if(i%j==0 && i!=2) m++;
					else m=m;
				}
				if(m==1)
				{
					a[p]=i;
					p=p+1;
					n=n/i;
				}
				else;
			}
			else i++;
		}
		printf("%d\n",a[p]);
	}
	return 0;
}
