#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int decimal;
    cout << "enter the decimal number : ";
    cin >> decimal;
    cout << endl;
    int remainder = 0;
    int octal = 0;
    int power = 1;
    while (decimal > 0)
    {
        remainder = decimal % 8;
        octal = octal + remainder * power;
        decimal /= 8;
        power *= 10;
    }
    cout << "Binary Equivalent = " << octal << endl;
    return 0;
}