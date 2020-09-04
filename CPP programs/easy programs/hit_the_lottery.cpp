/// problem link =>  https://codeforces.com/problemset/problem/996/A

#include <iostream>
using namespace std;
int main()
{
    int dollars;
    cin >> dollars;
    int bills = 0;
    while (dollars >= 100)
    {
        dollars = dollars - 100;
        bills++;
    }
    while (dollars >= 20)
    {
        dollars = dollars - 20;
        bills++;
    }
     while (dollars >= 10)
    {
        dollars = dollars - 10;
        bills++;
    }
    while (dollars >= 5)
    {
        dollars = dollars - 5;
        bills++;
    }
    while (dollars > 0)
    {
        dollars--;
        bills++;
    }

    cout << bills << endl;

    return 0;
}