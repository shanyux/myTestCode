//现在，有一行括号序列，请你检查这行括号是否配对。
//输入
//第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每组输入数据都是一个字符串S(S的长度小于10000，且S不是空串），测试数据组数少于5组。数据保证S中只含有"[","]","(",")"四种字符
//输出
//每组输入数据的输出占一行，如果该字符串中所含的括号是配对的，则输出Yes,如果不配对则输出No
#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;
bool BracketMatch(const string str)
{
    stack<char> c;
    if(str[0] == ')' || str[1] == ']')
        return false;
    for(unsigned int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case '(':
            c.push(str[i]);
            break;
        case '[':
            c.push(str[i]);
            break;
        case ')':
            if(c.top() == '(')
                c.pop();
            break;
        case ']':
            if(c.top() == '[')
                c.pop();
            break;
        default:
            cout << "输入有错！" << endl;
            exit(1);
            }

    }
    if (c.empty())
        return true;
    return false;



}
int main()
{
    int N = 0;
    string str;
    cout << "请输入查询行数：" << endl;

    while(cin >> N)
    {
        cout << "请输入括号：" << endl;
        for(int i = 0; i < N; i++)
        {
            cin >> str;
            if(BracketMatch(str))
                cout << "yes!" << endl;
            else
                cout << "no!" << endl;

        }
        cout << "请输入查询行数：" << endl;
    }
    return 0;
}
