#include <iostream>
#include <math.h>
using namespace std;

int length(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << endl;
    int temp = number;
    int armNumber = 0;
    int power = length(number);
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        armNumber = armNumber + pow(remainder, power);
        number = number / 10;
    }
    if (temp == armNumber)
    {
        cout << " armstrong number";
    }
    else
    {
        cout << "Not an armstrong number";
    }

    return 0;
}
