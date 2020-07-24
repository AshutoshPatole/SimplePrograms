#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int base, expo;
    cout << "Enter base and exponent values  : ";
    cin >> base >> expo;
    cout << endl;

    cout << base << " to the power of " << expo << " is " << pow(base, expo) << endl;

    return 0;
}