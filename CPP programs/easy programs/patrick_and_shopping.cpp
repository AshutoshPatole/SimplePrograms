/// problem link => https://codeforces.com/problemset/problem/599/A
#include <iostream>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int c1, c2, c3, c4;
    c1 = c2 = c3 = c4 = 0;
    c1 = d1 + d2 + d3;
    c2 = d1 + d1 + d2 + d2;
    c3 = d1 + d3 + d3 + d1;
    c4 = d2 + d3 + d3 + d2;
    cout << min(c1, min(c2, min(c3, c4)));
    return 0;
}