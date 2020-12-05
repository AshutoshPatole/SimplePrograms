
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> v;

    string word = "";
    for (auto x : s)
    {
        if (x == ' ')
        {

            v.push_back(word);
            word = "";
        }
        else
        {
            word = word + x;
        }
    }

    v.push_back(word);
    // sort(v.rbegin(), v.rend());

    for (int i = v.size() -1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
   

    return 0;
}