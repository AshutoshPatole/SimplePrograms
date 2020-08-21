/// problem link => https://codeforces.com/problemset/problem/344/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int total;
    cin >> total;
    int a[100000];
    int count = 1;
    for (int i = 0; i < total; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < total - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}