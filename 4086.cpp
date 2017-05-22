#include <stdio.h>
int main(void)
{
	int a,b,c,T,n,i,j,k,ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&a,&b,&c);
		ans=0;
		for(i=1;i<=15;i++)
		{
			for(j=1;j<=20;j++)
			{
				for(k=1;k<=34;k++)
				{
					if(k*3+a==j*5+b&&k*3+a==i*7+c&&k*3+a<=100&&k*3+a>=10)
					{
					    ans=k*3+a;
					    break;
					}
					else;
				}
				if(ans!=0) break;
			}
			if(ans!=0) break;
		}
		if(ans==0) printf("No answer\n");
		else printf("%d\n",ans);
	}
	return 0;
}
