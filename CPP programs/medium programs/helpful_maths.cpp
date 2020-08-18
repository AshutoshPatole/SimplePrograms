/// problem link => http://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string string_without_plus;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            string_without_plus += s[i];
            sort(string_without_plus.begin(), string_without_plus.end());
        }
    }
    // cout << string_without_plus << endl;
    for (int i = 0; i < string_without_plus.size(); i++)
    {
        if (i % 2 != 0)
        {
            string_without_plus.insert(i, 1, '+');
        }
    }
    cout << string_without_plus;
    return 0;
}