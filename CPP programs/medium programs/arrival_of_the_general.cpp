/// problem link => https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int minvalue = 100;
    int maxvalue = 0;
    int min_index = 0;
    int max_index = 0;
    int soldiers;
    cin >> soldiers;
    for (int i = 0; i < soldiers; ++i)
    {
        int height;
        cin >> height;
        if (height > maxvalue)
        {
            maxvalue = height;
            max_index = i;
        }
        if (height <= minvalue)
        {
            minvalue = height;
            min_index = i;
        }
    }
    if (max_index > min_index)
    {
        cout << (max_index - 1) + (soldiers - min_index) - 1 << endl;
    }
    else
    {
        cout << (max_index - 1) + (soldiers - min_index) << endl;
    }
    return 0;
}