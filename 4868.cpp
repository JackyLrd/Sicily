#include <stdio.h>
int main(void)
{
	int	n,i,s,j;
	i=1;
	s=0;
	scanf("%d",&n);
	j=n;
    while(n>1)
	{
		i=i*n;
		n--;
	}
    for(j=j;j>=1;j--)
    {
    	s=s+i;
    	i=i/j;
	}
	
	printf("%d",s);
return 0;
}

