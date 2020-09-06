#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.insert(v.begin(), s[i]);
    }
    if(v.size() %2 == 0){

        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    



    // string distinct;
    // // Akshayah => A K S H A Y A H
    // // distinct => A K S H Y \0
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (distinct.find(s[i]) != string::npos)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         // char illa
    //         distinct += s[i];
    //     }
    // }
    // if (distinct.size() % 2 == 0)
    // {
    //     cout << "CHAT WITH HER!";
    // }
    // else
    // {
    //     cout << "IGNORE HIM!";
    // }

    return 0;
}