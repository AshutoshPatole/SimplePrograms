/// problem link => http://codeforces.com/problemset/problem/791/A

#include <iostream>
using namespace std;
int main()
{
    int limak_weight;
    int big_brother_weight;
    cin >> limak_weight >> big_brother_weight;
    int number_of_years_needed = 0;
    do
    {
        limak_weight *= 3;
        big_brother_weight *= 2;
        // cout << limak_weight << " " << big_brother_weight << endl;
        number_of_years_needed++;
    } while (big_brother_weight >= limak_weight);

    cout << number_of_years_needed << endl;
    return 0;
}