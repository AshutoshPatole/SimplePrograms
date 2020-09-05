/// problem link => https://codeforces.com/problemset/problem/427/A
#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int free_police = 0;
    int untreated = 0;

    while (test_cases--)
    {
        int input;
        cin >> input;
        if (input == -1)
        {
            if (!free_police)
            {
                untreated++;
            }
            else
            {
                free_police--;
            }
        }
        else
        {
            free_police += input;
        }
    }
    cout << untreated;
    return 0;
}
