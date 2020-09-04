/// problem link => https://codeforces.com/problemset/problem/1400/A

#include <iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int n;

    while (test_cases--)
    {
        string ans;
        string s;
        cin >> n >> s;
        // getline(cin, s);
        for (int i = 0; i < s.size(); i += 2)
        {
            // cout << i << " => " << endl;
            ans += s[i];
        }
        cout << ans << endl;
        // cout << "====" << endl;
    }

    return 0;
}