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
    cout << "������飺" << endl;
    randomnum(intnumarr);
    cout << endl;
    cout << "��������ҵ����֣�" << endl;
    while(cin >> pnumber)
    {
        int pos = findnum(intnumarr, pnumber);
        if (pos != MAX)
            cout << "�������ֵ�λ�ã� " << pos << endl;
        else
            cout << "δ���ҵ�����" << endl;
    }
    system("pause");
    return 0;
}
