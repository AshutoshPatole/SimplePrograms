/// problem link => https://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int fashionable_wear = 0;
    int maximum_days = 0;
    while (a != 0 && b != 0)
    {
        a--;
        b--;
        fashionable_wear++;
    }
    // cout << a << " " << b << endl;
    while (a >= 2)
    {
        a -= 2;
        maximum_days++;
    }
    while (b >= 2)
    {
        b -= 2;
        maximum_days++;
    }

    cout << fashionable_wear << " " << maximum_days;

    return 0;
}