#include <bits/stdc++.h>
using namespace std;

void add(int a[], int b);

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        while (!(cin >> a[i])) // 如果输入失败进入while循环
        {
            cin.clear();           // 清空接受区
            cin.ignore(100, '\n'); // 取走换行字符
            cout << "请输入合法值(int)类型\n"
                 << endl;
        }
    }
    add(a, 3);
    return 0;
}

void add(int a[], int b) // 将数组作为参数传递
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum==" << sum << endl;
}
