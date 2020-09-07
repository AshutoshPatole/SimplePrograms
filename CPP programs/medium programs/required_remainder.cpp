/// problem link => https://codeforces.com/problemset/problem/1374/A

#include <iostream>
using namespace std;
void findRemainder()
{
    // 10  5 15
    int x, y, n;
    cin >> x >> y >> n;
    int a = n % x;
    if (a - y >= 0)
    {
        n = n - (a - y);
    }
    else
    {
        n = n - a - (x - y);
    }
    cout << n << endl;
}
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        findRemainder();
    }

    return 0;
}