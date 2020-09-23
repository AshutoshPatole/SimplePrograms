/// problem link => https://codeforces.com/problemset/problem/151/A
#include <iostream>
using namespace std;
int minimum(int a, int b, int c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else
        return c;
}
int main()
{

    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tests;
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toasts = k * l / nl;
    int limes = c * d;
    int salt = p / np;

    cout << minimum(toasts, limes, salt) / n;
    return 0;
}

// 1 7 4 5 5 8 3 2
// kl = 28 / 4
// toast = 7
// 25
// 8 / 2 => 4
// (K * L) / (N * l) toasts
// C * D) / N limes.
// P / (p * N) salt.