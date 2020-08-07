#include<math.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int size_of_array;
    cout<<"Enter the total number of items : ";
    cin>>size_of_array;
    cout<<"Enter the items in sorted manner : ";
    int item;
    for (int i = 1; i <= size_of_array; ++i) {
        cin>>item;
        v.push_back(item);
    }
    int total_sum = 0;
    int total_sum_of_array = 0;
    for (int x:v) {
        total_sum_of_array += x;
    }
    total_sum = size_of_array*(size_of_array + 1) / 2;
    int total_square;
    int total_square_of_array = 0;
    for (int x:v) {
        total_square_of_array += pow(x, 2);
    }
    total_square = size_of_array * (size_of_array + 1)*(2*size_of_array + 1) / 6;
    int repeating_number = 0;
    int missing_number = 0;
    missing_number = (((total_square - total_square_of_array) / (total_sum - total_sum_of_array)) + total_sum - total_sum_of_array) / 2;
    repeating_number = total_sum_of_array - total_sum + missing_number;
    cout<<" Repeating number is " << repeating_number<<endl;
    cout<< " Missing number is "<<missing_number;

}