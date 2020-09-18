/// problem link => https://codeforces.com/problemset/problem/1283/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int h, m;
        cin >> h >> m;
        // int left_h = 0, left_m = 0;
        cout << 24 * 60 - 60 * h - m << endl;
    }
    return 0;
}