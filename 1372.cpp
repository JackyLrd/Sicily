#include <stdio.h>
#include <string.h>
int main(void)
{
	char in[50];
	int n,i,j,k,m,len;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",&in);
		len=strlen(in);
		if(in[0]=='a'||in[0]=='e'||in[0]=='i'||in[0]=='o'||in[0]=='u')
		{
			in[len]='c';
			in[len+1]='o';
			in[len+2]='w';
			for(j=0;j<=len+2;j++)
		    printf("%c",in[j]);
		}
		else
		{
			in[len]=in[0];
			in[len+1]='o';
			in[len+2]='w';
			for(j=1;j<=len+2;j++)
		    printf("%c",in[j]);
		}
		printf("\n");
    }
	return 0;
}
