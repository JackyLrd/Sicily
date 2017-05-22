#include <stdio.h>
int main(void)
{
	int number, digit[10], count = 0, x; //初始化需要的变量 
	scanf("%d", &number); //输入数字 
	if(number >= 0); //判断正负 
	else
	{
		printf("-"); 
		number = 0 - number;  //取绝对值方便取余 
	}
	do
	{
		count++;
		digit[count] = number % 16; //计算权值 
		number = number / 16;
	}
	while(number != 0);
	for(x = 1; x <= count; x++) //输出 
	{
		if(digit[x] >=0 && digit[x] <= 9)
		{
			printf("%d", digit[x]);
		}
		else
		{
			printf("%c", digit[x]+55); //数字10-15转化为对应的a-f 
		}
	}
	return 0;
}
