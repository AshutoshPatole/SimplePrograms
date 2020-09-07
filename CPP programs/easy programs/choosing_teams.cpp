/// probelm link => https://codeforces.com/problemset/problem/432/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int count = 0;
    for (auto &it : v)
    {
        cin >> it;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + k <= 5)
        {
            count++;
        }
        }
    cout << count / 3;

    return 0;
}