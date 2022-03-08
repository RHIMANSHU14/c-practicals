#include <iostream>
#include <math.h>
#include <string>
using namespace std;

float calculatesum(int n)
{

    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= 1 / pow(i, i);
        }
        else
            sum += 1 / pow(i, i);
    }

    return sum;
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {

        int n = atoi(argv[1]);
        float sum;
        sum = calculatesum(n);
        cout << "the sumof series is " << sum;
    }
    else
    {
        int n;
        float sum;
        cout << "enter the value of n";
        cin >> n;

        sum = calculatesum(n);
        cout << "the sum of series is " << sum;
    }

    return 0;
}