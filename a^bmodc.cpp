#include <stdio.h>
int main(void)
{int a,b,c,d,e,ans;
scanf("%d %d %d", &a, &b, &c);  
d=b;
e=a;
for(b=2;b<=d;b++)
{
a=a*e%c;
}
ans=a;
printf("%d\n", ans);  
return 0;
}
