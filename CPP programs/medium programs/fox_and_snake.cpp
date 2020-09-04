/// problem link => https://codeforces.com/problemset/problem/510/A

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    //getting the rows and columns
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // after observing clearly it is seen that even rows are fully written in #
            if (i % 2 != 0)
            {
                cout << "#";
            }
            // for odd rows
            else
            {
                // if the row is divisible by 4
                // then # should come at LEFT_MOST position
                // else it should come at RIGHT_MOST position
                if (i % 4 == 0)
                {
                    // checking if the column is 1 or not
                    // if it is 1 then print #
                    // else print .
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
                    // checking if the column is 1 or not
                    // if it is 1 then print #
                    // else print .
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