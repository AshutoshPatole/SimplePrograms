/// problem link => https://codeforces.com/problemset/problem/1385/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        vector<int> v(n * 2);
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < n * 2; i++)
        {
            if (find(ans.begin(), ans.end(), v[i]) == ans.end())
            {
                ans.push_back(v[i]);
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout<<endl;
    }

    return 0;
}