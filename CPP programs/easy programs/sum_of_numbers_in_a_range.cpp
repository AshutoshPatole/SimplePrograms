#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "Enter the starting and ending values : ";
    cin >> start >> end;
    cout << endl;
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += i;
    }
    cout << "The total sum within the given range is " << sum << endl;
    return 0;
}