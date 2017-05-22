#include <stdio.h>
#include <string.h>
#include <algorithm>  
using namespace std;  
char str[10];
int len;
void func(int x,int y);
int main(void)
{

	scanf("%s",&str);
	len=strlen(str);
	func(0,len);
	return 0;
}
void func(int x,int y)
{
	if(x==y)
	{
		for(int i=0;i<len;i++)
		printf("%c",str[i]);
		printf("\n");
	}
	else
	{
		int i;
		char temp;
		for(i=x;i<len;i++)
		{
			sort(str+x+1,str+len);  
            swap(str[x],str[i]);  
			func(x+1,y);
		}
	}
}
