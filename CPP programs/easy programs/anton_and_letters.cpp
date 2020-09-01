/// problem link => https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char> s;
    string str;
    getline(cin, str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalpha(str[i]))
        {
            s.insert(str[i]);
        }
        i++;
    }
    cout << s.size() << endl;
    return 0;
}