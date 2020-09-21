/// problem link => https://codeforces.com/problemset/problem/1325/B
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tests;
    cin >> tests;
    // scanf("%d", &tests);
    while (tests--)
    {
        int item;
        cin >> item;
        vector<int> v;
        set<int> s;
        int temp;
        for (int i = 0; i < item; i++)
        {
            cin >> temp;
            // scanf("%d", &temp);
            v.push_back(temp);
            s.insert(temp);
        }
        int distinct = 0;
        // vector<int> distinct_arr;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (find(distinct_arr.begin(), distinct_arr.end(), v[i]) == distinct_arr.end())
        //     {
        //         distinct++;
        //         distinct_arr.push_back(v[i]);
        //     }
        // }
        // cout << distinct << '\n';
        cout << s.size() << '\n';
    }
    return 0;
}