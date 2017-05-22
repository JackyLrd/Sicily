#include <stdio.h>
int check(int x,int y);
int main(void)
{
	int n,i,j,k,a,b,c,d,x,y,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=0;
		x=0;
		y=0;
		k=0;
		scanf("%d%d%d%d",&a,&b,&c,&d);
	    if((a*d+b*c)==b*d)
	    {
	    	ans=1;
	    	printf("%d\n",ans);
		}
		else if(a*d+b*c==0)
		{
			ans=0;
			printf("%d\n",ans);
		}
		else
		{
			if((a*d+b*c)>b*d)
	        {
	    	    x=a*d+b*c;
	    	    y=b*d;
	    	    k=0;
		    }
		    else
		    {
			    y=a*d+b*c;
	    	    x=b*d;
	    	    k=1;
		    }
		    while(ans==0)
		    {
			    for(j=2;j<=y;j++)
			    {
				    if(x%j==0&&y%j==0)
				    {
					    x=x/j;
					    y=y/j;
					    break;
				    }
				    else; 
			    }
			    ans=check(x,y);
		    }
		    if(k==1&&x!=1) printf("%d/%d\n",y,x);
		    else if(k==1&&x==1)printf("%d\n",y);
		    else if(k==0&&y!=1) printf("%d/%d\n",x,y);
		    else printf("%d\n",x);
		}
	}
	return 0;
}
int check(int x,int y)
{
	int i,m,n;
	m=0;
	for(i=1;i<=y;i++)
	{
		if(x%i==0&&y%i==0) m++;
		else;
	}
	if(m==1) n=1;
	else n=0;
	return n;
}
