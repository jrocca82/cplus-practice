#include <iostream>

using namespace std;

string getName() {
    string name;
    cin >> name;
    return name;
}

int getAge() {
    cout << "How old are you?" << endl;
    int age;
    cin >> age;
    return age;
}

int main ()
{

    cout << "What is your name?" << endl;

    string username = getName();
    int userAge = getAge();

    cout <<  "Hello " << username << ". You are " << userAge << " years old." << endl;

    return 0;
}