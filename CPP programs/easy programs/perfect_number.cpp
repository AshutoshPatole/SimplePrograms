#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0, i = 0;
    cout << "Enter the number : ";
    cin >> number;

    for (i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == number)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not a perfect number";
    }

    return 0;
}