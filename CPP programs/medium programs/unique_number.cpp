/// problem link => https://codeforces.com/contest/1462/problem/C
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n > 45)
    {
        cout << -1 << "\n";
        return;
    }
    string s = "";
    for (int i = 9; i >= 1; i--)
    {
        if (n <= 9 && n <= i)
        {
            s += to_string(n);
            n = 0;
            break;
        }
        else
        {
            s += to_string(i);
            n -= i;
        }
    }
    if (n)
    {
        cout << -1 << "\n";
        return;
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
}
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        solve();
    }
    return 0;
}