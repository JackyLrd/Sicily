#include <iostream>

using namespace std;
//��һ����Ϊ��ʼ�����м����Ϊ�����������һ����ΪĿ����  
long long int i;//��¼����
long long int t;  
void move(long long int n, char from, char to,long long int T) //�����Ϊn��������from�ƶ���to  
{
	if(i == t)
		cout << "Case " << T << ": " << n << endl;
	i++;  
}  
void hanoi(long long int n, char from, char denpend_on, char to,long long int T)//��n�������ɳ�ʼ���ƶ���Ŀ����(���ý�����)  
{  
	if(n == 1)
		if(i == t + 1);
		else  
    		move(1, from, to, T);//ֻ��һ��������ֱ�ӽ������ϵ������ƶ���Ŀ�ĵ�  
    else  
    {   
    	if(i == t + 1);
		else
     		hanoi(n-1, from, to, denpend_on, T);//�Ƚ���ʼ����ǰn-1�����ӽ���Ŀ�����ƶ�����������
		if(i == t + 1);
		else  
     		move(n, from, to, T);              //��ʣ�µ�һ�������ƶ���Ŀ������
		if(i == t + 1);
		else  
      		hanoi(n-1, denpend_on, from, to, T);//��󽫽������ϵ�n-1�������ƶ���Ŀ������  
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
