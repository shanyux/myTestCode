#include <iostream>

using namespace std;

bool leap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;

}
int days(int year, int month, int day)
{
    int daynum = 0;
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//   int b[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < month - 1; i++)
    {
        daynum += months[i];
    }
    daynum += day;
    if(month > 2 && leap(year))
        //      if(leap(S
        daynum++;
    return daynum;

}
int main()
{
    //  cout << "Hello world!" << endl;
//   return 0;
    int year, month, day;
    bool flag = true;
    cout << "请输入年 月 日：" << endl;
    cin >> year >> month >> day;
    if(month > 12 || month <1 || day >31 || day < 1)
        flag = false;
    if(leap(year) && day > 29)
        flag = false;
    if(!leap(year) && day > 28)
        return false;
    while(!flag)
    {
        flag = true;
        cout << "请重新输入年 月 日：" << endl;
        cin >> year >> month >> day;
        if(month > 12 || month < 1 || day > 31 || day < 1)
            flag = false;
        if((leap(year) && day > 29))
            flag = false;
        if(!leap(year) && day > 28)
            return false;
    }
    cout << "第" << days(year, month, day) << "天" <<endl;



}
