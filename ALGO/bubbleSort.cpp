#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int items;
    cout << "Enter the number of items in the array : ";
    cin >> items;
    vector<int> v(items);
    cout << "Enter the items one by one : ";
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                const int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    cout << "===========================================\n";
    for (int const &it : v)
        cout << it << " ";
    return 0;
}