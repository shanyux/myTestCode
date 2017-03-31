//问题描述：设计一个程序，统计随机给出的字符串的数字的个数，字母的个数，特殊字符的个数
//问题示例：123asd，数字3，字母3，特殊字符0
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
const int MAX = 1024;
void charcal(string str, int count[])
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= '0') && (str[i] <='9'))
            count[0]++;
        else if ((str[i] >= 'a') && (str[i] <= 'z'))
            count[1]++;
        else
            count[2]++;
        i++;
    }

}

int main()
{
    string str;
    int count[3];
    memset(count, 0, sizeof(count));
    cout<<"输入字符串: "<<endl;
    getline(cin, str);
    charcal(str, count);//统计
//   cout << "Hello world!" << endl;
    cout<<"数字："<<count[0]<<endl;

    cout<<"字符："<< count[1]<<endl;

    cout<<"特殊字符："<<count[2]<<endl;

    system("pause");
    return 0;
}
