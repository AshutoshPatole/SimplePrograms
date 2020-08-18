/// problem link => http://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;
int main()
{
    long long int number;
    cin >> number;
    int remainder = 0;
    int number_of_lucky_numbers = 0;

    while (number != 0)
    {
        remainder = number % 10;
        if (remainder == 4 || remainder == 7)
        {
            number_of_lucky_numbers++;
        }
        number /= 10;
    }
    if (number_of_lucky_numbers == 4 || number_of_lucky_numbers == 7 || number_of_lucky_numbers == 47)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}