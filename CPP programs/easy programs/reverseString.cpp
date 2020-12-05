
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rev(string s)
{
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
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    rev(s); 
    return 0;
}