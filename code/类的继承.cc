#include <iostream>
#include <string>

class Animal
{
public:
    std::string mouth;

    void eat();
    void sleep();
};

class Pig : public Animal
{
private:
    /* data */
public:
    Pig(/* args */);
    ~Pig();

    void climb();
};

Pig ::Pig(/* args */)
{
}

Pig ::~Pig()
{
}

class Turtle : public Animal
{
private:
    /* data */
public:
    Turtle(/* args */);
    ~Turtle();

    void swim();
};

Turtle::Turtle(/* args */)
{
}

Turtle::~Turtle()
{
}

void Animal::eat()
{
    std::cout << "���ڳ�" << std::endl;
}

void Animal::sleep()
{
    std::cout << "����˯��" << std::endl;
}

void Pig::climb()
{
    std::cout << "��������" << std::endl;
}

void Turtle::swim()
{
    std::cout << "������Ӿ" << std::endl;
}

int main()
{
    Pig pig;
    Turtle turtle;

    pig.eat();
    turtle.eat();

    pig.climb();
    turtle.swim();
    return 0;
}