#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX =100;

void randomarr(int num[])
{
    srand((unsigned)time(nullptr));
    for (int i = 0; i!= MAX; i++)
        num[i] = rand() % 900 + 100;
    for (int j = 0; j != MAX; j++)
    {
        cout << num[j] << " ";
        if ((j+1) % 10 == 0)
            cout << endl;

    }


}
void quickSort(int num[], int left, int right )
{
    int l = left;
    int r = right;
    int base = num[left];
    while (l <r)
    {
        while (l < r && base <= num[r])
            r--;
        num[l] = num[r];
        while (l < r && base >= num[l])
            l++;
        num[r] = num[l];
        num[l] = base;
        quickSort(num, left, l-1);
        quickSort(num, l+1, right);
    }
}
int twofind(int num[], int number, int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (num[mid] == number)
            return mid;
        else if(num[mid] > number)
            high = mid -1;
        else
            low = mid + 1;

    }
    return mid;



}
int main()
{
    int intnumarr[MAX];
    int pnumber;
    cout << "������飺" << endl;
    randomarr(intnumarr);
    cout << endl;
    quickSort(intnumarr, 0, MAX - 1);
    cout << "������������飺" << endl;
    for (int j = 0; j != MAX; j++)
    {
        cout << intnumarr[j] << " ";
        if ((j+1) % 10 == 0)
            cout << endl;

    }
    cout << "��������ҵ����֣�" << endl;
    cin >> pnumber;
    int pos = twofind(intnumarr, pnumber, 0, MAX-1);
    cout << "λ�ã�" << pos << endl;
    return 0;
}
