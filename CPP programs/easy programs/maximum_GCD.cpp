/// problem link => https://codeforces.com/problemset/problem/1370/A
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int a;
        cin >> a;
        cout << floor(a / 2) << endl;
    }
    return 0;
}