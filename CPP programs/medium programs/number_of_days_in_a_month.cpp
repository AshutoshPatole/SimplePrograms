#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cout << "enter month and year :" << endl;
    cin >> month >> year;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "Number of days is 31";
    else if ((month == 2) && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
    {
        cout << "Number of days is 29";
    }
    else if (month == 2)
    {
        cout << "Number of days is 28";
    }
    else
        cout << "Number of days is 30 ";
    return 0;
}