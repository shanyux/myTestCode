//�߼�����
#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    //return 0;
 //   int a, b, c;
    for (int a = 1; a < 4; a++)
        for (int b = 1; b < 4; b++)
            for (int c = 1; c < 4; c++)
            {
                if(a != 1 && c != 1 && c !=3 && a != b && a != c && b != c){
                    cout << "a��" << static_cast<char>('x' + a - 1)<<  "���" << endl;
                    cout << "b��" << static_cast<char>('x' + b - 1)<<  "���" << endl;
                    cout << "c��" << static_cast<char>('x' + c - 1)<<  "���" << endl;
                }

            }
}
