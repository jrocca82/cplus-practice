#include <iostream>

using namespace std;

//Change original value instead of reference
void increase (int& a){
    a++;
    cout << "Incremented to " << a << endl;
}

int main ()
{
    int testNumber = 5;
    increase(testNumber);

    cout << "After incremented: " << testNumber << endl;
    return 0;
}