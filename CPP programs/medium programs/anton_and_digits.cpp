/// problem link => https://codeforces.com/problemset/problem/734/B
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int two, three, five, six, totalSum = 0;
    cin >> two >> three >> five >> six;
    int min256 = min(two, min(five, six));
    totalSum += 256 * min256;
    if (two - min256 > 0)
    {
        int min32 = min((two - min256), three);
        totalSum += 32 * min32;
    }
    cout<<totalSum;
    return 0;
}