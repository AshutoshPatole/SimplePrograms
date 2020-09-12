/// problem link =>https://codeforces.com/problemset/problem/1371/A
#include <iostream>
using namespace std;
int main()
{

    int tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << n / 2 + 1<<endl;
        }
    }
    return 0;
}

