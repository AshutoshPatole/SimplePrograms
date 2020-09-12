/// problem link => https://codeforces.com/problemset/problem/1358/A
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
        if ((a * b) % 2 == 0)
        {
            cout << a * b / 2 << endl;
        }
        else
        {
            cout << ((a * b) + 1) / 2 << endl;
        }
    }
    return 0;
}