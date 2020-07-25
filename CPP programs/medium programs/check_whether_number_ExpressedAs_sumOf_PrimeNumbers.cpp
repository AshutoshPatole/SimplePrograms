#include <iostream>

using namespace std;
int checkIfPrime(int n)
{
    int isPrime = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int number;
    cout << "enter the number : ";
    cin >> number;
    cout << endl;
    int flag = 0;
    for (int i = 2; i <= number / 2; i++)
    {
        if (checkIfPrime(i) == 1)
        {
            if (checkIfPrime(number - i) == 1)
            {
                cout << "It can be expressed as a sum of " << i << " " << (number - i) << endl;
            }
        }
    }

    return 0;
}