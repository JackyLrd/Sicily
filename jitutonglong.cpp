#include<stdio.h>
int main(void)
{
int x,y,m,n;
while(scanf("%d%d",&m,&n),m!=0 && n!=0)
{
y=(n-2*m)/2;
x=m-y;
if(x<=0 || y<=0) printf("No answer");
else  printf("%d %d",x,y);
}
return 0;	
}
