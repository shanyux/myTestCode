#include <iostream>

using namespace std;

int gongyue(int a, int b){
    return (!b)? a : gongyue(b,a % b);
}
int main()
{
    int a = 0, b = 0;
    cout << "�������������֣�" << endl;
    cin >> a >> b;
    int g= 0;
    if(a > b)
        g = gongyue(a, b);
    else
        g = gongyue(b ,a);
    cout << "���Լ��Ϊ��" << g << endl;
    return 0;
}
