#include <iostream>
using namespace std;

int facto(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << endl;
    int rem = 0;
    int temp = number;
    int strongNumber = 0;
    while (number > 0)
    {
        rem = number % 10;
        strongNumber += facto(rem);
        number = number / 10;
    }
    if (strongNumber == temp)
    {
        cout << "Strong number";
    }
    else
    {
        cout << "not a strong number";
    }

    return 0;
}