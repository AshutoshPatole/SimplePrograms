/// problem link => https://codeforces.com/problemset/problem/71/A
#include <iostream>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {

        string s;
        cin >> s;
        
        if (s.size() > 10)
        {
            char front;
            char back;
            int length = 0;
            front = s.front(); // to get the front character of a string
            back = s.back();   // to het the last character
            length = s.size() - 2;
            cout << front << length << back << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }

    return 0;
}