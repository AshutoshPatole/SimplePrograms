/// problem link => https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int total_drinks;
    cin >> total_drinks;
    int drink;
    int full_drink = 0;
    float drink_proportion = 0.0;
    cout << fixed;
    cout << setprecision(12);
    for (int i = 0; i < total_drinks; i++)
    {
        cin >> drink;
        full_drink += drink;
    }
    drink_proportion = (float)full_drink / total_drinks;
    cout << drink_proportion;
    return 0;
}