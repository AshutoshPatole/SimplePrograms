/// problem link => https://codeforces.com/problemset/problem/734/A

#include <iostream>
using namespace std;
int main()
{
    string game;
    int game_count;
    cin >> game_count;
    cin >> game;
    int anton = 0;
    int danik = 0;
    for (int i = 0; i < game.size(); i++)
    {
        if (game[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}