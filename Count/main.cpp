//�����Ķ���������1�ĸ�����
/*
*�������ܣ���ȡ������Ӧ����������1�ĸ���
*����ԭ�Σ�int Count(int z);
*������int z��Ҫ���������
*����ֵ������������Ӧ����������1�ĸ���*/
#include <iostream>

using namespace std;
int count(int);

int main()
{
    int num;
    cout << "������������";

    while (cin >> num)
    {
        cout << "����������1�ĸ���Ϊ" << count(num) << endl;
        cout << "������������";
    }

    cout << "Hello world!" << endl;
    return 0;
}
int count(int number)
{
    int cnt = 0;
    while(number)
    {
        //��һ���㷨�����ӶȽϵ�
        //cnt += number & 0x01;
        //number >>= 1;
        //�ڶ����㷨��
        // number &= number - 1;
        //cnt++;
        if (number % 2 == 1)
            cnt++;
        number /= 2;
    }
    return cnt;
}
