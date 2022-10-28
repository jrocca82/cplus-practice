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
public:
    string name;
    int age;
    Gender gender;


    //Constructor to initialize a new object
    Person(string _name, int _age, Gender _gender){
        name = _name;
        age = _age;
        gender = _gender;
    };

    //Constructor with no arguments (set default values)
    Person(){
        name = "???";
        age = 99;
        gender = nonBinary;
    };

    //Methods are only in classes, not structs
    void printInfo() {
        cout << name << " " << age << " " << gender << endl;
    }
};

int main()
{

    Person jo("Jo", 28, female);

    Person lorenzo("Lorenzo", 22, male);
    Person noName;

    //Output is the same as Structs
    jo.printInfo();
    lorenzo.printInfo();
    
    noName.printInfo();

    return 0;
}