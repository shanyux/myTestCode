//�ҳ�����Ȼ��1��2��... ��n��0<n<10������ȡr(0<r<=n)������������ϡ�
//����
//����n��r��
//���
//���ض�˳�����������ϡ�
//�ض�˳��ÿһ������е�ֵ�Ӵ�С���У����֮�䰴���ֵ������С�
//��������
//5 3
//�������
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
    cout << "�����뷶Χn(0 < n < 11):" << endl;
    cin >> n;
    while (n < 1 || n > 10)
    {
        cout << "n���������������룺" << endl;
        cin >> n;

    }
    cout << "���������ָ���r(0 < r < n + 1):" << endl;
    cin >> r;
    while (r < 1 || r > n)
    {
        cout << "r���������������룺" << endl;
        cin >> r;

    }
    DFS(n, 1, r);
    return 0;
}
