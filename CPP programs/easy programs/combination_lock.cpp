/// problem link => https://codeforces.com/problemset/problem/540/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int pass_length;
    cin >> pass_length;
    int min_moves = 0;
    string initial, required;
    cin >> initial >> required;
    for (int i = 0; i <= pass_length; i++)
    {
        min_moves += min(abs(initial[i] - required[i]), 10 - abs(initial[i] - required[i]));
    }
    cout << min_moves;
    return 0;
}