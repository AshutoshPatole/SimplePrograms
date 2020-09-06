/// problem link => https://codeforces.com/problemset/problem/4/A
#include <iostream>
using namespace std;

int main()
{
    int melons;
    cin >> melons;
    if (melons % 2 == 0 && melons > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}