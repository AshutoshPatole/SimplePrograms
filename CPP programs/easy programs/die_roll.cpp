/// problem link => https://codeforces.com/problemset/problem/9/A
#include <iostream>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int y, w;
    cin >> y >> w;
    int dot = 6 - max(y, w) + 1;
    const string answers[7] = {"", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    cout << answers[dot];
    return 0;
}