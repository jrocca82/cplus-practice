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

    //Methods are only in classes, not structs
    void printInfo() {
        cout << name << " " << age << " " << gender << endl;
    }
};

int main()
{

    Person jo;
    jo.name = "Jo";
    jo.age = 28;
    jo.gender = female;

    Person lorenzo;
    lorenzo.name = "Lorenzo";
    lorenzo.age = 22;
    lorenzo.gender = male;

    //Output is the same as Structs
    jo.printInfo();
    lorenzo.printInfo();

    return 0;
}