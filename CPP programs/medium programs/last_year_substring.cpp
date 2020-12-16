/// problem link => https://codeforces.com/contest/1462/problem/B
#include <bits/stdc++.h>
using namespace std;

void find()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i <= 4; i++)
    {
        string t1 = s.substr(0, i);
        string t2 = s.substr(n - 4 + i);
        string ans = t1 + t2;
        if (ans == "2020")
        {
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
}
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        find();
    }
    return 0;
}
