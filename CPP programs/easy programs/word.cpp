///problem link => http://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{

    int i;
    int upper = 0, lower = 0;
    string s;
    getline(cin, s);
    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
    }
    if (lower >= upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    return 0;
}