/// problem link => https://codeforces.com/problemset/problem/1360/A

#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int a, b;
        cin >> a >> b;
        cout << pow(min(max(2 * a, b), max(2 * b, a)), 2) << endl;
    }
    return 0;
}