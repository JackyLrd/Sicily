#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[5000],out[5000];
	int lenth,i,j,k;
	scanf("%s",&str);
	while(str[0]!='#')
	{
		lenth=strlen(str);
		j=lenth-1;
		k=0;
		for(i=0;i<lenth;i++)
		{
			if(str[i]=='b') out[j]='d';
			else if(str[i]=='d') out[j]='b';
			else if(str[i]=='q') out[j]='p';
			else if(str[i]=='p') out[j]='q';
			else if(str[i]=='w'||str[i]=='i'||str[i]=='o'||str[i]=='x'||str[i]=='v') out[j]=str[i];
			else k++;
			j--;		
		}
		if(k!=0) printf("INVALID\n");
		else printf("%s\n",out);
		memset(str,0,5000);
		memset(out,0,5000);
		scanf("%s",&str);
	}
	return 0;
}
