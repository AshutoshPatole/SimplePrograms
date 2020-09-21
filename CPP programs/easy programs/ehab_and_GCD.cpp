/// problem link => https://codeforces.com/problemset/problem/1325/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int item;
        cin >> item;
        cout << "1 " << item - 1 << '\n';
    }
    return 0;
}