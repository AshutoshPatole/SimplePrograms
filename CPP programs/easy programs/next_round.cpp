/// problem link => https://codeforces.com/problemset/problem/158/A

#include <iostream>
using namespace std;

int main()
{
    int n, k, a[50];
    cin >> n >> k;
    int qualified = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            qualified++;
        }
    }
    cout << qualified;

    return 0;
}