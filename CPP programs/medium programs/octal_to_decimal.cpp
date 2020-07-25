#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int octal;
    cout << "enter the binary number : ";
    cin >> octal;
    cout << endl;
    int last_digit = 0;
    int power = 0;
    int decimal = 0;
    while (octal > 0)
    {
        last_digit = octal % 10;
        decimal = decimal + (last_digit * pow(8, power));
        power++;
        octal /= 10;
    }
    cout << "Decimal number = " << decimal << endl;

    return 0;
}