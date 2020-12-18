/// problem link => https://codeforces.com/problemset/problem/702/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int v[n], maxIncrease = 0, tempMaxNumber = 1;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
        {
            maxIncrease = max(maxIncrease, tempMaxNumber);
            tempMaxNumber = 1;
        }
        else
            tempMaxNumber++;
    }
    maxIncrease = max(maxIncrease, tempMaxNumber);
    cout << maxIncrease;
    return 0;
}