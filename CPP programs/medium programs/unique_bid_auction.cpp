/// problem link => https://codeforces.com/contest/1454/problem/B
#include <iostream>
#include <vector>
#include <map>
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
        map<int, int> mp;
        for (auto &it : v)
        {
            cin >> it;
            mp[it]++;
        }
        int winner = -1;

        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] == 1 && (winner < 0) || (v[i] < v[winner]))
            {
                winner = i;
            }
        }
        // cout << winner << endl;
        cout << (winner < 0 ? winner : winner + 1) << "\n";

    }
    return 0;
}


