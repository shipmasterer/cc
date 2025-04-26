#include <iostream>
#include <string>

class Person
{
protected:
    std::string name;

private:
    /* data */
public:
    Person(std::string theName);
    ~Person();
    void introduce();
};

Person::Person(std::string theName)
{
    name = theName;
}

void Person::introduce()
{
    std::cout << "大家好，我是" << name << ".\n\n";
}

Person::~Person()
{
}

class Teacher : public Person
{
protected:
    std::string classes;

private:
    /* data */
public:
    Teacher(std::string theName, std::string theClass);
    ~Teacher();
    void teach();
    void introduce();
};

Teacher::Teacher(std::string theName, std::string theClass) : Person(theName)
{
    classes = theClass;
}

Teacher::~Teacher()
{
}

void Teacher::introduce()
{
    std::cout << "我是" << name << "，我教" << classes << ".\n";
}

void Teacher::teach()
{
    std::cout << name << "教" << classes << ".\n";
}

class Student : public Person
{
protected:
    std::string classes;

private:
    /* data */
public:
    Student(std::string theName, std::string theClass);
    ~Student();
    void attendClass();
    void introduce();
};

Student::Student(std::string theName, std::string theClass) : Person(theName)
{
    classes = theClass;
}

Student::~Student()
{
}

void Student::introduce()
{
    std::cout << "我是" << name << "，我在" << classes << "学习\n";
}
void Student::attendClass()
{
    std::cout << name << "加入" << classes << "学习\n";
}

class TeachingStudent : public Student, public Teacher
{
private:
    /* data */
public:
    TeachingStudent(std::string theName, std::string classTeaching, std::string classAttending);
    ~TeachingStudent();
    void introduce();
};

TeachingStudent ::TeachingStudent(std::string theName, std::string classTeaching, std::string classAttending) : Teacher(theName, classTeaching), Student(theName, classAttending)
{
}

TeachingStudent ::~TeachingStudent()
{
}

void TeachingStudent::introduce()
{
    std::cout << "我是" << Student::name << "，我在" << Teacher::classes << "教课\n";
    std::cout << Student::name << Student::classes << "学习\n\n";
}

int main()
{
    Teacher teacher("老师", "入门班");
    Student student("学生", "入门班");
    TeachingStudent teachingstudent("助理", "入门班", "进阶班");

    teacher.introduce();
    teacher.teach();
    student.introduce();
    student.attendClass();
    teachingstudent.introduce();
    teachingstudent.teach();
    teachingstudent.attendClass();
    return 0;
}