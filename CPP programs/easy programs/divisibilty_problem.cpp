/// problem link => https://codeforces.com/problemset/problem/1328/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int a, b;
    int increased;
    for (int i = 0; i < test_cases; i++)
    {
        cin >> a >> b;
        increased = 0;
        // while (a % b != 0)
        // {
        //     increased++;
        //     a += 1;
        // }    Time limit exceeds using this method for test case > 1000

        if (a % b == 0)
        {
            increased = 0;
        }
        else
        {
            int preResult = a % b;
            increased = b - preResult;
        }
        cout << increased << endl;
    }
    return 0;
}