//��ϰ5��ͳ��ָ�����ݳ��ִ�����
//
/*
*�����������������������100����100��999֮�����������Ƴ���ͳ����Щ��λ����ʮλ�Ƿֱ���0-9���ִ���
*����ʾ������
*�������ܣ�ͳ����λ����ʮλ��0-9���ֵĴ���
*����ԭ�Σ�void DigitCount(int num[], int count[])
*������int num[], ��ͳ�Ƶ����飬int count[]�洢ͳ�ƽ��  */
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
void randNum(int randnum[]);
void count(int num[], int number[]);
const int MAX = 100;
using namespace std;

int main()
{
    int intrandnumber[MAX];//�����
    int number[10];//ʮλ�Ƿֱ���0-9���ִ�������
    memset(intrandnumber, 0, sizeof (intrandnumber));
    memset(number, 0, sizeof (number));
    randNum(intrandnumber);
    cout << endl;
    count(intrandnumber, number);
    for(int i = 0; i != 10; i++)
        cout << "ʮλ��Ϊ " << i << " �ĸ���: " << number[i] << endl;
system("pause");

    // cout << "Hello world!" << endl;
    return 0;
}
void randNum(int randnum[])
{
    srand((unsigned)time(0));
    for(int i = 0; i != MAX; i++)
        randnum[i] = rand() % 900 + 100;
    cout << "�������" << endl;
    for(int j = 0; j != MAX; j++)
    {
        cout << randnum[j] << " ";
        if((j + 1) % 10 == 0)
            cout << endl;
    }
}
void count(int randnum[], int number[])
{
    for(int i = 0; i != MAX; i++)
    {
        ++number[(randnum[i] / 10) % 10];
    }
}














//�βο�������������Ҳ������ָ�������������������ʵ�δ����ĵ�ַ������β���������������������β�������Ԫ�صĵ�ַ��
//�ڵ��ú���ʱ����ʵ��������Ԫ�صĵ�ַ���ݸ��β���������������ʵ��������β�����͹�ռͬһ���ڴ浥Ԫ.
//���ñ�������������ʱ��ֻ�ܽ�ʵ�α�����ֵ�����βα������ڵ��ú�������������ı����βε�ֵ����ʵ��û��Ӱ�죬
//��ʵ�ε�ֵ�����βε�ֵ�ı���ı䡣����������������ʵ��ʱ���ı��β�����Ԫ�ص�ֵ��ͬʱ�ı�ʵ������Ԫ�ص�ֵ��
