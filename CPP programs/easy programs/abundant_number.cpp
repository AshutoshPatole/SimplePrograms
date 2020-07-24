#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter the number : ";
    cin >> number;
    cout << endl;
    int dividers_sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            dividers_sum += i;
        }
    }
    if (number < dividers_sum)
    {
        cout << "Abundant number" << endl;
    }
    else
    {
        cout << "Not an abundant number" << endl;
    }

    return 0;
}