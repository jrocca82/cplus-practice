#include <iostream>

using namespace std;

void increment(int* ptr){
    (*ptr)++;
}

int main () {
    int myAge = 28;
    cout << "My age: " << myAge << endl;
    cout << "Address of my age: " << &myAge << endl;

    int* pointer = &myAge;

    cout << "Pointer points to " << pointer << endl;
    cout << "The value at the address is " << *pointer << endl;

    //Increment value via pointer
    (*pointer)++;
    cout << "The new value at the address is " << *pointer << endl;

    int myHeight = 170;
    cout << "My height is: " << myHeight << endl;
    int* newPointer = &myHeight;

    //Method takes pointer to integer as value
    increment(newPointer);
    increment(newPointer);
    increment(newPointer);

    cout << "My new height is: " << myHeight << endl;

    return 0;
}