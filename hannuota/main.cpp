//
#include <iostream>
#include <vector>

using namespace std;
using namespace std;
void hannuo(int num, char A, char B, char C,vector<int>& Anum, vector<int>& Bnum, vector<int>& Cnum)
{
    if(num == 1)
    {
        cout << A << " ---" <<*(Anum.end()-1 )<< "---> " << C <<endl;
        Cnum.push_back(*(Anum.end()-1));
        Anum.pop_back();
    }
    else
    {
        hannuo(num - 1, A, C, B,Anum, Cnum, Bnum);
        cout << A << " ---" <<*(Anum.end()-1 )<< "---> " << C << endl;
        Cnum.push_back(*(Anum.end()-1));
        Anum.pop_back();
        hannuo(num - 1, B, A, C, Bnum, Anum, Cnum);
    }

}
int main()
{
    vector<int> Anum;
    vector<int> Bnum;
    vector<int> Cnum;
    int number = 0;
    cout << "请输入盘子个数：" <<endl;
    cin >> number;
    for(int i = number; i > 0; i--)
        Anum.push_back(i);
    char A ='A', B = 'B', C = 'C';
    hannuo(number, A, B, C, Anum, Bnum, Cnum);
    //  cout << "Hello world!" << endl;
    return 0;
}
