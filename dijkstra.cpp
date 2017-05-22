#include <iostream> 
#include <cstring>
#include <queue>
using namespace std;

class Path
{
public:
    int i, j;
    int dist;
    Path( int a, int b, int c ) { i = a; j = b; dist = c; }
    friend bool operator<(const Path &p1,const Path &p2 )
	{
		return p1.dist > p2.dist; 
	}
};
int dirt[4][2]={{-1,0},{0,1},{1,0},{0,-1}};
int main()
{
    int T,row,column,si,sj,ti,tj,i,j,k,grid[101][101];
    bool included[ 101 ][ 101 ];
    cin>>T;
    while(T--)
	{
        priority_queue<Path> q;
        cin>>row>>column;
        for (i=1;i<=row;i++)
            for (j=1;j<=column;j++)
                cin>>grid[i][j];
        cin>>si>>sj>>ti>>tj;
        memset(included,false,sizeof(included));
        included[si][sj]=true;
        Path add=Path(si,sj,grid[si][sj]);
        while(!included[ti][tj])
		{
            for(k=0;k<4;k++)
			{
                i=add.i+dirt[k][0];
                j=add.j+dirt[k][1];
                if(i>=1 && i<=row && j>=1 && j<=column && !included[i][j])
                    q.push( Path(i,j,add.dist+grid[i][j]));
            }
            add=q.top();
            while (included[add.i][add.j])
			{
                q.pop();
                add = q.top();
            }
            included[add.i][add.j]=true;
        }
        cout<<add.dist<<endl;
    }
    return 0;
}                                 
