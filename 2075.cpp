#include <stdio.h>
int main(void)
{
	double num1,num2,ans;
	scanf("%lf%lf",&num1,&num2);
	ans=(num1*num1)*3.14159*num2;
    printf("%.5f",ans);
	return 0;
}
