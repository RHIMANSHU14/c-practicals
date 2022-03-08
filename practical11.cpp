#include <iostream>
using namespace std;

float division(float x, float y)
{
    if (y == 0)
    {
        throw "error";
    }
    else
        return x / y;
}

int main()

{
    float a, b;
    float c;
    cout << "enter numerator :";
    cin >> a;
    cout << "enter denominator :";
    cin >> b;

    try
    {
        c = division(a, b);
        cout << c;
    }
    catch (...)
    {
        cout << " denominator is zero cannot proceed further";
    }

    return 0;
}