/// problem link => http://codeforces.com/problemset/problem/236/A

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string distinct_character_string;
    for (int i = 0; i < s.size(); i++)
    {
        if (distinct_character_string.find(s[i]) != string::npos)
        {
            continue;
        }
        else
        {
            distinct_character_string += s[i];
        }
    }
    int maleOrFemale = distinct_character_string.size();
    if (maleOrFemale % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}