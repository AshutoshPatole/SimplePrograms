/// problem link => https://codeforces.com/problemset/problem/1399/B

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
        int candies;
        cin >> candies;
        int candy;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < candies; i++)
        {
            cin >> candy;
            a.push_back(candy);
        }
        for (int i = 0; i < candies; i++)
        {
            cin >> candy;
            b.push_back(candy);
        }
        int a_max = *max_element(a.begin(), a.end());
        int b_max = *max_element(b.begin(), b.end());
        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());
        int count = 0;
        for (int i = 0; i < a.size(); i++)
        {
            while (a[i] > min_a || b[i] > min_b)
            {
                if (a[i] > min_a)
                {
                    a[i] = a[i] - 1;
                }
                if (b[i] > min_b)
                {
                    b[i] = b[i] - 1;
                }
                count++;
            }
        }

        // for (auto it : a)
        // {
        //     // while (it > min_a)
        //     // {
        //     //     count++;
        //     //     it--;
        //     // }
        //     count += it - min_a;
        // }
        // // for (auto it : b)
        // {
        //     while (it > min_b)
        //     {
        //         count++;
        //         it--;
        //     }
        //     count += it - min_b;
        // }
        cout << count << endl;
    }

    return 0;
}