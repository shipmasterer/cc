#include <bits/stdc++.h>
using namespace std;

void add(int a[], int b);

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        while (!(cin >> a[i])) // �������ʧ�ܽ���whileѭ��
        {
            cin.clear();           // ��ս�����
            cin.ignore(100, '\n'); // ȡ�߻����ַ�
            cout << "������Ϸ�ֵ(int)����\n"
                 << endl;
        }
    }
    add(a, 3);
    return 0;
}

void add(int a[], int b) // ��������Ϊ��������
{
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum==" << sum << endl;
}
