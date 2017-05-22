#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string> v1;
    vector<int> v2; 
    int n;             //学生人数
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        string s;    //学生姓名
        int sum = 0;
        cin >> s;
        v1.push_back (s);
        int a;    //学生期末平均成绩
        int b;    //学生班级评议成绩
        char c;   //学生是否是学生干部，Y 表示学生为干部
        char d;    //学生是否是西部省份学生， Y 表示学生是西部身份学生
        int e;    //学生发表论文数
        cin >> a >> b >> c >> d >> e;
        if(a > 80 && e >0)    //院士奖学金
            sum = sum + 8000;
        if(a > 85 && b > 80)   //五四奖学金
            sum = sum + 4000;
        if(a > 90)   //成绩优秀奖
            sum = sum + 2000;
        if(a > 85 && d == 'Y')  //西部贡献奖
            sum = sum + 1000;
        if(b > 80 && c == 'Y')  //班级贡献奖
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

    for(it2 = v2.begin();it2 != v2.end ();++it2,++it1)   //以奖金数为条件排序
    {
        Sum = Sum + *it2;
        if(*it2 > max)
        {
            max = *it2;
            temp = *it1;
        }
    }
    cout << temp << endl;   //输出姓名
    cout << max << endl;  //输出该学生获得的奖学金总额
    cout << Sum << endl;  //输出全部学生获得的奖学金总额
    return 0;
}                                 
