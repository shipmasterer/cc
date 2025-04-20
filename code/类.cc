#include <bits/stdc++.h>

class Car
{
private:
    /* data */
public:
    Car(/* args */);
    ~Car();
    std::string color;
    float gas_tank;
    unsigned int wheel;

    void fill_tank(float liter);
};

Car::Car(/* args */)
{
}

Car::~Car()
{
}

void Car::fill_tank(float liter)
{
    gas_tank += liter;
    std::cout << gas_tank << "\n";
}

int main()
{
    float i = 1.1;
    Car mycar;

    mycar.fill_tank(i);

    return 0;
}