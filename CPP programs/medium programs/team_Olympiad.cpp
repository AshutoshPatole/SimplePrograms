/// problem link => https://codeforces.com/problemset/problem/490/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tests;
    cin >> tests;
    vector<int> v[4];
    int item;
    for (int i = 1; i <= tests; i++)
    {
        cin >> item;
        v[item].push_back(i);
    }
    // for (auto it : v[2])
    // {
    //     cout << it << " ";
    // }
    int lowest = min(v[1].size(), min(v[2].size(), v[3].size()));
    cout << lowest << endl;
    for (int i = 0; i < lowest; i++)
    {
        cout << v[1][i] << " " << v[2][i] << " " << v[3][i] << endl;
    }

    return 0;
}