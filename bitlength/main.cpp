//��ȡ�����Ƴ��Ⱦ������λ1���±�ֵ+1���±��0��ʼ��������16 = 10000���򳤶���5�� 2= 0010������Ϊ2
#include <iostream>

using namespace std;
int length(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num >>= 1;

    }
    return count;

}

int main()
{
    int number;

    cout << "������������" << endl;
    while(cin >> number)
    {
        cout << "�����Ƴ����ǣ� " << length(number) << endl;
        cout << "������������" << endl;
    }

    return 0;
}
