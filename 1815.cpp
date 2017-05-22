#include <stdio.h>
#include <math.h>
int main(void)
{
	double n,i,x1,y1,x2,y2,x,y,ans;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		x=(x1-x2)*(x1-x2);		
		y=(y1-y2)*(y1-y2);
		ans=sqrt(x+y);
		printf("%.2lf\n",ans);
    }
	return 0;
}
