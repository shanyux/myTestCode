//ĳ�����Ƿ�Ϊ2�Ĵ��ݣ�
/*
*�������ܣ��ж�һ�������Ƿ�Ϊ2�Ĵ���
*����ԭ�Σ�bool IsTwoN(int n);
*������int n��Ҫ�жϵ�����
*����ֵ��bool�ͱ��������������
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
bool Is2N(int);
using namespace std;

int main()
{
    int num;
    cout << "�������֣�" << endl;
    cin >> num;
    if(Is2N(num))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
bool Is2N(int num)
{
    //if (num == static_cast<int>(pow(2.0, log10(static_cast<double>(num)) / log10(2.0))))//����1
    if (num > 0 && (num & num - 1) == 0)
        return true;
    return false;
}
