#include <stdio.h>  
int main()  
{  
    int n, i, a, max;  
    while(scanf("%d", &n) && n)  
    {  
        for(i = 0; i < n; i++)  
        {  
            scanf("%d", &a);  
            if (i == 0)  
                max = a;  
            else  
                max = max > a? max : a;  
        }  
        printf("%d\n", max);  
        max = 0;  
    }  
    return 0;  
}  

