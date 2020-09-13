/// problem link => https://codeforces.com/problemset/problem/935/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        int left = n - i;
        if (left % i == 0)
        {
            count++;
        }
    }
    cout << count + 1; // +1 for i = 1
    return 0;
}