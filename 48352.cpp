#include <stdio.h>
#include <string.h>
int main(void)
{
	char in[100];
	int T,n,i,j,jug,len;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",&in);
		len=strlen(in);
		jug=1;
		for(i=0,j=len-1;i<len/2;i++,j--)
		{
			if(in[i]>=97&&in[i]<=122)
			{
				in[i]=in[i]-32;
			}
			else;
			if(in[j]>=97&&in[j]<=122)
			{
				in[j]=in[j]-32;
			}
			else;
			if(in[i]>=65&&in[i]<=90&&in[j]>=65&&in[j]<=90)
			{
				if(in[i]==65||in[i]==66||in[i]==67)
				{
					if(in[j]==65||in[j]==66||in[j]==67);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==68||in[i]==69||in[i]==70)
				{
					if(in[j]==68||in[j]==69||in[j]==70);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==71||in[i]==72||in[i]==73)
				{
					if(in[j]==71||in[j]==72||in[j]==73);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==74||in[i]==75||in[i]==76)
				{
					if(in[j]==74||in[j]==75||in[j]==76);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==77||in[i]==78||in[i]==79)
				{
					if(in[j]==77||in[j]==78||in[j]==79);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==80||in[i]==81||in[i]==82||in[i]==83)
				{
					if(in[j]==80||in[j]==81||in[j]==82||in[j]==83);
					else
					{
						jug=0;
						break;
					}
				}
				else if(in[i]==84||in[i]==85||in[i]==86)
				{
					if(in[j]==84||in[j]==85||in[j]==86);
					else
					{
						jug=0;
						break;
					}
				}
				else
				{
					if(in[j]==87||in[j]==88||in[j]==89||in[j]==90);
					else
					{
						jug=0;
						break;
					}
				}
			}
			else
			{
				jug=0;
				break;
			}
		}
		if(jug==0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
