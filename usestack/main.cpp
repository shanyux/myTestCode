//���ڣ���һ���������У����������������Ƿ���ԡ�
//����
//��һ������һ����N��0<N<=100��,��ʾ��N��������ݡ������N����������������ݣ�ÿ���������ݶ���һ���ַ���S(S�ĳ���С��10000����S���ǿմ���������������������5�顣���ݱ�֤S��ֻ����"[","]","(",")"�����ַ�
//���
//ÿ���������ݵ����ռһ�У�������ַ�������������������Եģ������Yes,�������������No
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
            cout << "�����д�" << endl;
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
    cout << "�������ѯ������" << endl;

    while(cin >> N)
    {
        cout << "���������ţ�" << endl;
        for(int i = 0; i < N; i++)
        {
            cin >> str;
            if(BracketMatch(str))
                cout << "yes!" << endl;
            else
                cout << "no!" << endl;

        }
        cout << "�������ѯ������" << endl;
    }
    return 0;
}
