#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string a;
    string b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int result = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (int(a[i]) > int(b[i]))
        {
            result = 1;
            break;
        }
        else
        {
            if (int(a[i]) < int(b[i]))
            {
                result = -1;
                break;
            }
            else
            {
                result = 0;
            }
        }
    }
    cout << result;

    // 200
    // 400
    // break

    // a.begin() a.end()
    return 0;
}