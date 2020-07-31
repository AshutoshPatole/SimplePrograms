// Sort an array of 0’s 1’s 2’s without using extra space or sorting algorithm

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int total_items;
    int item;
    cout << "enter total number of arrray : ";
    cin >> total_items;
    cout << endl;
    for (int i = 0; i < total_items; ++i)
    {
        cin >> item;
        v.push_back(item);
    }
    int low = 0;
    int mid = 0;
    int high = v.size() - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[mid], v[high]);
            high--;
        }
    }
    cout << "sorted arrray is : " << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}