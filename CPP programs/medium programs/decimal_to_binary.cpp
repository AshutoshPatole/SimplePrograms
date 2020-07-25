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
    int bin = 0;
    int power = 1;
    while (decimal > 0)
    {
        remainder = decimal % 2;
        bin = bin + remainder * power;
        decimal /= 2;
        power *= 10;
    }
    cout << "Binary Equivalent = " << bin << endl;
    return 0;
}