#include <stdio.h>
void myswap(int *a,int *b);
void myswap(int *a,int *b)
{
    int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
