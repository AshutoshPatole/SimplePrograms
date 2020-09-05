/// problem link => https://codeforces.com/problemset/problem/1367/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        string s;
        cin >> s;
        string answer;
        for (int i = 0; i <= s.size(); i++)
        {
            if (i == 0 || i == 1)
            {
                answer += s[i];
            }
            if (i % 2 != 0 && i >= 2)
            {
                answer += s[i];
            }
        }
        // for (int i = 0; i < s.size(); i++)
        // {
        //     if (s[i] != s[i + 1])
        //     {
        //         answer += s[i];
        //     }
        // }

        cout << answer << endl;
    }

    return 0;
}