#include <stdio.h>
int main(void)
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)//以0结束就把0替换EOF 
    {       
        printf("%d\n",a+b);
    }
}
