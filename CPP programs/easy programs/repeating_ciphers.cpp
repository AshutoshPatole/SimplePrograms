/// problem link => https://codeforces.com/problemset/problem/1095/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string s, newString = "";
    cin >> s;
    int pointer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        newString += s[i];
        pointer++;
        i += pointer;
    }
    cout << newString;
    return 0;
}