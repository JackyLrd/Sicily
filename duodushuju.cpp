#include <stdio.h>
int main(void)
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)//��0�����Ͱ�0�滻EOF 
    {       
        printf("%d\n",a+b);
    }
}
