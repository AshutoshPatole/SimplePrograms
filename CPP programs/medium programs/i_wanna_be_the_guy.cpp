/// problem link => https://codeforces.com/problemset/problem/469/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int levels;
    cin >> levels;
    int p, q;
    int level;
    vector<int> v;
    vector<int> v1;
    cin >> p;
    for (int i = 0; i < p; ++i)
    {
        cin >> level;
        v.push_back(level);
    }
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        cin >> level;
        v1.push_back(level);
    }

    int flag = 1;
    for (int i = 1; i <= levels; ++i)
    {
        if ((find(v.begin(), v.end(), i) == v.end()) && find(v1.begin(), v1.end(), i) == v1.end())
        {
            flag = 0;
        }
    }
    if (flag != 0)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}