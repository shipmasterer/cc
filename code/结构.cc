#include <bits/stdc++.h>
using namespace std;

struct student
{
    /* data */
    int id;
    string name;
    int age;
};

int main()
{
    student a[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin >> a[i].id;
        cin >> a[i].name;
        cin >> a[i].age;
    }

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << i << "\n";
        cout << a[i].id << "\n";
        cout << a[i].name << "\n";
        cout << a[i].age << "\n";
        cout << "\n";
    }

    student *p = a;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout << i << "\n";
        cout << p->id << "\n";
        cout << p->name << "\n";
        cout << p->age << "\n";
        cout << "\n";
        p++;
    }
}