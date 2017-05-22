#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[500],out[500];
	int n,i,j,k,m,len;
	while(gets(str)&&str[0]!='#')
	{
		len=strlen(str);
		j=0;
		for(i=0;i<len;i++)
		{
			if(str[i]==' ')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='0';
				j=j+3;
			}
			else if(str[i]=='!')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='1';
				j=j+3;
			}
			else if(str[i]=='$')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='4';
				j=j+3;
			}
			else if(str[i]=='%')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='5';
				j=j+3;
			}
			else if(str[i]=='(')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='8';
				j=j+3;
			}
            else if(str[i]==')')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='9';
				j=j+3;
			}
			else if(str[i]=='*')
			{
				out[j]='%';
				out[j+1]='2';
				out[j+2]='a';
				j=j+3;
			}
			else
			{
				out[j]=str[i];
				j++;
			}
		}
		for(i=0;i<j;i++)
		{
			printf("%c",out[i]);
		}
		printf("\n");
	}
	return 0;
}
