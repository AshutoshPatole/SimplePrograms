/// problem link => http://codeforces.com/problemset/problem/617/A
#include <iostream>
using namespace std;
int main()
{
    int friends_house_distance;
    cin >> friends_house_distance;
    int number_of_steps = 0;
    if (friends_house_distance <= 5)
    {
        cout << "1" << endl;
    }
    else
    {
        // number_of_steps += friends_house_distance / 5 + 1;
        if (friends_house_distance % 5 == 0)
        {
            number_of_steps += friends_house_distance / 5;
            cout << number_of_steps << endl;
        }
        else
        {
            number_of_steps += friends_house_distance / 5 + 1;
            cout << number_of_steps << endl;
        }
    }

    return 0;
}