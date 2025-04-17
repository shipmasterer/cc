#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void add1(int a, int b);
void add1(int a, int b, int c);

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    add1(a, b);
    add1(a, b, c);

    return 0;
}

void add1(int a, int b)
{
    int x;
    x = a + b;
    cout << "жидиA1\n"
         << x << "\n"
         << endl;
}

void add1(int a, int b, int c)
{
    int x;
    x = a + b + c;
    cout << "жидиB2\n"
         << x << "\n"
         << endl;
}