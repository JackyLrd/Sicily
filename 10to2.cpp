#include <stdio.h> 
int main() 
{ 
int T,i,j,n=0,a[40],b[40];
scanf("%d",&T);
for(j=1;j<=T;j++)
{
scanf("%d",&b[j]);
} 
for(T=1;T<j;T++)
{
if(b[T]==0) printf("%d\n",b[T]);
else
{
while (b[T]!=0) 
{n++; 
a[n]=b[T]%2;
b[T]=b[T]/2; 
} 
for(i=n;i>=1;i--)
printf("%d",a[i]);
printf("\n");
n=0;
}
}
return 0;
}
