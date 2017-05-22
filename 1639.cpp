#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[1000],out[1000];
	int m,n,i,j,k,p;
    scanf("%s",&a);
    while(a!=0)
    {
    	m=0;
    	p=0;
    	k=strlen(a);
    	for(i=0;i<=k;i++)
    	{
    		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
    		{
    			if(a[i+1]=='0'||a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'||a[i+1]=='5'||a[i+1]=='6'||a[i+1]=='7'||a[i+1]=='8'||a[i+1]=='9')
    			{
    				p=a[i+1]-48+(a[i]-48)*10;
    				for(j=m;j<p+m;j++)
    				{
    					out[j]=a[i+2];
					}
					m=m+p;
				}
				else
				{
					if(a[i-1]=='0'||a[i-1]=='1'||a[i-1]=='2'||a[i-1]=='3'||a[i-1]=='4'||a[i-1]=='5'||a[i-1]=='6'||a[i-1]=='7'||a[i-1]=='8'||a[i-1]=='9');
					else
					{
						p=(a[i]-48);
    				    for(j=m;j<p+m;j++)
    				    {
    					    out[j]=a[i+1];
					    }
					    m=m+p;
					}
				}
			}
			else
			{
				if(a[i-1]=='0'||a[i-1]=='1'||a[i-1]=='2'||a[i-1]=='3'||a[i-1]=='4'||a[i-1]=='5'||a[i-1]=='6'||a[i-1]=='7'||a[i-1]=='8'||a[i-1]=='9');
                else
                {
                	out[m]=a[i];
                	m++;
				}
			}
		}
		k=strlen(out);
		if(k>50) printf("TOO LONG\n");
		else printf("%s\n",out);
		scanf("%s",&a);
	}
	return 0;
}
