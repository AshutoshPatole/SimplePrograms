/// problem link => https://codeforces.com/problemset/problem/1367/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (i % 2 != num % 2)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
        if (odd != even)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << even << endl;
        }

        // vector<int> v(n);
        // for (auto &it : v)
        // {
        //     cin >> it;
        // }
        // int even = 0;
        // int odd = 0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     if (i % 2 == 0 && v[i] % 2 != 0)
        //     {
        //         //iter_swap(v.begin() + v[i], v.begin() + v[i + 1]);
        //         swap(v[i], v[i + 1]);
        //         if (i % 2 == 0)
        //         {
        //             even++;
        //         }
        //         else
        //         {
        //             odd++;
        //         }
        //     }
        // }
        // if (even != odd)
        // {
        //     cout << "-1" << endl;
        // }
        // else
        // {
        //     cout << even << endl;
        // }
    }

    return 0;
}