/// problem link => https://codeforces.com/problemset/problem/750/A

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int solved = 0;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((k += 5 * i) <= 240)
        {
            solved++;
        }
    }
    cout << solved;
    return 0;
}