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
//Not accessible outside the class
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
};

int main()
{

    Person jo("Jo", 28, female, 160);

    Person lorenzo("Lorenzo", 22, male, 200);
    Person noName;

    // Output is the same as Structs
    jo.printInfo();
    lorenzo.printInfo();

    noName.printInfo();

    return 0;
}