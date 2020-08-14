/// problem link => http://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main()
{
    int kilos;
    cin >> kilos;
    if (kilos % 2 == 0 && kilos > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}