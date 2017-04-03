//计算超大数相乘：
#include <iostream>
#include <vector>
#include <string>

using namespace std;
void calculate(const string &numa, const string &numb, vector<int> &res)
{
    for(unsigned int i = 0; i< numa.size(); i++)
        for(unsigned int j = 0; j < numb.size(); j++)
            res[i + j + 1] += (numa[i] - '0') * (numb[j] - '0');//从下标为1开始，为了最后进位
    for(unsigned int k = res.size() - 1; k > 0; k--)
    {
        if (res[k] >= 10)
        {
            res[k - 1] += res[k] / 10;
            res[k] = res[k] % 10;
        }

    }

}
int main()
{
    string bignuma, bignumb;
    cout << "请依次输入两个个大数：" << endl;
    while (cin >> bignuma >> bignumb)
    {
        vector<int> result(bignuma.size() + bignumb.size(), 0);
        calculate(bignuma, bignumb, result);
        cout << "结果是：";
        for(unsigned int i = 0; i < result.size(); i++)
            cout << result[i];
        cout << endl;
        result.clear();
        cout << endl;
        cout << "请依次输入两个个大数：" << endl;
    }


    return 0;
}
