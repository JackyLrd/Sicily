#include <stdio.h>
#include <math.h>
int main(void)
{
	double x1,x2,x3,y1,y2,y3,a,b,c;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
		a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		b=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		c=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		a=sqrt(a);
		b=sqrt(b);
		c=sqrt(c);
		printf("%.5f\n",a+b+c);
	}
	return 0;
}
