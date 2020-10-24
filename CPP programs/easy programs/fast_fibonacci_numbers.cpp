#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
long long fast_fibonacci(int n)
{
    vector<long long> v(n);
    long long sum = 0;
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    // cout << fibonacci(n);
    cout << fast_fibonacci(n);

    return 0;
}