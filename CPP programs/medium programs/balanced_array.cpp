/// problem link => https://codeforces.com/problemset/problem/1343/B

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int item;
    vector<int> v;
    while (test_cases--)
    {
        cin >> item;
        v.clear();
        if (item % 4 == 0)
        {
            int temp = 0;
            cout << "YES" << '\n';
            for (int i = 2; i <= item; i += 2)
            {
                v.push_back(i);
            }
            for (int i = 1; i <= item; i += 2)
            {
                temp = i;
                v.push_back(i);
            }
            // for (int i = 0; i < v.size(); i++)
            // {
            //     if (i == v.size())
            //     {
            //         v[i] += v[i] + (item / 2);
            //     }
            //     else
            //     {
            //         cout << v[i] << " ";
            //     }
            // }
            v.pop_back();
            temp += item / 2;
            v.push_back(temp);
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}