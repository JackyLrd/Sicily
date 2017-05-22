#include <stdio.h>
int main(void)
{int i,j,m,ans,a = 1;
scanf("%d %d",&i,&j);
m=i;
ans = 0;
for(;m<=j;m++)
{a = 1;
i=m;
while(i!=1)
{
if(i % 2 == 0) i = i / 2;
else i = 3 * i + 1;
a++;
}if(a>ans) ans = a;
else ans = ans;
}
printf("%d",ans);
return 0;}

