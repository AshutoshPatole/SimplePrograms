#include <iostream>
using namespace std;
int main()
{

    int dollar;
    cin >> dollar;
    int count = 0;
    while (dollar >= 100)
    {
        dollar -= 100;
        // 125 - 100 => 25
        count++;
    }
    while (dollar >= 20)
    {
        dollar -= 20;
        count++;
    }
    while (dollar >= 10)
    {
        dollar -= 10;

        count++;
    }
    while (dollar >= 5)
    {
        dollar -= 5;

        count++;
    }

    while (dollar > 0)
    {
        dollar--;

        count++;
    }
    cout << count;
    return 0;
}
