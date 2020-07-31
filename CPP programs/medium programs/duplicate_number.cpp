// Find the duplicate in an array of N+1 integers
// assume that there is one duplicate number
// solution should be in time => O(N) and space => O(1)
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int total_items;
    int item;
    cin >> total_items;
    for (int i = 0; i < total_items; ++i)
    {
        cin >> item;
        v.push_back(item);
    }
    int tortoise = v[0];
    int hare = v[0];
    // cout << tortoise << " " << hare << endl;
    do
    {
        tortoise = v[tortoise];
        hare = v[v[hare]];
    } while (tortoise != hare);
    hare = v[0];
    while (tortoise != hare)
    {
        tortoise = v[tortoise];
        hare = v[hare];
    }
    cout << "duplicate number is : " << tortoise << endl;

    return 0;
}