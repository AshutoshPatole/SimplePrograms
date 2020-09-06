/// problem link => https://codeforces.com/problemset/problem/282/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int result = 0;
    while (n--)
    {
        string s;
        cin >> s;
        // ++X => ['+','+','X'];
        // X++ => ['X','+','+'];
        if (s[0] == '+')
        {
            result++;
        }
        if (s[2] == '+')
        {
            result++;
        }
        if (s[0] == '-')
        {
            result--;
        }
        if (s[2] == '-')
        {
            result--;
        }
    }
    cout << result;
    // string s = "ashu";
    // string s1 = 'a';

    return 0;
}