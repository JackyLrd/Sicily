#include <stdio.h>
void qsort(int l,int r,int str[]);
int main(void)
{
	int str[500],n,i,j,k,T,ans;
	scanf("%d",&T);
	while(T--)
	{
		ans=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&str[i]);
		}
		qsort(1,n,str);
		for(i=1;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				for(k=j+1;k<=n;k++)
				{
					if(str[i]+str[j]>str[k]&&str[i]+str[k]>str[j]&&str[k]+str[j]>str[i])
					{
						ans++;
					}
					else;
				}
			}
		}
		printf("%d\n",ans);
	}
}
void qsort(int l,int r,int str[])
{
	if(l<r)
	{
		int i=l;
		int j=r;
	    int x=str[l];
	    while(i<j)
	    {
		    while(i<j && x<=str[j])
		    j--;
		    if(i<j)
		    {
			    str[i]=str[j];
			    i++;
		    }
		    else;
		    while(i<j && x>str[i])
		    i++;
		    if(i<j)
		    {
			    str[j]=str[i];
			    j--;
		    }
		    else;
	    }
	    str[i]=x;
	    qsort(l,i-1,str);
	    qsort(i+1,r,str);
	}
	else;
}
