#include<stdio.h>
int m,dp[9901];    //d[i]´ú±í£¨n1 + n2 + n3 + ...... + ni£©mod 9901
int main(){
    int n,k,i;
    scanf("%d%d",&n,&k);
 dp[0]=0;dp[1]=n;m=n;
 
    for(i=2;i<9901;++i){
     m=m*n% 9901;
     dp[i]=(dp[i-1]+m)% 9901;
    }
   
    printf("%d\n",(k/9900*dp[9900]+dp[k% 9901])% 9901);
   
    return 0;
}
