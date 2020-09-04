/// problem link => https://codeforces.com/problemset/problem/1335/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int candies;
        cin >> candies;
        cout << (candies - 1) / 2 << endl;
    }

    return 0;
}