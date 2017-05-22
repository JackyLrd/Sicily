#include <stdio.h>
int main(void)
{
	int c[500],m,e,t[500],id[500];
	int n,i,j,k,temp;
	while(scanf("%d",&n))
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d %d %d",&c[i],&m,&e);
			t[i]=c[i]+m+e;
			id[i]=i;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<n;j++)
			{
				if(t[j]<t[j+1])
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
					temp=id[j];
					id[j]=id[j+1];
					id[j+1]=temp;
					temp=c[j];
					c[j]=c[j+1];
					c[j+1]=temp;
				}
				else;
			}
		}
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=4;j++)
			{
				if(t[j]==t[j+1])
				{
					if(c[j]>c[j+1]);
					else if(c[j]<c[j+1])
					{
						temp=t[j];
					    t[j]=t[j+1];
					    t[j+1]=temp;
					    temp=id[j];
					    id[j]=id[j+1];
					    id[j+1]=temp;
					    temp=c[j];
					    c[j]=c[j+1];
					    c[j+1]=temp;
					}
					else
					{
						if(id[j]>id[j+1])
						{
							temp=t[j];
					        t[j]=t[j+1];
					        t[j+1]=temp;
					        temp=id[j];
					        id[j]=id[j+1];
					        id[j+1]=temp;
					        temp=c[j];
					        c[j]=c[j+1];
					        c[j+1]=temp;
						}
						else;
					}
				}
				else;
			}
		}
		for(i=1;i<=5;i++)
		{
            printf("%d %d\n",id[i],t[i]);
		}
		printf("\n");
	}
	return 0;
}
