#include <stdio.h>
#include <memory.h>
int main(void)
{
	int T,n,i,j,k,m,out[20];
	scanf("%d",&T);
	while(T--)
	{
		memset(out,0,sizeof(out));
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			m=i;
			while(m!=0)
			{
				out[m%10]++;
				m=m/10;
			}
		}
		for(i=0;i<=9;i++)
		{
			if(i!=9) printf("%d ",out[i]);
			else printf("%d\n",out[i]);
		}
	}
	return 0;
}
