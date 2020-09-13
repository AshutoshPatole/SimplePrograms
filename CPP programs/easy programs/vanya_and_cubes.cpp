/// problem link => https://codeforces.com/problemset/problem/492/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int count = 0;
    int res = 0;
    while (count <= a)
    {
        res++;
        count += res * (res + 1) / 2;
    }
    cout << res-1;
    return 0;
}