/// problem link => https://codeforces.com/problemset/problem/1348/A
#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int total = 0;
            total = pow(2, i);
            v.push_back(total);
        }

        vector<int> v1;
        vector<int> v2;
        int j = v.size() - 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != j && i % 2 != 0)
            {
                v1.push_back(v[i]);
                v1.push_back(v[j]);
            }
            else
            {
                v2.push_back(v[i]);
                v2.push_back(v[j]);
            }
            j--;
        }
        int max = accumulate(v1.begin(), v2.end(), 0.0);
        int max2 = accumulate(v2.begin(), v2.end(), 0.0);
        cout << max << " " << max2 << endl;
        cout << abs(max - max2);
    }

    return 0;
}