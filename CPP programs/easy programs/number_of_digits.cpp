#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int length = 0;
    while (number > 0)
    {
        number = number / 10;
        length++;
    }
    cout << "the length of the numbers is " << length << endl;
    return 0;
}