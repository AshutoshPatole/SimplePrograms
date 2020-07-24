#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter the number : ";
    cin >> number;
    int sum = 0;
    sum = number * (number + 1) / 2;
    cout << "The sum of the number is " << sum << endl;
    return 0;
}