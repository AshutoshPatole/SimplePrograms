/// problem link => https://codeforces.com/problemset/problem/486/A
#include <iostream>
using namespace std;
int main()
{
    int len;
    cin >> len;
    int odd = 0;
    int even = 0;
    for (int i = 1; i <= len; i++)
    {
        if (i % 2 == 0)
        {
            even += i;
        }
        else
        {
            odd += i;
        }
    }
    cout << even - odd;
    return 0;
}