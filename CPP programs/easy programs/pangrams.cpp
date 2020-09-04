/// problem link => https://codeforces.com/problemset/problem/520/A

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> sets;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    sort(s.begin(), s.end());

    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sets.insert(s[i]);
    }
    // for (auto it : sets)
    // {
    //     cout << it << " ";
    // }
    // cout << sets.size() << endl;

    if (sets.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}