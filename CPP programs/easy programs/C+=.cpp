/// problem link => https://codeforces.com/problemset/problem/1368/A
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
        int a, b, n;
        cin >> a >> b >> n;
        int total = 0;
        int steps = 0;
        while ((a + b) <= n)
        {
            if (a < b)
            {
                a += b;
                steps++;
            }
            else
            {
                b += a;
                steps++;
            }
        }
        cout << steps+1 << '\n';
    }
    return 0;
}