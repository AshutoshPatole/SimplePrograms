#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter a number to reverse : ";
    cin >> number;
    int temp = 0;
    int stored = number;
    int reversed = 0;
    while (number > 0)
    {
        temp = number % 10;
        reversed = reversed * 10 + temp;
        number = number / 10;
    }
    cout << "the reverse of the number " << stored << " is " << reversed << endl;
}