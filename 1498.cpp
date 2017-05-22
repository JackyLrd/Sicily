#include <stdio.h>
#include <string.h>
void fun(int n);
char ele[20][100000],in[2][100000];;
int len[20];
int main(void)
{
	int n,i,j,k,T,a,b;
	ele[0][0]='{';
	ele[0][1]='}';
	len[0]=2;
	for(i=1;i<=15;i++)
	{
		fun(i);
	}
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",&in[0]);
		scanf("%s",&in[1]);
		a=strlen(in[0]);
		b=strlen(in[1]);
		for(i=0;i<=15;i++)
		{
			if(a==len[i])
			{
				a=i;
				break;
			}
		}
		for(i=0;i<=15;i++)
		{
			if(b==len[i])
			{
				b=i;
				break;
			}
		}
		printf("%s\n",ele[a+b]);
	}
	return 0;
}
void fun(int n)
{
	int i,j,k;
	i=1;
	ele[n][0]='{';
	for(k=0;k<n;k++)
	{
		for(i=i,j=0;j<strlen(ele[k]);j++,i++)
		{
			ele[n][i]=ele[k][j];
		}
		if(k==n-1);
		else
		{
			ele[n][i]=',';
			i++;
		}
	}
	ele[n][i]='}';
	len[n]=i+1;
}
