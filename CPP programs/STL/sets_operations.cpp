// Problem link => https://www.hackerrank.com/challenges/cpp-sets/problem?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> v;
    set<int> s;
    int number_0f_query;
    cin >> number_0f_query;
    int query_type;
    int number;
    for (int i = 0; i < number_0f_query; ++i)
    {
        cin >> query_type >> number;
        v.push_back({query_type, number});
    }
    for (auto it : v)
    {
        if (it.first == 1)
        {
            s.insert(it.second);
        }
        else if (it.first == 2)
        {
            s.erase(it.second);
        }
        else
        {
            auto finding = s.find(it.second);
            if (finding == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
