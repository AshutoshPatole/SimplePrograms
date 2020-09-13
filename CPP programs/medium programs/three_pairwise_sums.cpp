/// problem link => https://codeforces.com/problemset/problem/1385/A
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        vector<int> v(3);
        for (auto &it : v)
            cin >> it;
        sort(v.begin(), v.end());
        if (v[1] != v[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[0] << " " << v[2] << endl;
        }
    }
    return 0;
}