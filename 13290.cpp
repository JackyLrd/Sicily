#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[200],b[200];
	int beta[27]={0},betb[27]={0},i,j,k,len;
	scanf("%s",&a);
	scanf("%s",&b);
	if(strlen(a)==strlen(b))
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			beta[a[i]-96]++;
			betb[b[i]-96]++;
		}
		for(i=1;i<=26;i++)
		{
			if(beta[i]==betb[i]);
			else break;
		}
		if(i==27) printf("YES\n");
		else printf("NO\n");
	}
	else printf("NO\n");
	return 0;
}
