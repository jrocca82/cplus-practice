#include <iostream>

using namespace std;

int main ()
{
    int numOfCars = 10;
    int carMiles[] = {15, 13, 15, 16, 3, 4, 5, 6, 23, 0};
    string carManufact[] = {"Sabb", "Volvo", "BMW"};

    cout << carMiles[0] << endl;

    cout << carMiles[9] << endl;

    cout << carManufact[2] << endl;

    cout << "Number of cars: " << numOfCars << endl;
    return 0;
}