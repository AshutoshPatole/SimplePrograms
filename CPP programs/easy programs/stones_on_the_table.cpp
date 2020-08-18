/// problem link => http://codeforces.com/problemset/problem/266/A

#include <iostream>
using namespace std;
int main()
{
    int total_stones;
    cin >> total_stones;
    string stones;
    cin >> stones;
    int remove_stones = 0;

    for (int i = 0; i < stones.size(); i++)
    {
        if (stones[i] == stones[i + 1])
        {
            remove_stones++;
        }
    }
    cout << remove_stones;

    return 0;
}