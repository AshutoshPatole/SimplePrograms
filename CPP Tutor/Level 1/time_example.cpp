#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    time_t start, end;
    int tests;
    cin >> tests;
    while (tests--)
    {
        time(&start);
        int n;
        cin >> n;
        long long int total = 0;
        // for (int i = 0; i <= n; i++)
        // {
        //     total += i;
        // }

        // for (int i = 1; i <= n; i++)
        // {
        //     total += pow(i, 2);
        // }
        total = n * (n + 1) * (2 * n + 1) / 6;
        // cout << n * (n + 1) / 2 << endl;
        cout << total << endl;
        time(&end);
        double time_taken = double(end - start);
        cout << "Time taken by program is : " << fixed
             << time_taken << setprecision(5) << " sec " << endl;
    }
    return 0;
}

// 100000000
// 1846505529396808960