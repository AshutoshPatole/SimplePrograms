/// problem link => https://codeforces.com/problemset/problem/959/A
#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    while (n > 0)
    {

        if (n % 2 == 0)
        {
            cout << "Mahmoud";
            break;
        }
        else
        {
            cout << "Ehab";
            break;

            // if (n >= 2)
            // {
            //     n -= 2;
            // }
            // else
            // {
            //     cout << "Ehab";
            //     break;
            // }
            // if (n >= 1)
            // {
            //     n -= 1;
            // }
            // else
            // {
            //     cout << "Mahmoud";
            //     break;
            // }
        }
    }
    return 0;
}
