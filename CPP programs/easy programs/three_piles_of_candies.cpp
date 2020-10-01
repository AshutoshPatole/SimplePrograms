/// problem link =>
#include <iostream>
using namespace std;
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    while (tests--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = 0;
        sum = a + b + c;
        if (sum % 2 == 0)
        {
            cout << sum / 2 << endl;
        }
        else
        {
            cout << (sum - 1) / 2 << endl;
        }
    }
    return 0;
}