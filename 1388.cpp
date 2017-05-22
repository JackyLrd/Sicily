#include <stdio.h>
#include <string.h>
int main(void)
{
	int ans,i,j,k,p,b[500];
    char a[500];
    j=1;
    while(a[0]!='#')
    {
    	ans=0;
    	gets(a);
    	k=strlen(a);
    	p=1;
    	for(i=0;i<k;i++)
    	{
    		if(a[i]==32) ans=ans+(a[i]-32)*p;
    		else
    		{
    			ans=ans+(a[i]-64)*p;
			}
            p=p+1;
		}
		b[j]=ans;
		j++;
	}
	for(i=1;i<j-1;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
