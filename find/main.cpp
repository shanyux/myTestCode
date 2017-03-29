#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX = 100;
void randomnum(int num[])
{
    srand((unsigned)time(NULL));
    for (int i= 0; i != MAX; i++)
        num[i] = rand() % 900 + 100;
    for (int j = 0; j != MAX; j++)
    {
        cout << num[j] << " ";
        if((j+1) % 10 == 0)
            cout << endl;
    }

}
int findnum(int num[], int number)
{
    for (int i =0; i != MAX; i++)
        if (num[i] == number)
            return i;
    return MAX;



}
int main()
{
    int intnumarr[MAX];
    int pnumber;
    cout << "随机数组：" << endl;
    randomnum(intnumarr);
    cout << endl;
    cout << "请输入查找的数字：" << endl;
    while(cin >> pnumber)
    {
        int pos = findnum(intnumarr, pnumber);
        if (pos != MAX)
            cout << "输入数字的位置： " << pos << endl;
        else
            cout << "未查找到数字" << endl;
    }
    system("pause");
    return 0;
}
