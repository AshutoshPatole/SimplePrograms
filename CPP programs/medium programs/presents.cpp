/// problem link => https://codeforces.com/problemset/problem/136/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int total_items;
    int item;
    cin >> total_items;
    vector<int> v(total_items + 1);
    for (int i = 1; i <= total_items; i++)
    {
        cin >> item;
        // cout << v[item] << " => " << i << endl;
        v[item] = i;
    }
    for (int i = 1; i <= total_items; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}