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
    std::cout << "进入基类构造器....\n";
    std::cout << "基类构造器doing.....\n";
}

BaseClass::~BaseClass()
{
    std::cout << "进入基类析造器....\n";
    std::cout << "基类析造器doing.....\n";
}

void BaseClass::doSomething()
{
    std::cout << "基类函数——doSomething\n";
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
    std::cout << "进入子类构造器....\n";
    std::cout << "子类构造器doing.....\n";
}

SubClass::~SubClass()
{
    std::cout << "进入子类析造器....\n";
    std::cout << "子类析构器doing.....\n";
}

int main()
{
    SubClass subclass;
    subclass.doSomething();

    std::cout << "结束\n";
    return 0;
}