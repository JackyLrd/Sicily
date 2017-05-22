#include <stdio.h>
int main(void)
{
	int T,m,n,i,j,k;
	double ans[500],a[500][500],max[500],min[500];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
	    for(i=1;i<=n;i++)
	    {
		    for(j=1;j<=m;j++)
		    {
			    scanf("%lf",&a[i][j]);
		    }
	    }
	    for(i=1;i<=m;i++)
	    {
	    	ans[i]=0;
	    	max[i]=0;
	    	min[i]=100;
		    for(j=1;j<=n;j++)
		    { 
			    ans[i]=ans[i]+a[j][i];
			    if(a[j][i]>max[i]) max[i]=a[j][i];
			    else;
			    if(a[j][i]<min[i]) min[i]=a[j][i];
		 	    else;
		    }
		    ans[i]=ans[i]-max[i]-min[i];
		    ans[i]=ans[i]/(n-2);
	    }
	    for(i=1;i<=m;i++)
	    {
	    	printf("%.2f\n",ans[i]);
		}
	}
	return 0;
}
