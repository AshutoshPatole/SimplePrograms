/// problem link => https://codeforces.com/problemset/problem/1353/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        int answer = 0;
        for (auto &it : a)
        {
            cin >> it;
        }
        for (auto &it : b)
        {
            cin >> it;
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                answer += max(a[i], b[i]);
            }
            else
            {
                answer += a[i];
            }
        }
        cout << answer << endl;
        
    }
    return 0;
}