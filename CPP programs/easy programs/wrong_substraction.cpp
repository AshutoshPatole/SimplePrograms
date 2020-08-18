/// problem link => http://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;
    while (k--)
    {
        int remainder = n % 10;
        if (remainder == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    cout << n << endl;
    return 0;
}