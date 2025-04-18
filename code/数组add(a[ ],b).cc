#include <bits/stdc++.h>
using namespace std;

void add(int a[], int b);

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        while (!(cin >> a[i])) //
        {
            cin.clear();           //
            cin.ignore(100, '\n'); //
            cout << "\n"
                 << endl;
        }
    }
    add(a, 3);
    return 0;
}

void add(int a[], int b)
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum==" << sum << endl;
}
