#include <stdio.h>
#include <string.h>
#include <math.h>
#include <memory.h>
int main(void)
{
	char in[101];
	int n,i,len,max,min,x,a,s[27];
	while(scanf("%s",&in)!=EOF)
	{
		memset(s,0,sizeof(s));
		len=strlen(in);
	    for(i=0;i<=len-1;i++)
	    {
		    s[in[i]-96]++;
	    }
	    min=100;
	    max=0;
	    for(i=1;i<=26;i++)
	    {
		    if(max<s[i]) max=s[i];
		    else;
		    if(min>s[i]&&s[i]!=0) min=s[i];
		    else;
	    }
	    x=max-min;
	    a=0;
	    for(i=1;i<=sqrt(x);i++)
	    {
		    if(x%i==0) a++;
		    else;
	    }
	    if(a==1&&x!=1)
	    {
		    printf("Lucky Word\n");
		    printf("%d\n",x);
	    }
	    else
	    {   printf("No Answer\n");
		    printf("0\n");
	    }
	}
	return 0;
}

