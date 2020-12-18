/// problem link => https://codeforces.com/problemset/problem/1426/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, x, ans;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            // ans = (n - 3)/ x;
            // cout << ans << " ";
            // cout << round(ans + 1) << endl;
            cout << floor((n - 3) / x + 2) << endl;
        }
    }
    return 0;
}