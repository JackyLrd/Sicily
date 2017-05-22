#include <stdio.h>
int l[500001],r[500001];
int main(void)
{
	int T,n,m,i,j,k,x,y,ins;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
		{
			l[i]=i-1;
			r[i]=i+1;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d %d %d",&ins,&x,&y);
			if(ins==1)
			{
				r[l[x]]=r[x];
				l[r[x]]=l[x];
				l[x]=l[y];
				r[x]=y;
				r[l[y]]=x;
				l[y]=x;
			}
			else
			{
				r[l[x]]=r[x];
				l[r[x]]=l[x];
				l[x]=y;
				r[x]=r[y];
				l[r[y]]=x;
				r[y]=x;
			}
		}
		k=0;
		while(n--)
		{
			printf("%d ",r[k]);
			k=r[k];
		}
		printf("\n");
	}
	return 0;
}
