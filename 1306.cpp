#include <stdio.h>
void qsort(int l,int r,int str[]);
int main(void)
{
	int n,m,i,j,k;
	while(scanf("%d %d",&n,&m)&&(n!=0||m!=0))
	{
		int str[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&str[i]);
		}
		qsort(0,n-1,str);
		for(i=0;i<n-m;i+=m)
		{
			printf("%d ",str[i]);
		}
		printf("%d",str[i]);
		printf("\n");
	}
	return 0;
}
void qsort(int l,int r,int str[])
{
	if(l<r)
	{
		int key=str[l];
		int i=l;
		int j=r;
		while(i<j)
		{
			while(i<j&&str[j]>=key)
			j--;
			if(i<j)
			{
				str[i]=str[j];
				i++;
			}
			else;
			while(i<j&&str[i]<key)
			i++;
			if(i<j)
			{
				str[j]=str[i];
				j--;
			}
			else;
		}
		str[i]=key;
		qsort(l,i-1,str);
		qsort(i+1,r,str);
	}
	else;
}
