#include <iostream>
#include <string>

class Lovers
{
private:
    /* data */
protected:
    std::string name;

public:
    Lovers(std::string theName);
    ~Lovers();

    int id;
    void kiss(Lovers *lover);
    void ask(Lovers *lover, std::string something);
    friend class Others;
};

Lovers::Lovers(std::string theName)
{
    name = theName;
}

Lovers::~Lovers()
{
}

void Lovers::kiss(Lovers *lover)
{
    std::cout << name << "kiss了" << lover->name << std::endl;
}

void Lovers::ask(Lovers *lover, std::string something)
{
    std::cout << name << "要求" << lover->name << "做" << something << std::endl;
}

class Boyfriend : public Lovers
{
private:
    /* data */
public:
    Boyfriend(std::string theName);
    ~Boyfriend();
};

Boyfriend::Boyfriend(std::string theName) : Lovers(theName)
{
}

Boyfriend::~Boyfriend()
{
}

class Girlfriend : public Lovers
{
private:
    /* data */
public:
    Girlfriend(std::string theName);
    ~Girlfriend();
};

Girlfriend::Girlfriend(std::string theName) : Lovers(theName)
{
}

Girlfriend::~Girlfriend()
{
}

class Others
{
private:
    /* data */
protected:
    std::string name;

public:
    Others(std::string theName);
    ~Others();
    void Kiss(Lovers *lover);
};

Others::Others(std::string theName)
{
    name = theName;
}

Others::~Others()
{
}

void Others::Kiss(Lovers *lover)
{
    std::cout << name << "kiss了" << lover->name << std::endl;
}

int main()
{
    Boyfriend boy("男A");
    Girlfriend girl("女B");
    Others other("其他人C");

    boy.kiss(&girl);
    boy.ask(&girl, "AAA");

    girl.kiss(&boy);
    girl.ask(&boy, "BBB");

    other.Kiss(&girl);
    return 0;
}