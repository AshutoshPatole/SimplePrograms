/// problem link => https://codeforces.com/problemset/problem/723/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    vector<int> v(3);
    for (auto &it : v)
    {
        cin >> it;
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    cout << max - min;

    return 0;
}