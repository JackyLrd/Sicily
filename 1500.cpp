#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,j,k,p,q,max,min;
	scanf("%d",&n);
	while(n!=0)
	{
		q=n;
		k=0;
		i=sqrt(n);
		max=0;
		min=0;
		p=0;
		for(j=1;j<=i;j++)
		{
			if(n%j==0) k++;
			else;
		}
		if(k==1) max=min=0;
		else
		{
			n=n+1;
			while(max==0)
			{
				p=0;
				i=sqrt(n);
				for(j=1;j<=i;j++)
				{
					if(n%j==0) p++;
					else;
				}
				if(p==1) max=n;
				else n++;
			}
			n=q-1;
			while(min==0)
			{
				p=0;
				i=sqrt(n);
				for(j=1;j<=i;j++)
				{
					if(n%j==0) p++;
					else; 
				}
				if(p==1) min=n;
				else n--;
			}
		}
		printf("%d\n",max-min);
		scanf("%d",&n); 
	}
	return 0;
}
