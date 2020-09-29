/// problem link => https://codeforces.com/problemset/problem/1382/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for (auto &it : a)
            cin >> it;
        for (auto &it2 : b)
            cin >> it2;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (find(b.begin(), b.end(), a[i]) != b.end())
            {

                cout << "YES\n"
                     << "1 " << a[i] << '\n';
                ok = false;
               break;
            }
        }
        if (ok)
            cout << "NO\n";
    
        a.clear();
        b.clear();
    }
    return 0;
}