/// problem link => https://codeforces.com/problemset/problem/1311/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        if (a < b)
        {
            b -= a;
            if (b % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            a -= b;
            if (a % 2 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}