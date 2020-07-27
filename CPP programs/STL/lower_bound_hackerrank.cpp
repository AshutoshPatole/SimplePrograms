// You are given N integers in sorted order. Also, you are given Q queries.
// In each query, you will be given an integer and you have to tell whether that integer is present in the array.
// If so, you have to tell at which index it is present and if it is not present,
// you have to tell the index at which the smallest integer that is just greater than the given number is present.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int items;
    cin >> items;
    vector<int> v;
    int user_inputs;
    for (int i = 0; i < items; ++i)
    {
        cin >> user_inputs;
        v.push_back(user_inputs);
    }
    int number_0f_queries;
    cin >> number_0f_queries;
    int query;
    vector<int> queri;
    for (int i = 0; i < number_0f_queries; ++i)
    {
        cin >> query;
        queri.push_back(query);
    }
    for (auto it : queri)
    {
        auto low = lower_bound(v.begin(), v.end(), it);
        if (v[low - v.begin()] == it)
        {
            cout << "Yes"
                 << " " << (low - v.begin() + 1) << endl;
        }
        else
        {
            cout << "No"
                 << " " << (low - v.begin() + 1) << endl;
        }
    }
    return 0;
}
