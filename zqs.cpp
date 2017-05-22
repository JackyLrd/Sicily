#include <stdio.h>
#include <memory.h>
int main(void)
{
	int a[500][500],out[1000],ans[1000],n,m,i,j,k,p,l,temp;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	k=0;
    for(i=1;i<=2*n-1;i++)
    {
    	for(j=i,m=1;j>=1;j--,m++)
    	{
    		if(j<=n&&m<=n)
    		{
    			k++;
    		    out[k]=a[j][m];	
			}
		}
	}
	l=0;
	m=1;
	p=1;
	while(i<=n*n)
	{
		if(m<=n*(n+1)/2)
	    {
	    	l++;
	    	if(p%2==1);
	    	else
	    	{
	    		for(i=m,k=m+l-1;i<m+l/2;i++,k--)
	            {
		            temp=out[i];
		            out[i]=out[k];
		            out[k]=temp;
		        }
			}
	        m=m+l;
		}
		else
		{
			l--;
			if(p%2==1);
			else
			{
				for(i=m,k=m+l-1;i<m+l/2;i++,k--)
			    {
				    temp=out[i];
		            out[i]=out[k];
		            out[k]=temp;
			    }
			}
			m=m+l;
		}
		p++;
	}
	for(i=1;i<=n*n;i++)
	{
		printf("%d ",out[i]);
	}
	return 0;
}

