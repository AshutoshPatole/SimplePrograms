/// problem link => https://codeforces.com/problemset/problem/703/A
#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int mishka = 0, chris = 0;
    while (test_cases--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            mishka++;
        else if (a < b)
            chris++;
        else
        {
            chris += 0;
            mishka += 0;
        }
    }

    if (mishka > chris)
        cout << "Mishka";
    else if (mishka < chris)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}