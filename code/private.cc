#include <bits/stdc++.h>

class Car
{
private: // ˽�˵ģ�ֻ�������ʹ�ã�������������������ʹ�ã�
    /* data */
    std::string name = "�γ�"; // �˱���ֻ���ڴ���ĺ�����ʹ�ã���main���ڶ�����ֻ����public

public:
    Car(/* args */);
    ~Car();
    std::string color;
    float gas_tank;
    unsigned int wheel;

    void fill_tank(float liter);
    void jiaoche();
};

Car::Car(/* args */) // ������
{
}

Car::~Car() // ������
{
}

void Car::fill_tank(float liter)
{
    gas_tank += liter;
    std::cout << gas_tank << "\n";
}

void Car::jiaoche()
{
    std::cin >> name;
    std::cout << name << "\n";
}

int main()
{
    float i = 1.1;
    Car mycar;
    // maycar.name="�γ�";
    // std::cout<<mycar.name;//������main�ﲻ��ʹ�÷�public������
    mycar.fill_tank(i);
    mycar.jiaoche();
    return 0;
}