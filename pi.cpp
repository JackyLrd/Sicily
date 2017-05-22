#include <stdio.h>
#include <math.h>
int main(){
    float term,result=1;
    int n;
    for(n=2;n<=100;n+=2){
        term=(float)(n*n)/((n-1)*(n+1));
        result*=term;
    }
    printf("piµÄÖµÎª£º%f\n", 2*result);
    
    return 0;
}
