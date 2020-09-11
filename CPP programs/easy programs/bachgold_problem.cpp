/// problem link => https://codeforces.com/problemset/problem/749/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v;
    if (n % 2 == 0)
    {
        sum = n / 2;
        cout << sum << endl;
        for (int i = 0; i < sum; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        sum = n / 2;
        cout << sum << endl;
        for (int i = 1; i < sum; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }

    // if (n % 2 == 0)
    // {
    //     while (n > 0)
    //     {
    //         n -= 2;
    //         sum++;
    //     }
    //     cout << sum << endl;
    //     for (int i = 1; i < sum; i++)
    //     {
    //         cout << "2 ";
    //     }
    //     cout << "2";
    //     return 0;
    // }
    // else if (n == 5)
    // {
    //     cout << 2 << endl;
    //     cout << "2 3" << endl;
    // }
    // else if ((n % 3 == 0 && n % 5 == 0) || (n % 3 == 0 && n % 7 == 0))
    // {
    //     while (n > 0)
    //     {
    //         n -= 3;
    //         sum++;
    //     }
    //     cout << sum << endl;

    //     for (int i = 1; i <= sum; i++)
    //     {
    //         cout << "3 ";
    //     }
    //     cout << "3";
    // }
    // else if (n % 5 == 0 && n % 7 == 0)
    // {
    //     while (n > 0)
    //     {
    //         n -= 5;
    //         sum++;
    //     }
    //     cout << sum << endl;

    //     for (int i = 1; i <= sum; i++)
    //     {
    //         cout << "5 ";
    //     }
    //     cout << "5";
    // }
    // else if (n % 7 == 0)
    // {
    //     while (n > 0)
    //     {
    //         n -= 7;
    //         sum++;
    //     }
    //     cout << sum << endl;

    //     for (int i = 1; i <= sum; i++)
    //     {
    //         cout << "7 ";
    //     }
    //     cout << "7";
    // }
    // else
    // {
    //     cout << "1" << endl;
    //     cout << n;
    // }

    return 0;
}