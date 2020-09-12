/// problem link => https://codeforces.com/problemset/problem/1294/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int a[3], n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a + 3);
        n -= (2 * a[2] - a[1] - a[0]);
        // if ((n - (2 * a[2] - a[1] - a[0])) % 3 == 0)
        // {
        //     cout << "YES"<<endl;
        // }
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}