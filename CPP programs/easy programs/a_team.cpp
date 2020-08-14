/// problem link => https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int petya, vasya, tonya;
    int solvable_problems = 0;
    while (test_cases > 0)
    {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        if ((petya == 1 && vasya == 1) || (petya == 1 && tonya == 1) || (vasya == 1 && tonya == 1))
        {
            solvable_problems++;
        }
        // cout << test_cases << endl;
        test_cases--;
    }
    cout << solvable_problems << endl;
    return 0;
}