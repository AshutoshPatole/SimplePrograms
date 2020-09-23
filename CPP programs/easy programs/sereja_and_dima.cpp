/// problem link =>  https://codeforces.com/problemset/problem/381/A
#include <iostream>
using namespace std;
int main()
{

    // cin.tie(NULL);
    // ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    int arr[tests];
    for (int i = 0; i < tests; i++)
    {
        cin >> arr[i];
    }
    int sereja = 0, dima = 0, right = tests - 1,
        left = 0;
    for (int i = 0; i < tests; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[right] > arr[left])
            {
                sereja += arr[right];
                right--;
            }
            else if (arr[right] < arr[left])
            {
                sereja += arr[left];
                left++;
            }
            else
            {
                sereja += arr[left];
            }
        }
        else
        {
            if (arr[right] > arr[left])
            {
                dima += arr[right];
                right--;
            }
            else if (arr[right] < arr[left])
            {
                dima += arr[left];
                left++;
            }
            else
            {
                dima += arr[left];
            }
        }
    }
    cout << sereja << " " << dima;
    return 0;
}