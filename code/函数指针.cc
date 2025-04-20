#include <bits/stdc++.h>
using namespace std;

void changeA(int *a);

int main()
{
    int a = 24;

    cout << "a==" << a << "\n";
    changeA(&a);
    cout << "a==" << a << "\n";
    return 0;
}

void changeA(int *a)
{
    *a = *a + 1;
    cout << "a==" << *a << "\n";
}
