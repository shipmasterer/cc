#include <iostream>
#include <string>

int main()
{
    unsigned int count = 0;

    std::cout << "���������Ԫ�ظ�����\n";
    std::cin >> count;
    int *x = new int[count];

    for (int i = 0; i < count; i++)
    {
        x[i] = i;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << x[i] << "\n";
        /* code */
    }
    return 0;
}