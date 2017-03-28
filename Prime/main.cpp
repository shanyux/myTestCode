//判断是否为素数：
/*
*函数功能：判断一个输入的数是否为素数
*函数原形：bool Prime( int x )
*参数：int x：将要判断的数
*返回值：bool型变量，判断是否是素数
*备注：需要包含头文件<math.h>*/
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
        cout << "输入数据：";
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
