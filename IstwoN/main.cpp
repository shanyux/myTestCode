//某整数是否为2的次幂：
/*
*函数功能：判断一个整数是否为2的次幂
*函数原形：bool IsTwoN(int n);
*参数：int n，要判断的整数
*返回值：bool型变量，表征是与否
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
bool Is2N(int);
using namespace std;

int main()
{
    int num;
    cout << "输入数字：" << endl;
    cin >> num;
    if(Is2N(num))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
bool Is2N(int num)
{
    //if (num == static_cast<int>(pow(2.0, log10(static_cast<double>(num)) / log10(2.0))))//方法1
    if (num > 0 && (num & num - 1) == 0)
        return true;
    return false;
}
