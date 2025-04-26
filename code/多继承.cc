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
    std::cout << "��Һã�����" << name << ".\n\n";
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
    std::cout << "����" << name << "���ҽ�" << classes << ".\n";
}

void Teacher::teach()
{
    std::cout << name << "��" << classes << ".\n";
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
    std::cout << "����" << name << "������" << classes << "ѧϰ\n";
}
void Student::attendClass()
{
    std::cout << name << "����" << classes << "ѧϰ\n";
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
    std::cout << "����" << Student::name << "������" << Teacher::classes << "�̿�\n";
    std::cout << Student::name << Student::classes << "ѧϰ\n\n";
}

int main()
{
    Teacher teacher("��ʦ", "���Ű�");
    Student student("ѧ��", "���Ű�");
    TeachingStudent teachingstudent("����", "���Ű�", "���װ�");

    teacher.introduce();
    teacher.teach();
    student.introduce();
    student.attendClass();
    teachingstudent.introduce();
    teachingstudent.teach();
    teachingstudent.attendClass();
    return 0;
}