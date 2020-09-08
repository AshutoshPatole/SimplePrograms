/// problem link => https://codeforces.com/problemset/problem/490/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, pair<int, int>>> result;
    vector<bool> b(n, false);
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < n; i++)
    {
        auto one = find(v.begin(), v.end(), 1);
        auto two = find(v.begin(), v.end(), 2);
        auto three = find(v.begin(), v.end(), 3);

        if (one != v.end() && two != v.end() && three != v.end())
        {
            result.push_back(make_pair(one - v.begin(), make_pair(two - v.begin(), three - v.begin())));
        }

        replace(v.begin(), v.end(), 1, 9);
    }
    for (auto it : result)
    {
        cout << it.first << " " << it.second.first << " " << it.second.first << endl;
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}