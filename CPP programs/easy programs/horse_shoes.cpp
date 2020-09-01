/// problem link => https://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v;
    int color;
    for (int i = 0; i < 4; i++)
    {
        cin >> color;
        v.push_back(color);
    }
    int number_of_horse_shoes_needed_to_buy = 0;
    sort(v.begin(), v.end());
    // for (auto it : v)
    // {
    //     cout << it << " ";
    //     if (v[it] == v[it + 1])
    //     {
    //         number_of_horse_shoes_needed_to_buy++;
    //     }
    // }
    for (int i = 0; i < 4; i++)
    {
        if (v[i] == v[i + 1])
        {
            number_of_horse_shoes_needed_to_buy++;
        }
    }
    cout << number_of_horse_shoes_needed_to_buy;
    return 0;
}