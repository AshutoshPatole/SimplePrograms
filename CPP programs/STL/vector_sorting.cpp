#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int total_nums;
    cout << "enter total numbers of elements : ";
    cin >> total_nums;
    cout << endl;
    int input;
    for (int i = 0; i < total_nums; ++i)
    {
        cin >> input;
        numbers.push_back(input);
    }
    cout << "Sorted array is ==> ";
    sort(numbers.begin(), numbers.end());
    for (int x : numbers)
    {
        cout << x << " ";
    }
    return 0;
}
