/// problem link => https://codeforces.com/problemset/problem/758/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    vector<int> v(test_cases);
    for (auto &it : v)
    {
        cin >> it;
    }
    int charges = 0;
    int max = *max_element(v.begin(), v.end());
    for (auto it : v)
    {
        if (it < max)
        {
            charges += max - it;
        }
    }
    cout << charges;
    return 0;
}