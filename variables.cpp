#include <iostream>

using namespace std;

int main ()
{
    //Variable types:
    int numOne = 5;
    int numTwo = 7;
    int sum = numOne + numTwo;

    double myDouble = 0.42;
    float myFloat = 0.69;

    //Can be a double or float
    double sumTry = myDouble + myFloat;

    //Cast to int --> whole number
    int sumInt = sumTry;

    string myString = "Chin up, charlie";

    bool happy = true;


    //Iterating
    if(!happy) {
        cout << sum << endl;
    } else {
        cout << sumInt << endl;
    }

    return 0;
}