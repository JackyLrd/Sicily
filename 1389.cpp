#include <stdio.h>
#include <string.h>
int main(void)
{
	char in[100];
	int ans,len,n,i,j,k,chance[100];
	while(scanf("%s",&in)&&in[0]!='#')
	{
		ans=0;
		len=strlen(in);
		for(i=0;i<len;i++)
		{
			if(in[i]=='_') chance[i]=0;
			else if(in[i]=='.') chance[i]=100;
			else if(in[i]=='/')
			{
				for(j=i-1;j>=0;j--)
				{
					if(in[j]=='_');
					else if(in[j]=='|'||in[j]=='\\')
					{
						chance[i]=0;
						break;
					}
					else
					{
						chance[i]=100;
						break;
					}
				}
				if(j==-1) chance[i]=100;
				else;
			}
			else if(in[i]=='\\')
			{
				for(j=i+1;j<len;j++)
				{
					if(in[j]=='_');
					else if(in[j]=='|'||in[j]=='/')
					{
						chance[i]=0;
						break;
					} 
					else
					{
						chance[i]=100;
						break;
					}
				}
				if(j==len) chance[i]=100;
				else;
			}
			else
			{
				for(j=i-1;j>=0;j--)
				{
					if(in[j]=='_');
					else if(in[j]=='|'||in[j]=='\\')
					{
						chance[i]=0;
						break;
					}
					else
					{
						chance[i]=100;
						break;
					}
				}
				if(j==-1) chance[i]=100;
				else;
				for(j=i+1;j<len;j++)
				{
					if(in[j]=='_');
					else if(in[j]=='|'||in[j]=='/')
					{
						chance[i]+=0;
						break;
					} 
					else
					{
						chance[i]+=100;
						break;
					}
				}
				if(j==len) chance[i]+=100;
				else;
				chance[i]/=2;
			}
			ans+=chance[i];
		}
		printf("%d\n",ans/len);
	}
	return 0;
}
