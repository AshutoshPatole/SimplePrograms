#include <iostream>
#include <vector>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(false);
    int n;
    cout << "Enter the number of items in the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the items one by one : ";
    for (auto &it : v)
        cin >> it;

    for (int i = 1; i < v.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (v[j] < v[j - 1])
            {
                const int temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
            }
        }
    }
    cout << "========================================\n";
    for (int const &x : v)
        cout << x << " ";
    return 0;
}