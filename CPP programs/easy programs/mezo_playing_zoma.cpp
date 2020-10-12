/// problem link => https://codeforces.com/problemset/problem/1285/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    string s;
    cin >> s;
    int left = 0, right = 0;
    for (int i = 0; i < tests; i++)
    {
        if(s[i] == 'L') left++;
        else right++;
    }
    cout<<left+right+1;

    return 0;
}