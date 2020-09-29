/// problem link => https://codeforces.com/problemset/problem/1325/B
#include <iostream>
#include <set>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tests;
    cin >> tests;
    while (tests--)
    {
        int item;
        cin >> item;
        set<int> s;
        int temp;
        for (int i = 0; i < item; i++)
        {
            cin >> temp;

            s.insert(temp);
        }
        int distinct = 0;
        cout << s.size() << '\n';
    }
    return 0;
}