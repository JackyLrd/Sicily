#include <stdio.h>
void qsort(int l,int r,int a[]);
int main(void)
{
	int n,i,j,k,p,a[20002],b[20002];
	while(scanf("%d",&n)&&n!=0)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		b[1]=a[1];
		k=1;
        for(i=1;i<=n;i++)
        {
        	p=0;
        	for(j=1;j<=k;j++)
        	{
        		if(a[i]==b[j]) p++;
        		else;
			}
			if(p==0)
			{
				k++;
				b[k]=a[i];
			}
			else;
		}
		printf("%d\n",k);
	}
	return 0;
}
void qsort(int l,int r,int a[])
{
	int i,j;
	int x;
	i=l;
	j=r;
	x=a[i];
	while(i<j)
	{
		while(i<j && a[i]<=a[j])
		j--;
		if(i<j)
		{
			a[i]=a[j];
			i++;
		}
		while(i<j && a[i]>a[j])
		i++;
		if(i<j)
		{
			a[j]=a[i];
			j--;
		}
	}
	a[i]=x;
	qsort(l,i-1,a);
	qsort(i+1;r,a);
}
