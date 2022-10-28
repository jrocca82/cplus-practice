#include <iostream>

using namespace std;

enum Gender
{
    male,
    female,
    nonBinary
};

class Person
{
    // Not accessible outside the class
private:
    string name;
    int age;
    Gender gender;
    int height;

public:
    // Constructor to initialize a new object
    Person(string _name, int _age, Gender _gender, int _height)
    {
        name = _name;
        age = _age;
        gender = _gender;
        height = _height;
    };

    // Constructor with no arguments (set default values)
    Person()
    {
        name = "???";
        age = 99;
        gender = nonBinary;
        height = 0;
    };

    // Methods are only in classes, not structs
    void printInfo()
    {
        cout << name << " " << age << " " << gender << " " << height << endl;
    }

    void setHeight(int h)
    {
        height = h;
    }
};

// Inherits Person class
class Employee : public Person
{
private:
    string role;
    string company;
    int salary;

public:
    Employee(string _name, int _age, Gender _gender, int _height, string _role, string _company, int _salary)
    {
        Person(_name, _age, _gender, _height);
        role = _role;
        company = _company;
        salary = _salary;
    };

    Employee()
    {
        Person();
        role = "none";
        company = "none";
        salary = 0;
    };

    int getSalary()
    {
        return salary;
    }

    void setSalary(int _salary)
    {
        salary = _salary;
    }
};

int main()
{

    Person jo("Jo", 28, female, 160);

    Person lorenzo("Lorenzo", 22, male, 200);
    Person noName;

    Employee myEmployee("Bob", 30, nonBinary, 180, "employee", "Labrys", 70000);
    Employee notEmployee;

    // Output is the same as Structs
    jo.printInfo();
    lorenzo.printInfo();

    lorenzo.setHeight(180);
    lorenzo.printInfo();

    noName.printInfo();


    myEmployee.printInfo();
    notEmployee.printInfo();
    int sal = myEmployee.getSalary();
    cout << sal << endl;
    myEmployee.setSalary(80000);
    int newSal = myEmployee.getSalary();
    cout << newSal << endl;

    return 0;
}