#include <bits/stdc++.h>

class Car
{
private: // 私人的（只允许此类使用，不允许此类的子类或基类使用）
    /* data */
    std::string name = "轿车"; // 此变量只能在此类的函数里使用，在main就在对象里只能用public

public:
    Car(/* args */);
    ~Car();
    std::string color;
    float gas_tank;
    unsigned int wheel;

    void fill_tank(float liter);
    void jiaoche();
};

Car::Car(/* args */) // 构造器
{
}

Car::~Car() // 析构器
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
    // maycar.name="轿车";
    // std::cout<<mycar.name;//错误，在main里不能使用非public的属性
    mycar.fill_tank(i);
    mycar.jiaoche();
    return 0;
}