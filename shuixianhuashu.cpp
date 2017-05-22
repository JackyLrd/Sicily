#include<stdio.h>
int main(void)
{
int n,i,j,a[40],b;
scanf("%d",&n);
j=n;
n=1;
while(n<=j)
{
for(i=1;i<=n;i++)
{
a[n]=i;
printf("%d ",i);
}
for(b=n-1;b>=1;b--)
{
printf("%d ",a[b]);
}
printf("\n");
n++;
}
return 0;
}
