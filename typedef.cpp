#include <iostream>

using namespace std;

// Generic types
template <class T>
class MathTools
{
public:
    T multiply(T a, T b)
    {
        return a * b;
    }
    T divide(T a, T b)
    {
        return a / b;
    }
    T add(T a, T b)
    {
        return a + b;
    }
    T subtract(T a, T b)
    {
        return a - b;
    }
};

//Aliases
typedef MathTools<int> IntTools;
typedef MathTools<double> DoubleTools;

int main()
{
    DoubleTools mathTools;
    cout << mathTools.add(4.2, 6.9) << endl;
    return 0;
}