//��ά����ת����һά����
#include <iostream>

using namespace std;
void dayyTo1d(int **twodarr, int row, int col, int *onedarr)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            onedarr[i * col + j]  = twodarr[i][j];
        }
    }

}
int main()
{
    int row = 3, col = 3;

    cout << "�������ά����ά�ȣ�����3 4��" << endl;
    cin >> row >> col;
    cout << "���������ݣ�" <<endl;
    int *onedarr = new int[row*col];
    int **twodarr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        twodarr[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> twodarr[i][j];
        }
    }
    cout << "**************��ά����*************" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << twodarr[i][j] <<"  ";
        cout << endl;

    }
    cout << "**************һά����*************" << endl;
    dayyTo1d(twodarr, row, col, onedarr);
    for (int i = 0; i < row * col; i++)
        cout << onedarr[i] << " ";
        for (int i = 0; i < row ; i++)//��ά����һ��һ������
       delete []twodarr[i];
    delete []twodarr;
    delete []onedarr;
    return 0;
}
