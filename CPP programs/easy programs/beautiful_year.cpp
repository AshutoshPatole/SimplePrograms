/// problem link => https://codeforces.com/problemset/problem/271/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int year;
    cin >> year;
    // int flag = 0;
    // int remainder = 0;
    // vector<int> v;
    while (true)
    {
        year += 1;
        int ones = year % 10;
        int tens = year / 10 % 10;
        int hundred = year / 100 % 10;
        int thousand = year / 1000;
        if (ones != tens && ones != hundred && ones != thousand && tens != hundred && tens != thousand && hundred != thousand)
        {
            break;
        }
    }
    cout << year << endl;
    return 0;
}