/// problem link => https://codeforces.com/problemset/problem/1409/A
#include <iostream>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            a -= b;
            if (a % 10 == 0)
            {
                cout << a / 10 << endl;
            }
            else
            {
                cout << a / 10 + 1 << endl;
            }
        }
        else
        {
            b -= a;
            if (b % 10 == 0)
            {
                cout << b / 10 << endl;
            }
            else
            {
                cout << b / 10 + 1 << endl;
            }
        }
    }

    return 0;
}