#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string guest_name;
    string host_name;
    string pile_of_letters;
    cin >> guest_name >> host_name >> pile_of_letters;
    int i, j, k, flag = 0, count_val, count1, count2;
    if (guest_name.size() + host_name.size() == pile_of_letters.size())
    {
        for (i = 0; i < pile_of_letters.size(); i++)
        {
            count_val = count(pile_of_letters.begin(), pile_of_letters.end(), pile_of_letters[i]);
            // SANTACLAUS
            // DEDMOROZ
            // SANTAMOROZDEDCLAUAI
            count1 = count(guest_name.begin(), guest_name.end(), pile_of_letters[i]) + count(host_name.begin(), host_name.end(), pile_of_letters[i]);
            if (count_val == count1)
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }
    else
    {
        flag = 1;
    }

    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}