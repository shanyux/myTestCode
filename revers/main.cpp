//���ʵĲ�������
#include <iostream>
#include <string>
using namespace std;

void reversestr(string &str, int start, int end)
{
    char c;
    for(int i = 0; i < (end - start + 1) / 2; i++)
    {
        c = str[start + i];
        str[start + i] = str[end - i];
        str[end - i] = c;
    }
//    while (start < end)//�ڶ��ְ취
//    {
//        c = str[start];
//        str[start] = str[end];
//        str[end] = c;
//        start++;
//        end--;
//    }
}
void reverse(string &str)
{
    int startpos = 0;
    //  int endpos = 0;
    reversestr(str, 0, str.size() - 1);
    cout << str <<endl;
    for (unsigned int i = 0; i <= str.size(); i++)
    {

        if (str[i] == ' ' || i == str.size())
        {
            reversestr(str, startpos, i-1);
            cout << str << endl;
            startpos = i + 1;
        }
        //     endpos++;
    }
}
int main()
{
    string str;
    cout << "�������ַ�����" << endl;
    getline(cin, str);
//   cout << str;
    reverse(str);
    cout << "�����" << endl;
    cout << str <<endl;

    return 0;
}
