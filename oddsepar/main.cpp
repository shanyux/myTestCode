#include <iostream>

using namespace std;
void oddsepar(int num)
{
    for(int i = 1; i <= num; i++)
        if (i % 2 == 1)
            cout << i << " ";
    cout << endl;
    for(int i= 1; i <= num; i++)
        if (i % 2 == 0)
            cout << i << " ";
    cout << endl;
    cout << endl;

}
int main()
{
    int count;
    cout << "������ѭ����������1С��30��" << endl;
    cin >> count;
    while (count < 1 || count > 30)
    {
        cout << "������ѭ����������1С��30��" << endl;
        cin >> count;
    }
    cout << "���������ݣ�" << endl;
    int *data = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> data[i];

    }
    for (int i = 0; i < count; i++)
        oddsepar(data[i]);

//    cout << "Hello world!" << endl;
    return 0;
}
