#include <bits/stdc++.h>
using namespace std;

union mima
{
    /* data */
    unsigned long birthday;
    unsigned short ssn;
    char *pet;
};

int main()
{
    mima mima_1;

    mima_1.birthday = 2020;
    cout << "mima_1.birthday==" << mima_1.birthday << "\n";

    mima_1.pet = "jiaozi";
    cout << "mima_1.birthday==" << mima_1.birthday << "\n";
    cout << "mima_1.prt==" << mima_1.pet << "\n";

    return 0;
}