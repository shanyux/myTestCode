//问题描述：输入两个字符串，判断相互之间字符串是否包含
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
    cout << "请输入字符串1:" <<endl;
    cin >>chara;
    cout << "请输入字符串2:" <<endl;
    cin >>charb;
    bool flag = isContain(chara, charb);
    if(flag)
        cout << "包含！" <<endl;
    else
        cout << "不包含！" <<endl;
 //   cout << "Hello world!" << endl;
    return 0;
}
