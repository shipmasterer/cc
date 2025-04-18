#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "输入一串字符串：";
    // cin >> str;//cin到空格结束
    getline(cin, str);
    cout << str << "\n";
    return 0;
}