//�ж��Ƿ�Ϊ������
/*
*�������ܣ��ж�һ����������Ƿ�Ϊ����
*����ԭ�Σ�bool Prime( int x )
*������int x����Ҫ�жϵ���
*����ֵ��bool�ͱ������ж��Ƿ�������
*��ע����Ҫ����ͷ�ļ�<math.h>*/
#include <iostream>
#include <cmath>
#include <cstdlib> //system("pause")

using namespace std;
bool Prime(int);
int main()
{
    int number;
    while (true)
    {
        cout << "�������ݣ�";
        cin >> number;
        bool flag = Prime(number);
        if(flag)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    system("pause");

    return 0;
}

bool Prime(int num)
{
    num = abs(num);
    if (num < 1)
        return false;
    else
        for (int i = 2; i <= static_cast<int>(sqrt(static_cast<double>(num))); i++)
        {
            if (num % i == 0)
                return false;
        }
    return true;
}
