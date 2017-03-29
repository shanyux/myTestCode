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
    cout << "输入十进制数字:" << endl;
    cin >> n;
    cout << "请输入将要进行的进制转换（2，8,16）:" << endl;
    cin >> d;
    cout<< "转换后的结果：";
    HexDecimalTans(n,d);       //调用转换函数
    cout << endl;
    system("pause");
    return 0;
}
