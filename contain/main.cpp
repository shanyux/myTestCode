//�������������������ַ������ж��໥֮���ַ����Ƿ����
#include <iostream>
#include <cstring>
using namespace std;
bool isContain(char *pStrA, char *pStrB)
{
    int pstralength = strlen(pStrA);
    int pstrblength = strlen(pStrB);
    char temp;
    for(int i= 0; i < pstralength; i++)
    {
        if (strncmp(pStrA, pStrB, pstrblength) == 0)
            return true;
        temp = pStrA[0];
        for (int j = 0; j < pstralength - 2; j++ )
            pStrA[j] = pStrA[j+1];
        pStrA[pstralength - 1] = temp;
    }
    return false;

}
int main()
{
    char chara[10], charb[10];
    cout << "�������ַ���1:" <<endl;
    cin >>chara;
    cout << "�������ַ���2:" <<endl;
    cin >>charb;
    bool flag = isContain(chara, charb);
    if(flag)
        cout << "������" <<endl;
    else
        cout << "��������" <<endl;
 //   cout << "Hello world!" << endl;
    return 0;
}
