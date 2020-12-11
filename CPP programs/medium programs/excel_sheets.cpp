/* 
Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Example 1:

Input:
N = 51
Output: AY 
*/

#include <bits/stdc++.h>
using namespace std;
string ExcelColumn(int n);
string ExcelColumn(int n)
{
    n -= 1;
    string ans = "";
    ans += char('A' + n % 26);
    n /= 26;
    while (n > 0)
    {
        ans = char('A' + (n - 1) % 26) + ans;
        n = (n - 1) / 26;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ExcelColumn(n) << endl;
    }

    return 0;
}
