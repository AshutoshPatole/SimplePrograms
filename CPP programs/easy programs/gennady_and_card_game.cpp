/// problem link => https://codeforces.com/problemset/problem/1097/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string table_card;
    cin >> table_card;
    string hand_card;
    bool play = false;
    for (int i = 0; i < 5; i++)
    {
        cin >> hand_card;
        if (table_card[0] == hand_card[0] || table_card[1] == hand_card[1])
        {
            play = true;
        }
    }
    if (play)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}