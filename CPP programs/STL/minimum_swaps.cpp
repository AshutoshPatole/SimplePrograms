#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;
    int arr[1000000] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        while (arr[i] != i)
        {
            swap(arr[i], arr[arr[i]]);
            count++;
        }
    }
    cout << count;
    return 0;
}