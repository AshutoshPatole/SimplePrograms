#include <iostream>
#include <vector>
using namespace std;

long long int maximumProduct(const vector<int> &num)
{
    int largest = -1, second_largest = -1, total_items = num.size();
    for (int i = 0; i < total_items; i++)
    {
        if ((largest == 1 || (num[largest] < num[i])))
        {
            largest = i;
        }
    }
    for (int i = 0; i < total_items; i++)
    {
        if ((i != largest) && (num[second_largest] < num[i]))
        {
            second_largest = i;
        }
    }
    // cout << num[largest] << " " << num[second_largest] << endl;
    return (long long)num[largest] * num[second_largest];
}
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    long long result = maximumProduct(v);
    cout << result;
    return 0;
}