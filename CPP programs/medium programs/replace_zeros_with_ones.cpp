#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "enter the number : ";
    cin >> number;
    cout << endl;

    int temp = number;
    int remainder = 0;
    int replaced = 0;
    while (temp > 0)
    {
        remainder = temp % 10;
        if (remainder == 0)
        {
            remainder = 1;
        }
        replaced = replaced * 10 + remainder;
        temp /= 10;
    }
    int final_number = 0;
    while (replaced > 0)
    {
        remainder = 0;
        remainder = replaced % 10;
        final_number = final_number * 10 + remainder;
        replaced /= 10;
    }

    cout << "Number after replacing all 0's with 1's is " << final_number << endl;

    return 0;
}