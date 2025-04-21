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
    std::cout << "正在吃" << std::endl;
}

void Animal::sleep()
{
    std::cout << "正在睡觉" << std::endl;
}

void Pig::climb()
{
    std::cout << "正在爬树" << std::endl;
}

void Turtle::swim()
{
    std::cout << "正在游泳" << std::endl;
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