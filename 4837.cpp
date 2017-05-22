#include <stdio.h>
#include <string.h>
char pas[1000000];
int zero[500000];
int main(void)
{
	char key[15];
	int lenkey,lenpas,n,i,l,j,k,ans=0,ans2=-1;
	gets(key);
	gets(pas);
	lenpas=strlen(pas);
	lenkey=strlen(key);
	k=0;
	for(i=0;i<lenpas;i++)
	{
		if(pas[i]==' ')
		{
			k++;
			zero[k]=i;
		}
		else;
	}
	if(zero[1]==lenkey)
	{
		for(i=0;i<zero[1];i++)
		{
			if(pas[i]==key[i]||pas[i]+32==key[i]||pas[i]-32==key[i]);
			else break;
		}
		if(i==lenkey) ans++;
		else;
		if(ans==1&&ans2==-1)
		{
			ans2=0;
		}
		else;
		//printf("%d %d\n",ans,ans2);
	}
	for(i=2;i<=k-1;i++)
	{
		if(zero[i+1]-zero[i]-1==lenkey)
		{
			for(j=zero[i]+1,l=0;j<=zero[i+1]-1;j++,l++)
			{
				if(pas[j]==key[l]||pas[j]+32==key[l]||pas[j]-32==key[l]);
				else break;
			}
			if(j==zero[i+1]) ans++;
			else;
		}
		else;
		if(ans==1&&ans2==-1)
		{
			ans2=zero[i]+1;
		}
		else;
		//printf("%d %d\n",ans,ans2);
	}
	if(lenpas-zero[k]-1==lenkey)
	{
		for(i=zero[k]+1,l=0;i<lenpas;i++,l++)
		{
			if(pas[i]==key[l]||pas[i]+32==key[l]||pas[i]-32==key[l]);
			else break;
		}
		if(i==lenpas) ans++;
		else;
		if(ans==1&&ans2==-2)
		{
			ans2=zero[k]+1;
		}
		else;
		//printf("%d %d\n",ans,ans2);
	}
	if(ans==0) printf("-1\n");
	else printf("%d %d\n",ans,ans2);
	return 0;
}
