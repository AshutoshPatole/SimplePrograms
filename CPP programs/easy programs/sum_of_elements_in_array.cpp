#include<iostream>
#include<vector>

using namespace std;
int main() {
    vector<int> v;
    int total_elements;
    int item;
    int sum_of_array_elements = 0;
    cout<<"enter total items in the array : ";
    cin>>total_elements;
    for (int i = 1; i<= total_elements; ++i) {
        cin>>item;
        v.push_back(item);
    }
    for (auto it: v) {
        sum_of_array_elements += it;
    }
    cout<<"sum of elements is "<<sum_of_array_elements<<endl;

    return 0;
}