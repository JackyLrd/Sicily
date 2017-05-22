#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[500][500],str[500][500],str2[500][500],temp[500];
	int n,i,j,p,A[500],B[500],C[500],D[500],check[500];
	while(scanf("%d",&n) && n!=0)
	{
		for(i=1;i<=n;i++)
		{
			check[i]=1;
			scanf("%s %d.%d.%d.%d",&name[i],&A[i],&B[i],&C[i],&D[i]);
		}
		p=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(A[i]==A[j]&&B[i]==B[j]&&C[i]==C[j]&&D[i]==D[j]&&check[j]==1&&check[i]==1&&i!=j)
				{
					p++;
					check[i]=0;
					check[j]=0;
					strcpy(str[p],name[i]);
					strcpy(str2[p],name[j]);
					break;
				}
				else;
			}
		}
		for(i=1;i<=p;i++)
		{
			for(j=1;j<p;j++)
			{
				if(strcmp(str[j],str[j+1])>0)
				{
					strcpy(temp,str[j]);
					strcpy(str[j],str[j+1]);
					strcpy(str[j+1],temp);
					strcpy(temp,str2[j]);
					strcpy(str2[j],str2[j+1]);
					strcpy(str2[j+1],temp);
				}
			}
		}
		for(i=1;i<=p;i++)
		{
			printf("%s is the MaJia of %s\n",str2[i],str[i]);
		}
		printf("\n");
	}
	return 0;
}
