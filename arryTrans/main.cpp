//二维数组转换成一维数组
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

    cout << "请输入二维数组维度，比如3 4：" << endl;
    cin >> row >> col;
    cout << "请输入数据：" <<endl;
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
    cout << "**************二维数组*************" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << twodarr[i][j] <<"  ";
        cout << endl;

    }
    cout << "**************一维数组*************" << endl;
    dayyTo1d(twodarr, row, col, onedarr);
    for (int i = 0; i < row * col; i++)
        cout << onedarr[i] << " ";
        for (int i = 0; i < row ; i++)//二维数组一个一个析构
       delete []twodarr[i];
    delete []twodarr;
    delete []onedarr;
    return 0;
}
