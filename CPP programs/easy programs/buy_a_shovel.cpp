
/// problem link => https://codeforces.com/problemset/problem/732/A
#include <iostream>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int remainder = k % 10;
    int count = 0;
    while ((k * count) % 10 != r)
    {
        count++;
        if ((k * count) % 10 == 0)
            break;
    }
    cout << count;

    return 0;
}