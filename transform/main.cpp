#include <iostream>
#include <cstdlib>

using namespace std;
bool flag = true;
void HexDecimalTans(int num, int d)
{
    int a = num % d;
    int b = num / d;
    while (flag && b)
        HexDecimalTans(b, d);
    switch (a)
    {
    case 10:
        cout << "A";
        break;
    case 11:
        cout << "B";
        break;
    case 12:
        cout << "C";
        break;
    case 13:
        cout << "D";
        break;
    case 14:
        cout << "E";
        break;
    case 15:
        cout << "F";
        break;
    default :
        cout << a;
    }
    flag = false;
}
int main()
{
    int n = 0,d = 0;
    cout << "����ʮ��������:" << endl;
    cin >> n;
    cout << "�����뽫Ҫ���еĽ���ת����2��8,16��:" << endl;
    cin >> d;
    cout<< "ת����Ľ����";
    HexDecimalTans(n,d);       //����ת������
    cout << endl;
    system("pause");
    return 0;
}
