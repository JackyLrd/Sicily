#include<stdio.h>
int main()
{
int x, y, n;
y= 0;
int i;
int a[10];
for(i= 0; i<= 9; i++)
scanf("%d", &a[i]);
scanf("%d", &n);
x= n+ 30;
for(i= 0; i<= 9; i++)
{
if(a[i]<= x)
y++;
}
printf("%d\n", y- 1);
return 0;
}

