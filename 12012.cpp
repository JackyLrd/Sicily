#include <stdio.h>
#include <string.h>
int adder(char a,char b,int cin);
void rev(char a[]);
int main(void)
{
	char a[100],b[100],out[100];
	int T,n,i,j,k,lena,lenb,cin,jug,m;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		jug=1;
		scanf("%s %s",&a,&b);
		lena=strlen(a);
		lenb=strlen(b);
		if(lena>lenb) k=lena;
		else k=lenb;
		rev(a);
		rev(b);
		for(j=lena;j<k;j++)
		{
			a[j]='0';
		}
		for(j=lenb;j<k;j++)
		{
			b[j]='0';
		}
		cin=0;
		for(j=0;j<k;j++)
		{
			n=0;
			n=adder(a[j],b[j],cin);
			if(n==1)
			{
				out[j]='1';
				cin=1;
			}
			else if(n==2)
			{
				out[j]='0';
				cin=1;
			}
			else if(n==3)
			{
				out[j]='1';
				cin=0;
			}
			else
			{
				out[j]='0';
				cin=0;
			}
		}
		printf("%d ",i);
		for(j=1;j<k;j++)
		{
			if(out[j]=='0') jug++;
			else;
		}
		if(jug==k)
		{
			printf("0");
		}
		else
        {
        	if(cin==1)
		{
			out[k]='1';
			for(j=k;j>=0;j--)
			{
				if(out[j]!='0')
				{
					for(m=j;m>=0;m--)
					printf("%c",out[j]);
					break;
				}
				
			}
		}
		else
		{
			for(j=k-1;j>=0;j--)
		    {
		    	if(out[j]!='0')
				{
					for(m=j;m>=0;m--)
					printf("%c",out[j]);
					break;
				}
		    }
		}
		}
		printf("\n");
	}
	return 0;
}
int adder(char a,char b,int cin)
{
	int n=0;
	if(cin==1&&a=='1'&&b=='1') n=1;
	else if(cin==0&&a=='1'&&b=='1') n=2;
	else if(cin==1&&a=='0'&&b=='1') n=2;
	else if(cin==1&&a=='1'&&b=='0') n=2;
	else if(cin==1&&a=='0'&&b=='0') n=3;
	else if(cin==0&&a=='1'&&b=='0') n=3;
	else if(cin==0&&a=='0'&&b=='1') n=3;
	else if(cin==0&&a=='0'&&b=='0') n=4;
	else;
	return n;
}
void rev(char a[])
{
	char temp;
	int len,i,j;
	len=strlen(a);
	for(i=0,j=len-1;i<=len/2;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
