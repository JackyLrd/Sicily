#include <stdio.h>
#define Pi 3.1415927
int main(void)
{
	double mph,dia,revt,dis;
	int rev,n,i,j,k;
	k=0;
	while(scanf("%lf %d %lf",&dia,&rev,&revt)&&rev!=0)
	{
		k++;
		dis=dia*Pi*rev/(12*5280);
		mph=dis/revt*3600;
		printf("Trip #%d: %.2f %.2f\n",k,dis,mph);
	}
	return 0;
}
