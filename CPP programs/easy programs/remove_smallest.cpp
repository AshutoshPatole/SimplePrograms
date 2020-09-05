/// problem link => https://codeforces.com/problemset/problem/1399/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; ++i)
        {
            ok &= (a[i] - a[i - 1] <= 1);
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}