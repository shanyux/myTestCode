//ÄæĞòÊä³ö×Ö·û´®
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
void reverse(char ch[], int left, int right)
{
    while(left < right)
    {
        char c = ch[left];
        ch[left++] = ch[right];
        ch[right--] = c;

    }


}
int main()
{
    char ch[100];
    cout << "ÇëÊäÈë×Ö·û£º" << endl;
    cin >> ch;
    int length = strlen(ch);
    // cout << length << sizeof(ch) << endl;;
    reverse(ch, 0, length-1);
    for(int i=0; i<length; i++)
        cout<<ch[i];
    system("pause");
    return 0;
}
