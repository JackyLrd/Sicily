#include <stdio.h>
int main(void)
{
	int a[500],b[500],c[500],i,j,k,m,n,jug;
	for(i=2992;i<10000;i++)
	{
		n=i;
		j=0;
		jug=0;
		while(n!=0)
		{
			j++;
			a[j]=n%10;
			n=n/10;
		}
		for(k=1;k<=j;k++)
		{
			jug=jug+a[k];
		}
		n=i;
		j=0;
		m=0;
        while(n!=0)
		{
			j++;
			b[j]=n%12;
			n=n/12;
		}
			for(k=1;k<=j;k++)
		{
			m=m+b[k];
		}
		if(m==jug)
		{
			n=i;
		    j=0;
		    m=0;
            while(n!=0)
		    {
			    j++;
			    c[j]=n%16;
			    n=n/16;
		    }
		    for(k=1;k<=j;k++)
		    {
			    m=m+c[k];
		    }
		    if(m==jug) printf("%d\n",i);
		    else;
		}
		else;
	}
	return 0;
}
