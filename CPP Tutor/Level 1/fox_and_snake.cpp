/// https://codeforces.com/problemset/problem/510/A
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // ar[i][j]
            if (i % 2 != 0)
            {
                cout << "#";
            }
            else
            {
                // even rows
                if (i % 4 == 0)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if (j == m)
                    {

                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
        }
        cout << '\n';
    }

    return 0;
}