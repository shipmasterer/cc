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
    // �麯��(���ƺ�������)���������������ĺ�������ʱʹ���麯�������������ڶ���ʹ�ñ�����������ĺ���
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
    std::cout << "�����˾���ֽ�" << name << "\n";
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
    // �麯��(���ƺ�������)���������������ĺ�������ʱʹ���麯�������������ڶ���ʹ�ñ�����������ĺ���
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
    std::cout << "�����˾���ֽ�" << name << "\n";
    std::cout << "��˾����Ҫ��ƷΪ" << product << "\n";
}

int main()
{
    Company *company = new Company("APPLE");
    company->printInfo();

    delete company;
    company = NULL;

    company = new TeachCompany("APPLE", "IPHONE");
    company->printInfo();

    delete company;
    company = NULL;

    return 0;
}