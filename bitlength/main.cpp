//求取二进制长度就是最高位1的下标值+1（下标从0开始），比如16 = 10000，则长度是5， 2= 0010，长度为2
#include <iostream>

using namespace std;
int length(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num >>= 1;

    }
    return count;

}

int main()
{
    int number;

    cout << "请输入整数：" << endl;
    while(cin >> number)
    {
        cout << "二进制长度是： " << length(number) << endl;
        cout << "请输入整数：" << endl;
    }

    return 0;
}
