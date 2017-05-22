#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i,j,k,p,b[50000];
	char a[50000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",&a);
		k=strlen(a);
		b[i]=0;
		p=1;
		for(j=0;j<k;j++)
		{
			if(a[j]=='O')
			{
				b[i]=b[i]+1;
				if(j==0);
				else 
				{
					if(a[j-1]=='O')
					{
						b[i]=b[i]+p;
						p=p+1;
					}
					else
					{
						p=1;
					}
				}
			}
			else; 
		}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}
