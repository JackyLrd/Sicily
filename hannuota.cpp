#include <iostream>

using namespace std;
//第一个塔为初始塔，中间的塔为借用塔，最后一个塔为目标塔  
long long int i;//记录步数
long long int t;  
void move(long long int n, char from, char to,long long int T) //将编号为n的盘子由from移动到to  
{
	if(i == t)
		cout << "Case " << T << ": " << n << endl;
	i++;  
}  
void hanoi(long long int n, char from, char denpend_on, char to,long long int T)//将n个盘子由初始塔移动到目标塔(利用借用塔)  
{  
	if(n == 1)
		if(i == t + 1);
		else  
    		move(1, from, to, T);//只有一个盘子是直接将初塔上的盘子移动到目的地  
    else  
    {   
    	if(i == t + 1);
		else
     		hanoi(n-1, from, to, denpend_on, T);//先将初始塔的前n-1个盘子借助目的塔移动到借用塔上
		if(i == t + 1);
		else  
     		move(n, from, to, T);              //将剩下的一个盘子移动到目的塔上
		if(i == t + 1);
		else  
      		hanoi(n-1, denpend_on, from, to, T);//最后将借用塔上的n-1个盘子移动到目的塔上  
    }
}  
int main()  
{  
    long long int n, T;
    char x = 'A',y = 'B',z = 'C';
    cin >> T;
	for(int j = 1; j <= T; j++)
	{
		cin >> n;
		t = n;
		i = 1;
		hanoi(n, x, y, z, j);
	}  
}  
