//ָ����Χ�ڵ�������
/*
*�������ܣ��ж�ָ����Χ����������
*����ԭ�Σ�int Primes( int n ,int m )
*������
int n����������Ҫȷ�ϵ�������Χ����
int m����������Ҫȷ�ϵ�������Χ����
*����ֵ��n��m��Χ�������ĸ���*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
bool prime(int);
int primes(int, int);

int main()
{
    int a, b;
    cout << "���ޣ�" << endl;
    cin >> a;
    cout << "���ޣ�" << endl;
    cin >> b;
    int number = primes(a, b);
    cout << "��������" << number;

    return 0;
}
bool prime(int num)//����
{
    num = abs(num);
    for (int i = 2; i <= static_cast<int>(sqrt(static_cast<double>(num))); i++)
        if (num % i == 0)
            return false;
    return true;
}
int primes(int a, int b)//����
{
    int num = 0;
    for (int i = a; i <= b; i++)
        if (prime(i))
            num++;
    return num;
}
