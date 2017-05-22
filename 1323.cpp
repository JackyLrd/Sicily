#include <cstdio>
#include <string.h>
char str[1024];
char str2[1024];
int len;
void process(char *p)
{
        len=strlen(p);
        if(len==0) return;
        int empty;
        for (empty=0; p[empty]; ++empty)
        {
            if ( p[empty]!=' ' )
            {
                break;
            }
        }
        if ( empty==len )
        {
            return;
        }
        for (int i=(len+1)/2-1; i>=0; --i)
        {
            printf("%c",p[i]);
        }
        for (int i=len-1; i>=(len+1)/2; --i)
        {
            printf("%c",p[i]);
        }
        printf("\n");
}
int main(int argc, char *argv[])
{
    while ( gets(str) && gets(str2) )
    {
        process(str2);
        process(str);
    }
    return 0;
}

