//练习5，统计指定数据出现次数：
//
/*
*问题描述：用随机函数生成100个在100到999之间的整数，设计程序统计这些三位数中十位是分别是0-9出现次数
*问题示例：无
*函数功能：统计三位数中十位数0-9出现的次数
*函数原形：void DigitCount(int num[], int count[])
*参数：int num[], 欲统计的数组，int count[]存储统计结果  */
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
void randNum(int randnum[]);
void count(int num[], int number[]);
const int MAX = 100;
using namespace std;

int main()
{
    int intrandnumber[MAX];//随机数
    int number[10];//十位是分别是0-9出现次数个数
    memset(intrandnumber, 0, sizeof (intrandnumber));
    memset(number, 0, sizeof (number));
    randNum(intrandnumber);
    cout << endl;
    count(intrandnumber, number);
    for(int i = 0; i != 10; i++)
        cout << "十位数为 " << i << " 的个数: " << number[i] << endl;
system("pause");

    // cout << "Hello world!" << endl;
    return 0;
}
void randNum(int randnum[])
{
    srand((unsigned)time(0));
    for(int i = 0; i != MAX; i++)
        randnum[i] = rand() % 900 + 100;
    cout << "随机数：" << endl;
    for(int j = 0; j != MAX; j++)
    {
        cout << randnum[j] << " ";
        if((j + 1) % 10 == 0)
            cout << endl;
    }
}
void count(int randnum[], int number[])
{
    for(int i = 0; i != MAX; i++)
    {
        ++number[(randnum[i] / 10) % 10];
    }
}














//形参可以是数组名，也可以是指针变量，它们用来接收实参传来的地址。如果形参是数组名，它代表的是形参数组首元素的地址。
//在调用函数时，将实参数组首元素的地址传递给形参数组名。这样，实参数组和形参数组就共占同一段内存单元.
//在用变量作函数参数时，只能将实参变量的值传给形参变量，在调用函数过程中如果改变了形参的值，对实参没有影响，
//即实参的值不因形参的值改变而改变。而用数组名作函数实参时，改变形参数组元素的值将同时改变实参数组元素的值。
