/// problem link =>https://codeforces.com/contest/1454/problem/A
#include <iostream>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int num;
        cin >> num;
        int v[num];
        for (int i = 0; i < num; i++)
        {
            cout << (i + 1) % num + 1 << " ";
        }
       
        cout << "\n";
    }

    return 0;
}