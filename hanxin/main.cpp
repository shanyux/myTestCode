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
    cout << "���������ֶ��еĶ�β����:" << endl;
    for(int i = 0; i< 3; i++)
        cin >> num[i];
    while (num[0]> 2 || num[1] > 4 || num[2] > 6)
    {
        cout << "��������,���������룺" << endl;
        for(int i = 0; i< 3; i++)
            cin >> num[i];
    }
    int count = hanxin(num);
    cout << "������" << count << endl;
    return 0;
}
