#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[40],b[40];
	int v=-1,h=-1,lena,lenb,i,j,k;
	scanf("%s %s",&a,&b);
	lena=strlen(a);
	lenb=strlen(b);
	for(i=0;i<lena;i++)
	{
		for(j=0;j<lenb;j++)
		{
			if(a[i]==b[j])
			{
				h=i;
				v=j;
				break;
			}
			else;
		}
		if(h!=-1||v!=-1) break;
		else;
	}
	for(i=0;i<lenb;i++)
	{
		for(j=0;j<lena;j++)
		{
			if(i==v)
			{
				printf("%c",a[j]);
			}
			else
			{
				if(j==h)
				{
					printf("%c",b[i]);
				}
				else
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
