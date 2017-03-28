//整数的二进制数中1的个数：
/*
*函数功能：求取整数对应二进制数中1的个数
*函数原形：int Count(int z);
*参数：int z，要计算的整数
*返回值：返回整数对应二进制数中1的个数*/
#include <iostream>

using namespace std;
int count(int);

int main()
{
    int num;
    cout << "请输入整数：";

    while (cin >> num)
    {
        cout << "二进制数中1的个数为" << count(num) << endl;
        cout << "请输入整数：";
    }

    cout << "Hello world!" << endl;
    return 0;
}
int count(int number)
{
    int cnt = 0;
    while(number)
    {
        //第一种算法：复杂度较低
        //cnt += number & 0x01;
        //number >>= 1;
        //第二种算法：
        // number &= number - 1;
        //cnt++;
        if (number % 2 == 1)
            cnt++;
        number /= 2;
    }
    return cnt;
}
