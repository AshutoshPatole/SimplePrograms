/// problem link => https://codeforces.com/problemset/problem/155/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int performance;
    vector<long int> v;
    while (test_cases--)
    {
        cin >> performance;
        v.push_back(performance);
    }
    int record = 0;
    int max = v[0];
    int min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            record++;
        }
        if (v[i] < min)
        {
            min = v[i];
            record++;
        }
    }
    cout << record;
    return 0;
}