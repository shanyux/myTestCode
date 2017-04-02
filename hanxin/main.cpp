//相传韩信才智过人，从不直接清点自己军队的人数，只要让士兵先后以三人一排、五人一排、七人一排地变换队形，而他每次只掠一眼队伍的排尾就知道总人数了。输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7），输出总人数的最小值（或报告无解）。已知总人数不小于10，不超过100 。
//输入
//输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。例如,输入：2 4 5
//输出
//输出总人数的最小值（或报告无解，即输出No answer）。实例，输出：89
#include <iostream>

using namespace std;
int hanxin(int num[])
{
    int person = -1;
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == num[0] && i % 5 == num[1] && i% 7 == num[2])
            person = i;

    }
     return person;
}
int main()
{
    int num[3];
    cout << "请输入三种队列的队尾人数:" << endl;
    for(int i = 0; i< 3; i++)
        cin >> num[i];
    while (num[0]> 2 || num[1] > 4 || num[2] > 6)
    {
        cout << "输入有误,请重新输入：" << endl;
        for(int i = 0; i< 3; i++)
            cin >> num[i];
    }
    int count = hanxin(num);
    cout << "人数：" << count << endl;
    return 0;
}
