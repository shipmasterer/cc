#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 55;
    cout << "a==" << a << "\n"
         << endl;
    int *p = &a;
    cout << "*P==" << *p << "\n"
         << endl;

    cout << "\n"
         << endl;

    *p = 77;
    cout << "a==" << a << "\n"
         << endl;
    cout << "*P==" << *p << "\n"
         << endl;
}