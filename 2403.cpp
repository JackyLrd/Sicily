#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[5000];
	int y,n,p,a,lenth,i;
	scanf("%s",&str);
	while(str[0]!='#')
	{
		y=0;
		n=0;
		p=0;
		a=0;
		lenth=strlen(str);
		for(i=0;i<lenth;i++)
		{
			if(str[i]=='Y') y++;
			else if(str[i]=='N') n++;
		    else if(str[i]=='P') p++;
		    else a++;
		}
		if(a>=y+n+p) printf("need quorum\n");
		else
		{
			if(y>n) printf("yes\n");
			else if(n>y) printf("no\n");
			else printf("tie\n");
		}
		scanf("%s",&str);
	}
	return 0;
}
