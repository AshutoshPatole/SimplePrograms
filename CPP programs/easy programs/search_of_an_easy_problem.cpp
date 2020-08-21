/// problem link => https://codeforces.com/problemset/problem/1030/A

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int elem;
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        v.push_back(elem);
    }
    int flag = 0;
    for (auto it : v)
    {
        if (it == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}