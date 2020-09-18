/// problem link => https://codeforces.com/problemset/problem/711/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int tests, flag = 0;
    cin >> tests;
    // bool available = false;
    string s, a[1000];
    for (int i = 0; i < tests; i++)
    {
        cin >> s;
        if (s[0] == 'O' && s[1] == 'O' && flag == 0)
        {
            s[0] = '+';
            s[1] = '+';
            flag = 1;
            // available = true;
        }
        else if (s[3] == 'O' && s[4] == 'O' && flag == 0)
        {
            s[3] = '+';
            s[4] = '+';
            flag = 1;
            // available = true;
        }
        a[i] = s;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < tests; i++)
        {
            cout << a[i] << endl;
        }
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}