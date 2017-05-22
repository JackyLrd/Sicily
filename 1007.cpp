#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i,j,k;
	char a[201],b[201],c[201];
	scanf("%d\n",&n);
	scanf("%s",&a);
	k=strlen(a);
	n=n*2;
	j=1;
	for(i=k;i>=1;i--)
	{
		b[j]=a[i];
		j++;
	}
	
}
