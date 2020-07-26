#include <iostream>

using namespace std;

int facto(int n)
{
    int fact = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    return fact;
}

int main()
{
    int people;
    int rows;

    cout << "enter number of people : ";
    cin >> people;
    cout << "enter number of rows : ";
    cin >> rows;
    cout << endl;
    int seats = facto(people) / facto(people - rows);
    cout << "people can occupy " << seats << endl;

    return 0;
}