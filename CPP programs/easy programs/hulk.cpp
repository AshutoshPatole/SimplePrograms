/// problem link => https://codeforces.com/problemset/problem/705/A
#include <iostream>
using namespace std;
int main()
{
    int len;
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if (i != len - 1)
        {
            cout << "that ";
        }
        else
        {
            cout << "it ";
        }
    }

    return 0;
}