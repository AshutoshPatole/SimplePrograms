/// problem link => https://codeforces.com/contest/1397/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> occur(26);
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (char c : s)
        {
            ++occur[c - 'a'];
        }
    }
    bool ans = true;
    for (int i = 0; i < 26; ++i)
    {
        if (occur[i] % n != 0)
        {
            ans = false;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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