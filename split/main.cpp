//string的切割，stl没有提供函数
#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<string> split(const string &str, const string &seperater)
{
    string::size_type pos1 = 0,pos2;
    vector<string> result;
    pos2 = str.find(seperater);
    while (string::npos != pos2)
    {
        result.push_back(str.substr(pos1, pos2 - pos1));
        pos1 = pos2 + seperater.size();
        pos2 = str.find(seperater, pos1);
    }
    if (pos1 != str.size())
    {
        result.push_back(str.substr(pos1));
    }
    return result;


}
int main()
{
    string s = "ssss*sss*ss*s*";
    vector<string> str = split(s,"*");
    vector<string>::iterator itr;
    for (itr = str.begin(); itr != str.end(); itr++)
        cout << *itr << endl;
    //  cout << "Hello world!" << endl;
    return 0;
}

