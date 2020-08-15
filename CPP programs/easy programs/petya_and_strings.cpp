/// problem link => https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int length = a.size();
    int result = 0;
    for (int i = 0; i < length; ++i)
    {
        if (int(a[i]) < int(b[i]))
        {
            // cout << "a is small"; // -1
            result = -1;
            break;
        }
        else
        {
            if (int(a[i]) > int(b[i]))
            {
                // cout << "b is small"; // 1
                result = 1;
                break;
            }
            else
            {
                // cout << "similar ones"; // 0
                result = 0;
            }
        }
    }

    cout << result << endl;
    return 0;
}