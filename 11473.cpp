#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> v1;
    vector<int> v2; 
    int n;             //ѧ������
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        string s;    //ѧ������
        int sum = 0;
        cin >> s;
        v1.push_back (s);
        int a;    //ѧ����ĩƽ���ɼ�
        int b;    //ѧ���༶����ɼ�
        char c;   //ѧ���Ƿ���ѧ���ɲ���Y ��ʾѧ��Ϊ�ɲ�
        char d;    //ѧ���Ƿ�������ʡ��ѧ���� Y ��ʾѧ�����������ѧ��
        int e;    //ѧ������������
        cin >> a >> b >> c >> d >> e;
        if(a > 80 && e >0)    //Ժʿ��ѧ��
            sum = sum + 8000;
        if(a > 85 && b > 80)   //���Ľ�ѧ��
            sum = sum + 4000;
        if(a > 90)   //�ɼ����㽱
            sum = sum + 2000;
        if(a > 85 && d == 'Y')  //�������׽�
            sum = sum + 1000;
        if(b > 80 && c == 'Y')  //�༶���׽�
            sum = sum + 850;
        v2.push_back (sum);

    }
    vector<string>::iterator it1;
    vector<int>::iterator it2;
    int Sum = 0;
    int max = 0;
    it1 = v1.begin();
    it2 = v2.begin();
    max = *it2;
    string temp;

    for(it2 = v2.begin();it2 != v2.end ();++it2,++it1)   //�Խ�����Ϊ��������
    {
        Sum = Sum + *it2;
        if(*it2 > max)
        {
            max = *it2;
            temp = *it1;
        }
    }
    cout << temp << endl;   //�������
    cout << max << endl;  //�����ѧ����õĽ�ѧ���ܶ�
    cout << Sum << endl;  //���ȫ��ѧ����õĽ�ѧ���ܶ�
    return 0;
}                                 
