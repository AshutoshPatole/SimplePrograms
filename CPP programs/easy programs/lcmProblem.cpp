/// problem link =>https://codeforces.com/problemset/problem/1389/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int low, right;
        cin >> low >> right;
        if (low * 2 > right)
        {
            cout << -1 << " " << -1 << '\n';
        }
        else
        {
            cout << low << " " << low * 2 << '\n';
        }
    }
    return 0;
}