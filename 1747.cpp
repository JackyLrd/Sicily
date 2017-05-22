#include <stdio.h>
void qsort(int l,int r,int str[],int str2[]);
int main(void)
{
	int T,n,i,m,a[100001],b[100001];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&m,&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		qsort(1,n,b,a);
		a[0]=0;
		b[0]=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]>m)
			{
				m=-1;
				printf("No\n");
				break;
			}
			else
			{
				m-=b[i];
			}
		}
		if(m>=0) printf("Yes\n");
	}
	return 0;
}
void qsort(int l,int r,int str[],int str2[])
{
	if(l<r)
	{
		int i=l;
		int j=r;
	    int x=str[l];
	    int x2=str2[l];
	    while(i<j)
	    {
		    while(i<j && x<=str[j])
		    j--;
		    if(i<j)
		    {
			    str[i]=str[j];
			    str2[i]=str2[j];
			    i++;
		    }
		    else;
		    while(i<j && x>str[i])
		    i++;
		    if(i<j)
		    {
			    str[j]=str[i];
			    str2[j]=str2[i];
			    j--;
		    }
		    else;
	    }
	    str[i]=x;
	    str2[i]=x2;
	    qsort(l,i-1,str,str2);
	    qsort(i+1,r,str,str2);
	}
	else;
}
