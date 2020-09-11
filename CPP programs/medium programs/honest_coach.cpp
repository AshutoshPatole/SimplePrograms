/// problem link => https://codeforces.com/problemset/problem/1360/B

#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        vector<int> v;
        // vector<int> one;
        // vector<int> two;
        int items;
        cin >> items;
        int x;
        for (int i = 0; i < items; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int minMod = abs(v[0] - v[1]);
        for (int i = 0; i < v.size() - 1; i++)
        {
            int mod = abs(v[i] - v[i + 1]);
            if (mod < minMod)
            {
                minMod = mod;
            }
        }
        cout << minMod << endl;
    }

    return 0;
}