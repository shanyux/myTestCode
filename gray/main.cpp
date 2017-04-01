//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int changebit(int bit)
//{
//    if(bit == 1)
//        return 0;
//    else
//        return 1;
//}
//
//void gray(int nbits)
//{
//    int i = 0, j = 0;
//    int *pgray = new int[nbits];
//    for (; i < nbits; i++)
//    {
//        pgray[i] = 0;
//        cout << 0;
//    }
//    cout << endl;
//    for (i = 1; i < static_cast<int>(pow(2.0, static_cast<double>(nbits))); i++)
//    {
//        if(i % 2 == 1)
//        {
//            pgray[nbits - 1] = changebit(pgray[nbits - 1]);
//            for (j = 0; j < nbits; j++)
//                cout << pgray[j];
//            cout << endl;
//        }
//        else
//        {
//            for (j = nbits - 1; j > 0; j--)
//            {
//                if (pgray[j] == 1)
//                {
//                    pgray[j - 1] = changebit(pgray[j - 1]);
//                    break;
//                }
//            }
//            for (j = 0; j < nbits; j++)
//                cout << pgray[j];
//            cout << endl;
//        }
//
//    }
//
//}
//
//
//int main()
//{
//    int nBits = 0;
//    cout << "请输入位元长度：" <<endl;
//    cin >> nBits;
//    while (nBits < 1)
//    {
//        cout << "输入错误，请重新输入：" <<endl;
//        cin >> nBits;
//    }
//    gray(nBits);
//
//}
//



#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


class Gray
{
public:
    vector<int> grayCode(int bit)
    {
        vector<int> grayint;
        int num = pow(2, bit);
        int graycode[bit];
        for(int i = 0; i < num; i++)
        {
            intTobit(graycode, i, bit );
            bitTogray(graycode, bit);
            grayint.push_back(grayToint(graycode, bit));
        }
        return grayint;
    }
    void intTobit(int graycode[], int i, int bit)
    {
        for(int j = bit-1; j >= 0; j--)
        {
            graycode[j] = i % 2;
            i /= 2;
        }
    }
    void bitTogray(int graycode[], int bit)
    {
        int temp[bit];
        temp[0] = 0 ^ graycode[0];
        for( int i = 1; i < bit; i++)
        {
            temp[i] = graycode[i - 1] ^ graycode[i];
        }
        for(int j = 0; j< bit; j++)
        {
            graycode[j] = temp[j];
            cout << graycode[j];
        }
        cout << endl;
    }
    int grayToint(int graycode[],int bit)
    {
        int number = 0;
        for(int i = 0; i < bit; i++)
        {
            if(graycode[i] == 1)
                number += pow(2.0, bit-i-1);
        }
        return number;
    }

};
int main()
{
    vector<int> test;
    int nBits;
    Gray g;
    cout << "请输入位元长度：" <<endl;
    cin >> nBits;
    while (nBits < 1)
    {
        cout << "输入错误，请重新输入：" <<endl;
        cin >> nBits;
    }
    test = g.grayCode(nBits);
    vector<int>::iterator iter;
    for(iter = test.begin(); iter != test.end(); iter++)
        cout << *iter <<" ";

}
//
//#include <iostream>
//#include <vector>
//#include <math.h>
//#include <string.h>
//using namespace std;
//
//class Solution{
//public:
//    vector<int> grayCode(int n){
//        vector<int> gray;
//        if (n < 1) {
//            gray.push_back(0);
//            return gray;
//        }
//        int num = pow(2,n);
//        int graycode[n];
//        for (int i = 0; i < num; i++) {
//            IntToBit(graycode, i, n);
//            BitToGray(graycode,n);
//            gray.push_back(GrayBitToInt(graycode, n));
//        }
//        return gray;
//    }
//
//    void IntToBit(int *code, int n, int bit){
//        int i = bit-1;
//        while (i >= 0) {
//            code[i--] = n%2;
//            n/=2;
//        }
//    }
//
//    void BitToGray(int *code, int bit){
//        int temp[bit];
//        temp[0] = 0^code[0];
//        for (int i = 0; i < bit-1; i++) {
//            temp[i+1] = code[i]^code[i+1];
//        }
//        for (int i = 0; i < bit; i++) {
//            code[i] = temp[i];
//        }
//    }
//
//    int GrayBitToInt(int *code, int bit){
//        int number = 0;
//        for (int i = 0; i < bit; i++) {
//            if (code[i] == 1) {
//                number += pow(2, bit-i-1);
//            }
//        }
//        return number;
//    }
//
//};
//
//int main(int argc, const char * argv[]) {
//    vector<int> test;
//    Solution sl;
//    test = sl.grayCode(3);
//    vector<int>::iterator iter;
//    for (iter = test.begin(); iter != test.end(); iter++) {
//        cout << *iter << " ";
//    }
//
//    return 0;
//}
