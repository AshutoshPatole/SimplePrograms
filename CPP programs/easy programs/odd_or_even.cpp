#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "the number is even" << endl;
    }
    else
    {
        cout << "the number is odd" << endl;
    }
}