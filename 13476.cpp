#include <stdio.h>
int main(void)
{int N,m,a,ans;
scanf("%d",&N);
a=N;
N=2;
while(N<=a)
{ans=1;
for(m=2;m<=N;m++)
{if(N%m==0) ans=ans+m;
else ans=ans;
}
ans=ans/2;
if(N==ans) printf("%d\n",ans),N++;
else N++; 
}
return 0;
}
