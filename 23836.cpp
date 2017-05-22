#include <stdio.h>
int main(void)
{
	int m,n,i,a,b,ans;
	a=1;
	b=1;
	scanf("%d%d",&n,&m);
	while(n!=0 || m!=0)
	{
	    i=m;
    	while(i>0)
		{
			a=a*n;
			n--;
			i--;
		 } 
		while(m>0)
		{
			b=b*m;
			m--;
		 } 
		 ans=a/b;
         printf("%d\n",ans);
         a=1;
         b=1;
         scanf("%d%d",&n,&m);
    }
		 return 0;
}
