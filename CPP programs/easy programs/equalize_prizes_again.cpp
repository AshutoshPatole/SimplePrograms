/// problem link => https://codeforces.com/problemset/problem/1234/A
#include <iostream>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << (sum + n - 1) / n << endl;
    }
    return 0;
}