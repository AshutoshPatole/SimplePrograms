#include <iostream>
using namespace std;

int facto(int n)
{
    int fact = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
}
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << "Factorial of number " << number << " is " << facto(number) << endl;
}
