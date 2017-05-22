#include <stdio.h>
#include <memory.h>
#include <string.h>
int main(void)
{
	int dig1[1000],dig2[1000],num[100][1000],ans[1000],max1,max2,T,n,m,i,j,k,in,temp;
	char a[1000],b[1000];
	scanf("%d",&T);
	while(T--)
	{
		memset(dig1,0,sizeof(dig1));
		memset(dig2,0,sizeof(dig2));
		memset(ans,0,sizeof(ans));
		scanf("%s %s",&a,&b);
		max1=0;
		for(i=strlen(a)-1;i>=0;i--)
		{
			max1++;
			dig1[max1]=a[i]-48;
		}
		max2=0;
		for(i=strlen(b)-1;i>=0;i--)
		{
			max2++;
			dig2[max2]=b[i]-48;
		}
		for(i=strlen(a);i>=1;i--)
		{
			if(dig1[i]==0);
			else break;
		}
		for(j=strlen(b);j>=1;j--)
		{
			if(dig2[j]==0);
			else break;
		}
		if(i==0||j==0) printf("0\n");
		else
		{
			for(i=1;i<=max2;i++)
			{
				in=0;
				for(j=1;j<=max1;j++)
				{
					num[i][j]=dig1[j]*dig2[i]+in;
					if(num[i][j]>=10)
					{
						temp=num[i][j];
						num[i][j]=num[i][j]%10;
						in=(temp/10)%10;
						if(j==max1) max1++;
					}
					else in=0;
				}
			}
			for(i=1;i<=max2;i++)
			{
				in=0;
				k=i;
				for(j=1;j<=max1;j++)
				{
					ans[k]=ans[k]+num[i][j]+in;
					if(ans[k]>=10)
					{
						temp=ans[k];
						ans[k]=ans[k]%10;
						in=(temp/10)%10;
						if(j==max1) max1++;
					}
					else in=0;
					k++;
				}
			}
			for(i=299;i>=1;i--)
			{
				if(ans[i]!=0) break;
			}
			for(;i>=1;i--)
			{
				printf("%d",ans[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
