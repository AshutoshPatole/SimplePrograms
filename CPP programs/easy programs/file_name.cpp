/// problem link =>  https://codeforces.com/problemset/problem/978/B
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x')
        {
            count++;
            
        }
    }
    cout << count;
    return 0;
}