
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   
    int total_nums;
    cout << "enter total numbers of elements : ";
    cin >> total_nums;
    cout << endl;
     vector<int> numbers(total_nums);
                                             //it will allocate memory for total_nums of int objects
    for (int i = 0; i < total_nums; ++i)
    {
       cin>>numbers[i];    
    }
    cout << "Sorted array is ==> ";
    sort(numbers.begin(), numbers.end());
    for (int const  &x : numbers)              //it will reduce copy of numbers again and again
    {
        cout << x << " ";
    }
    return 0;
}
