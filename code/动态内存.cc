#include <iostream>
#include <string>

class Company
{
protected:
    std::string name;

private:
    /* data */
public:
    Company(std::string theName);
    ~Company();
    virtual void printInfo();
    // 虚函数(类似函数重载)，当父类和子类里的函数重名时使用虚函数，这样可以在对象使用本对象的重名的函数
};

Company::Company(std::string theName)
{
    name = theName;
}

Company::~Company()
{
}

void Company::printInfo()
{
    std::cout << "这个公司名字叫" << name << "\n";
}

class TeachCompany : public Company
{
private:
    std::string product;
    /* data */
public:
    TeachCompany(std::string theName, std::string product);
    ~TeachCompany();
    virtual void printInfo();
    // 虚函数(类似函数重载)，当父类和子类里的函数重名时使用虚函数，这样可以在对象使用本对象的重名的函数
};

TeachCompany::TeachCompany(std::string theName, std::string product) : Company(theName)
{
    this->product = product;
}

TeachCompany::~TeachCompany()
{
}

void TeachCompany::printInfo()
{
    std::cout << "公司的主要产品为" << name << "\n";
}

int main()
{
    return 0;
}