#include <stdio.h>
int main(void)
{
	char a=0;
	int i;
	for(i=0;i<=127;i++)
	{
		printf("%d %c\n",a,a);
		a++;
	}
	return 0;
}
