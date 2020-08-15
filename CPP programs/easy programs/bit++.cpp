/// problem link => https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int result = 0;
    for (int i = 0; i < test_cases; ++i)
    {
        string s;
        cin >> s;
        if (s[0] == '+')
            result++;
        if (s[0] == '-')
            result--;
        if (s[2] == '+')
            result++;
        if (s[2] == '-')
            result--;
    }
    cout << result << endl;

    return 0;
}