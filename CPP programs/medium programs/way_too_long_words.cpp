/// problem link => http://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int test_cases;
    cin >> test_cases;
    int length = 0;
    while (test_cases >= 0)
    {
        // cout << test_cases << " ";
        getline(cin, str);
        length = str.size();

        if (length > 10)
        {
            cout << str.front() << str.size() - 2 << str.back() << endl;
        }
        else
        {
            cout << str << endl;
        }
        test_cases--;
    }

    return 0;
}