/// problem link => https://codeforces.com/problemset/problem/141/A
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    string guest;
    string hosts;
    string pile_of_letters;
    cin >> guest;
    cin >> hosts;
    cin >> pile_of_letters;
    int flag = 0;
    // if the piles of letters are equal to the sum of length of both the guests and hosts letter
    if (guest.size() + hosts.size() == pile_of_letters.size())
    {
        // we are going to take one letter from pile and check the occurence of that number is equal to the
        // sum of occurence of the same character in guest and hosts
        for (int i = 0; i < pile_of_letters.size(); i++)
        {
            int count_in_pile = 0;
            int count_in_guests_and_hosts = 0;
            count_in_pile = count(pile_of_letters.begin(), pile_of_letters.end(), pile_of_letters[i]);
            count_in_guests_and_hosts = count(guest.begin(), guest.end(), pile_of_letters[i]) + count(hosts.begin(), hosts.end(), pile_of_letters[i]);

            // if the count of that particular letter is not equal to the sum of the occurence in both guests and hosts then
            // it means that one or more character is misplaced in the pile of characters
            if (count_in_pile != count_in_guests_and_hosts)
            {
                cout << "NO";
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << "YES";
        }
    }
    else
    {
        // if the length doesn't match then we simply put no
        cout << "NO";
    }

    return 0;
}