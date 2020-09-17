/// problem link => https://codeforces.com/problemset/problem/1372/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;

    while (tests--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            v.push_back(1);
        }
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}