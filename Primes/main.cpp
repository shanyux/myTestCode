//指定范围内的素数：
/*
*函数功能：判断指定范围内素数个数
*函数原形：int Primes( int n ,int m )
*参数：
int n：请输入想要确认的素数范围下限
int m：请输入想要确认的素数范围上限
*返回值：n到m范围内素数的个数*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
bool prime(int);
int primes(int, int);

int main()
{
    int a, b;
    cout << "下限：" << endl;
    cin >> a;
    cout << "上限：" << endl;
    cin >> b;
    int number = primes(a, b);
    cout << "素数个数" << number;

    return 0;
}
bool prime(int num)//素数
{
    num = abs(num);
    for (int i = 2; i <= static_cast<int>(sqrt(static_cast<double>(num))); i++)
        if (num % i == 0)
            return false;
    return true;
}
int primes(int a, int b)//计数
{
    int num = 0;
    for (int i = a; i <= b; i++)
        if (prime(i))
            num++;
    return num;
}
