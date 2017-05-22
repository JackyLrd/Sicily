#include <stdio.h>
#include <string.h>
#include <memory.h>
int main(void)
{
	char in[10000];
	int n,i,j,k;
	int ele[10000];//运算式中的元素 
	int x;//元素总数 
	int p;//个十百千位的基数 
	int pos;//元素在运算式的位置 
	while(scanf("%s",&in)!=EOF)
	{
		memset(ele,0,sizeof(ele));
		x=0;
		for(i=0;i<strlen(in);i++)//分离元素 
		{
			if(in[i]>=48&&in[i]<=57)
			{
				for(j=i;j<strlen(in);j++)
				{
					if(in[j]>=48&&in[j]<=57);
					else break;
				}
				p=1;
				x++;
				for(k=j-1;k>=i;k--)
				{
					ele[x]=ele[x]+(in[k]-48)*p;
					p*=10;
				}
				if(in[i-1]=='-')
				{
					ele[x]*=-1;
					in[i-1]='#';
					in[i-2]='#';
					in[j]='#';
				} 
				else;
				i=j;
			}
			else;
		}
		while(x>1)//循环消元素 
		{
			pos=0;
			for(i=0;i<strlen(in);i++)
			{
				if(in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/')
				{
					pos++;
					if(in[i-1]==')'||in[i+1]=='(');
					else
					{
						if(in[i]=='+')
						{
							ele[pos]=ele[pos]+ele[pos+1];
						}
						else if(in[i]=='-')
						{
							ele[pos]=ele[pos]-ele[pos+1];
						}
						else if(in[i]=='*')
						{
							ele[pos]=ele[pos]*ele[pos+1];
						}
						else if(in[i]=='/')
						{
							ele[pos]=ele[pos]/ele[pos+1];
						}
						for(j=pos+1;j<x;j++)
						{
							ele[j]=ele[j+1];
						}
						x--;
						for(j=i;j>=0;j--)
						{
							if(in[j]=='(')
							{
								in[j]='#';
								break;
							}
							else in[j]='#';
						}
						for(j=i;j<strlen(in);j++)
						{
							if(in[j]==')')
							{
								in[j]='#';
								break;
							}
							else in[j]='#';
						}
						pos--;
					}
				}
				else;
			}
		}
		printf("%d\n",ele[1]);
	}
	return 0;
}
