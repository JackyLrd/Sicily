#include <iostream>
using namespace std;
int main(void)
{
	int i,j,k,n,m;
	int city[201][201];
	while(cin>>n&&n!=0)
	{
		cin>>m;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				city[i][j]=0;
			}
		}
		for(k=0;k<m;k++)
		{
			cin>>i>>j;
			city[i][j]=1;
		}
		for(k=0;k<n;k++)
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(city[i][j]==1||(city[i][k]==1&&city[k][j]==1))
						city[i][j]=1;
				}
			}
		}
		if(city[0][n-1]==1) cout<<"I can post the letter"<<endl;
		else cout<<"I can't post the letter"<<endl;	
	}
	return 0;
}
