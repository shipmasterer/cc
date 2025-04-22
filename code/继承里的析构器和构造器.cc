#include <iostream>
#include <string>

class BaseClass
{
private:
    /* data */
public:
    BaseClass(/* args */);
    ~BaseClass();
    void doSomething();
};

BaseClass::BaseClass(/* args */)
{
    std::cout << "������๹����....\n";
    std::cout << "���๹����doing.....\n";
}

BaseClass::~BaseClass()
{
    std::cout << "�������������....\n";
    std::cout << "����������doing.....\n";
}

void BaseClass::doSomething()
{
    std::cout << "���ຯ������doSomething\n";
}

class SubClass : public BaseClass
{
private:
    /* data */
public:
    SubClass(/* args */);
    ~SubClass();
};

SubClass::SubClass(/* args */)
{
    std::cout << "�������๹����....\n";
    std::cout << "���๹����doing.....\n";
}

SubClass::~SubClass()
{
    std::cout << "��������������....\n";
    std::cout << "����������doing.....\n";
}

int main()
{
    SubClass subclass;
    subclass.doSomething();

    std::cout << "����\n";
    return 0;
}