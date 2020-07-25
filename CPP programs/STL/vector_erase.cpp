// You are provided with a vector of integers.
// Then, you are given  queries. For the first query, you are provided with  integer, which denotes a position in the vector.
// The value at this position in the vector needs to be erased.
// The next query consists of  integers denoting a range of the positions in the vector.
// The elements which fall under that range should be removed.
// The second query is performed on the updated vector which we get after performing the first query.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int total_items;
    int del;
    int sdel;
    int edel;
    int temp;
    cout << "Enter the number of items : ";
    cin >> total_items;
    cout << endl;
    for (int i = 0; i < total_items; ++i)
    {
        cin >> temp;
        v.push_back(temp);
    }
    cout << "Enter the index of items which needs to be deleted: ";
    cin >> del;
    cout << endl;
    cout << "Enter the start and end index which needs to be deleted: ";

    cin >> sdel >> edel;
    cout << endl;
    v.erase(v.begin() + (del - 1));
    v.erase(v.begin() + (sdel - 1), v.begin() + (edel - 1));
    cout << "Length of array is ";
    cout << v.size() << endl;
    cout << "Remaining elements are : ";
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}
