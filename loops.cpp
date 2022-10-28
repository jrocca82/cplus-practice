#include <iostream>

using namespace std;

int main()
{
    // print hello world 100 times to console
    // for (int count = 0; count < 100; count++)
    // {
    //     cout << "Hello world" << endl;
    // }

    // while loop alt
    // int count = 0;
    // while (count < 1000) {
    //     cout << count << endl;
    //     if(count > 500) {
    //         break;
    //     }
    //     count++;
    // }

    int numOfCars = 3;
    int carMiles[] = {15, 23, 42};

    int totalMiles = 0;

    for(int count = 0; count < numOfCars; count++) {
        totalMiles += carMiles[count];
    }

    cout << totalMiles << endl;

    return 0;
}