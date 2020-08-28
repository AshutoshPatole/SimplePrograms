/// problem link => https://codeforces.com/problemset/problem/61/A

#include <iostream>
using namespace std;
int main()
{
    string s;
    string s1;
    cin >> s;
    cin >> s1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s1[i])
        {
            s[i] = '0';
        }
        else
        {
            s[i] = '1';
        }
    }
    cout << s;

    return 0;
}