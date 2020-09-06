#include <iostream>
using namespace std;
int main()
{
    int n, seconds;
    string s;

    cin >> n >> seconds >> s;
    while (seconds--)
    {
        // B G G B G
        // G B G G B

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                // swap
                s[i] = 'G';
                s[i + 1] = 'B';
                i += 1;
            }
        }
    }
    cout << s;

    return 0;
}