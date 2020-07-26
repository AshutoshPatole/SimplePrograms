#include <iostream>
#include <vector>
using namespace std;

int div_counts(int n)
{
    int div_count = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            div_count++;
        }
    }
    return div_count;
}
int main()
{
    int number;
    vector<int> v;
    cout << "enter the number : ";
    cin >> number;
    cout << endl;
    int div_count = 0;
    for (int i = 1; i <= number; ++i)
    {
        if (div_counts(i) == 9)
        {
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}