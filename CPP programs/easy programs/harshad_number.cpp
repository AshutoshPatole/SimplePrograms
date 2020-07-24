#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number : ";
    cin >> number;
    cout << endl;
    int temp = number;
    int sum = 0, rem = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    if (number % sum == 0)
    {
        cout << "it is a harshad number" << endl;
    }
    else
    {
        cout << "it is not a harshad number" << endl;
    }

    return 0;
}