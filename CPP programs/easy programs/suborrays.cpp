/// problem link => https://codeforces.com/problemset/problem/1391/A
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
        }
        random_shuffle(v.begin()+1, v.end());
        // for (auto it : v)
        //     cout << it << " ";
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}