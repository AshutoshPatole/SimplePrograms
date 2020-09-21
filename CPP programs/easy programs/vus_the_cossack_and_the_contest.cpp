/// problem link => https://codeforces.com/problemset/problem/1186/A
#include <iostream>
using namespace std;
int main()
{

    int n, m, k;
    cin >> n >> m >> k;
    if (n <= m && n <= k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}