#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int bin;
    cout << "enter the binary number : ";
    cin >> bin;
    cout << endl;
    int last_digit = 0;
    int power = 0;
    int decimal = 0;
    while (bin > 0)
    {
        last_digit = bin % 10;
        decimal = decimal + (last_digit * pow(2, power));
        power++;
        bin /= 10;
    }
    cout << "Decimal number = " << decimal << endl;

    return 0;
}