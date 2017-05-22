#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int n,m,i,j,k,str[100000];
	while(scanf("%d %d",&n,&m)&&(n!=0||m!=0))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&str[i]);
		}
		sort(str,str+n);
		for(i=0;i<n-m;i+=m)
		{
			printf("%d ",str[i]);
		}
		printf("%d",str[i]);
		printf("\n");
	}
	return 0;
}
