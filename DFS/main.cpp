//找出从自然数1、2、... 、n（0<n<10）中任取r(0<r<=n)个数的所有组合。
//输入
//输入n、r。
//输出
//按特定顺序输出所有组合。
//特定顺序：每一个组合中的值从大到小排列，组合之间按逆字典序排列。
//样例输入
//5 3
//样例输出
//543
//542
//541
//532
//531
//521
//432
//431
//421
//321
#include <iostream>
#include <cstring>
using namespace std;
//static int visit[11];
static int arr[11];
void DFS(int n, int cur, int r)
{
    if (cur > r)
        return;
    for (int i = n; i > 0 ; i--)
    {
        // if (!visit[i])
        //  {
        // visit[i] = 1;
        arr[cur] = i;
        if (cur == r)
        {
            for (int i = 1; i < r + 1; i++)
                cout << arr[i];
            cout << endl;
        }
        DFS(i - 1, cur + 1, r);
        //  visit[i] = 0;
        //   }
    }
}
int main()
{


    memset(visit, 0, 11);
    int n = 5, r = 3;
    cout << "请输入范围n(0 < n < 11):" << endl;
    cin >> n;
    while (n < 1 || n > 10)
    {
        cout << "n输入有误，重新输入：" << endl;
        cin >> n;

    }
    cout << "请输入数字个数r(0 < r < n + 1):" << endl;
    cin >> r;
    while (r < 1 || r > n)
    {
        cout << "r输入有误，重新输入：" << endl;
        cin >> r;

    }
    DFS(n, 1, r);
    return 0;
}
