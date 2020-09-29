/// problem link => https://codeforces.com/problemset/problem/731/A
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int min_moves = 0;
    int pointer_location = 97;
    for (int i = 0; i < s.size(); i++)
    {

        min_moves += min(abs((int(s[i]) - pointer_location)), (26 - abs((int(s[i]) - pointer_location))));
        pointer_location = int(s[i]);
        // cout << "POINTER   ==>   " << pointer_location << endl;
        // cout << "S{i}      ==>   " << int(s[i]) << endl;
    }
    cout << min_moves;
    return 0;
}