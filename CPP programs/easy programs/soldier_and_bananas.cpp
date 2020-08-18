/// problem link => http://codeforces.com/problemset/problem/546/A

#include <iostream>
using namespace std;
int main()
{
    int initial_price;
    int soldier_amount;
    int number_of_bananas_needed;
    cin >> initial_price >> soldier_amount >> number_of_bananas_needed;
    int amount_needed = 0;
    for (int i = 1; i <= number_of_bananas_needed; i++)
    {
        amount_needed += initial_price * i;
    }
    int amount_to_borrow = amount_needed - soldier_amount;
    if (amount_to_borrow > 0)
    {
        cout << amount_to_borrow << endl;
    }
    else
    {
        cout << "0";
    }
}