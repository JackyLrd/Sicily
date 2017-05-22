#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[5000],temp;
	int i,j,k,m,n,q,p,len;
	while(scanf("%d",&n) && n!=0)
	{
		scanf("%s",&str);
		len=strlen(str);
        q=len/n;
        if(q%2==0) q=len-n;
        else q=len-2*n;
        j=n;
        while(j<=q)
        {
        	for(i=j,k=j+n-1;i<(j+n/2);i++,k--)
        	{
        		temp=str[i];
        		str[i]=str[k];
        		str[k]=temp;
			}
		    j=j+2*n;	
		}
		for(i=0;i<n;i++)
		{
			for(j=i;j<=i+len-n;j=j+n)
			{
				printf("%c",str[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
