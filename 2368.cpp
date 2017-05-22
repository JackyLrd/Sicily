#include <stdio.h>
int main(void)
{
	char in[50];
	int n,i,j,k,m,ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
	scanf("%d",&n);
	while(n--)
	{
		ttt=0;
		tth=0;
		tht=0;
		thh=0;
		htt=0;
		hth=0;
		hht=0;
		hhh=0;
		scanf("%d",&j);
		scanf("%s",&in);
		for(i=0;i<=37;i++)
		{
			if(in[i]=='T'&&in[i+1]=='T'&&in[i+2]=='T') ttt++;
			else if(in[i]=='T'&&in[i+1]=='T'&&in[i+2]=='H') tth++;
			else if(in[i]=='T'&&in[i+1]=='H'&&in[i+2]=='T') tht++;
			else if(in[i]=='T'&&in[i+1]=='H'&&in[i+2]=='H') thh++;
			else if(in[i]=='H'&&in[i+1]=='T'&&in[i+2]=='T') htt++;
			else if(in[i]=='H'&&in[i+1]=='T'&&in[i+2]=='H') hth++;
			else if(in[i]=='H'&&in[i+1]=='H'&&in[i+2]=='T') hht++;
			else  hhh++;
		}
		printf("%d %d %d %d %d %d %d %d %d\n",j,ttt,tth,tht,thh,htt,hth,hht,hhh);
	}
	return 0;
}
