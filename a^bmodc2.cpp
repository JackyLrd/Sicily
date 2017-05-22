#include <stdio.h>  
  
int main()  
{  
    int i;  
  
    int a;  
    int b;  
    int c;  
    int result = 1;  
  
    scanf("%d %d %d", &a, &b, &c);  
  
    for (i = 0; i < b; i++)  
    {  
        result = (result * (a % c)) % c;  
    }  
  
    printf("%d\n", result);  
  
    return 0;  
}  
