/// problem link => https://codeforces.com/contest/1462/problem/A
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
        vector<int> a(n);
        vector<int> result;
        for (auto &it : a)
            cin >> it;
        int start = 1;
        int end = n;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                result.push_back(a[start - 1]);
                start++;
            }
            else
            {
                result.push_back(a[end - 1]);
                end--;
            }
        }
        for (auto it : result)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}