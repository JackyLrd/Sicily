#include <stdio.h>
int main(void)
{
	int number, digit[10], count = 0, x; //��ʼ����Ҫ�ı��� 
	scanf("%d", &number); //�������� 
	if(number >= 0); //�ж����� 
	else
	{
		printf("-"); 
		number = 0 - number;  //ȡ����ֵ����ȡ�� 
	}
	do
	{
		count++;
		digit[count] = number % 16; //����Ȩֵ 
		number = number / 16;
	}
	while(number != 0);
	for(x = 1; x <= count; x++) //��� 
	{
		if(digit[x] >=0 && digit[x] <= 9)
		{
			printf("%d", digit[x]);
		}
		else
		{
			printf("%c", digit[x]+55); //����10-15ת��Ϊ��Ӧ��a-f 
		}
	}
	return 0;
}
