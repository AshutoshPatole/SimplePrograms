/// problem link => https://codeforces.com/problemset/problem/1296/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        int item;
        bool odd = false, even = false;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> item;
            total += item;
            if (item % 2 != 0)
            {
                odd = true;
            }
            else
            {
                even = true;
            }
        }
        if (total % 2 != 0 || (odd && even))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}