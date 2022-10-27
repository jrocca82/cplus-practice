#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "What is your name?" << endl;

    getline(cin, name);

    cout << "Hello " << name << endl;
    cout << "How old are you, " << name << "?" << endl;
    cin >> age;

    cout << "So you are " << age << " years old" << endl;

    return 0;
}