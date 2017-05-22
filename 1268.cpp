#include <stdio.h>
#include <string.h>
#include <memory.h>
int main(void)
{
	char in[10000];
	int n,i,j,k,ele[10000],x,p,ans;
	while(scanf("%s",&in)!=EOF)
	{
		memset(ele,0,sizeof(ele));
		x=0;
		ans=0;
		for(i=0;i<strlen(in);i++)
		{
			if(in[i]>=48&&in[i]<=57)
			{
				x++;
				ele[x]=in[i]-48;
				for(j=i-1;j>=0;j--)
				{
					if(in[j]>=48&&in[j]<=57) break;
					else if(in[j]=='+');
					else if(in[j]=='-') ele[x]*=-1;
					else; 
				}
			}
			else;
		}
		for(i=1;i<=x;i++)
		{
			ans+=ele[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}
