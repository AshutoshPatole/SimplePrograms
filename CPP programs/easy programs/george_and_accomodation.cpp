/// problem link => https://codeforces.com/problemset/problem/467/A

#include <iostream>
using namespace std;
int main()
{
    int number_of_rooms;
    cin >> number_of_rooms;
    int people_already_living;
    int room_capacity;
    int can_accomodate = 0;
    for (int i = 0; i < number_of_rooms; i++)
    {
        cin >> people_already_living >> room_capacity;
        if (room_capacity - people_already_living >= 2)
        {
            can_accomodate++;
        }
    }
    cout << can_accomodate << endl;
    return 0;
}