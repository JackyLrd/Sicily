#include <stdio.h>
int main(void)
{
	int p,a,b,i,j,k,ans1,ans2,m,n;;
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		ans1=0;
		ans2=0;
		j=1;
		k=1;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			m=a;
			n=b;
		}
		else
		{
			m=b;
			n=a;
		}
//		while(ans1==0 && j<=n)
	    {
//	    	k=1;
	//    	while(ans1==0 && k<=m)
	    	{
//	    		if(m*j==n*k) ans1=m*j;
//	    		else k++;
			}
//			j++;
		}
		j=n;
		while(ans2==0 && j>0)
		{
			if(m%j==0&&n%j==0) ans2=j;
			else if(j==1) ans2=j;
			else j--;
		}
		printf("%d\n",ans2);
//		printf("%d %d %d\n",i,ans1,ans2);
	}
	return 0;
}
