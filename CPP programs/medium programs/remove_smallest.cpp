/// problem link => https://codeforces.com/contest/1399/problem/A
#include <math.h>
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
        int n;
        cin >> n;
        vector<int> v(n);
        int flag = 0;
        for (auto &it : v)
        {
            cin >> it;
        }
        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}