//�������������һ������ͳ������������ַ��������ֵĸ�������ĸ�ĸ����������ַ��ĸ���
//����ʾ����123asd������3����ĸ3�������ַ�0
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
const int MAX = 1024;
void charcal(string str, int count[])
{
    int i = 0;
    while (str[i])
    {
        if ((str[i] >= '0') && (str[i] <='9'))
            count[0]++;
        else if ((str[i] >= 'a') && (str[i] <= 'z'))
            count[1]++;
        else
            count[2]++;
        i++;
    }

}

int main()
{
    string str;
    int count[3];
    memset(count, 0, sizeof(count));
    cout<<"�����ַ���: "<<endl;
    getline(cin, str);
    charcal(str, count);//ͳ��
//   cout << "Hello world!" << endl;
    cout<<"���֣�"<<count[0]<<endl;

    cout<<"�ַ���"<< count[1]<<endl;

    cout<<"�����ַ���"<<count[2]<<endl;

    system("pause");
    return 0;
}
