#include <stdio.h>  
#include <math.h>  
  
int isPrime(int n)  
{  
    int divisor = 1;  
    int i;  
    for(i = 2; i <= sqrt(n) && divisor == 1; i++)  
    {  
        if(n % i == 0)  
        {  
            divisor = 0;  
        }  
    }  
    return divisor;  
}  
  
  
int main()  
{  
    int b[100000];  
    int counter;  
    int m;  
    int te;  
    int i;  
    counter = 0;  
    for(i = 2; i < 1000000; i++)  
    {  
        if(isPrime(i) == 1)  
        {  
            b[counter++] = i;  
        }  
    }  
    scanf("%d", &te);  
    while(te--)  
    {  
        m = 0;  
        scanf("%d", &i);  
        while(i != 1)  
        {  
            while(i % b[m] == 0)  
            {  
                printf("%d", b[m]);  
                i /= b[m];  
                printf(" ");  
            }  
            m++;  
        }  
        printf("\n");  
    }  
    return 0;  
}
