/// problem link => https://codeforces.com/problemset/problem/1220/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x;
    cin >> x;
    string s;
    cin >> s;
    int o = count(s.begin(), s.end(), 'o');
    int n = count(s.begin(), s.end(), 'n');
    int e = count(s.begin(), s.end(), 'e');
    int minOneOccurrence = min(o, min(n, e));
    // cout << minOneOccurrence << endl;
    int z = count(s.begin(), s.end(), 'z');
    int r = count(s.begin(), s.end(), 'r');

    int minZeroOccurence = min(z, min(r, min((e - minOneOccurrence), (o - minOneOccurrence))));
    // cout << minZeroOccurence << endl;
    for (int i = 0; i < minOneOccurrence; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < minZeroOccurence; i++)
    {
        cout << "0 ";
    }

    return 0;
}