/// problem link => https://codeforces.com/problemset/problem/1353/A
#include <iostream>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, m;
        cin >> n >> m;
        int minVal = min(2, n - 1);
        // cout << "MIN => " << minVal << endl;
        int product = 0;
        product = minVal * m;
        cout << product << endl;
    }

    return 0;
}