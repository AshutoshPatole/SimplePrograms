/// problem link => http://codeforces.com/problemset/problem/41/A

#include <iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int flag = 0;

    int last = s2.size() - 1;
    for (int i = 0; i < s1.size(); i++)
    {
        // cout << last << " is last " << endl;
        if (s1[i] == s2[last])
        {
            // cout << s1[i] << " " << s2[last] << endl;
        }
        else
        {
            flag = 1;
            break;
        }
        last--;
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}