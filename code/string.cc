#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "����һ���ַ�����";
    // cin >> str;//cin���ո����
    getline(cin, str);
    cout << str << "\n";
    return 0;
}