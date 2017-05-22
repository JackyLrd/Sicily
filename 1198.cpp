#include <stdio.h>
#include <string.h>
void sort(char a[],int len);
int main(void)
{
	char str[100][1000],temp[1000];
	int va[10],T,n,i,j,k,m,len;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%s",&str[j]);
		}
		
		for(j=0;j<n;j++)
		{
			for(k=0;k<n-1;k++)
			{
				if(strcmp(str[k],str[k+1])>0)
				{
					strcpy(temp,str[k]);
					strcpy(str[k],str[k+1]);
					strcpy(str[k+1],temp);
				}
			}
		}
		for(j=0;j<n;j++)
		{
			printf("%s",str[j]);
		}
		printf("\n");
	}
	return 0;
}
void sort(char a[],int len)
{
	char temp;
	int i,j,k;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else;
		}
	}
}
