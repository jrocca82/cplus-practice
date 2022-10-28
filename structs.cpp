#include <iostream>

using namespace std;

int main()
{
    enum Gender {
        male,
        female,
        nonBinary
    };
     
    struct Person {
        string name;
        int age;
        Gender gender;
    };

    Person jo;
    jo.name = "Jo";
    jo.age = 28;
    jo.gender = female;

    Person lorenzo;
    lorenzo.name = "Lorenzo";
    lorenzo.age = 22;
    lorenzo.gender = male;

    cout << jo.name << " " << jo.age << " " << jo.gender << endl;
    cout << lorenzo.name << " " << lorenzo.age << " " << lorenzo.gender << endl;

    return 0;
}