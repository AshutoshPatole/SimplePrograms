/// problem link => http://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    cin >> s;
    // string first_character;
    // first_character = s.at(0);
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            putchar(toupper(s[i]));
        }
        else
        {
            putchar(s[i]);
        }
    }
    return 0;
}