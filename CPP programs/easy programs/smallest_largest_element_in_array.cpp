#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {


    vector<int> v;
    int total_elements;
    int item;
    cout<<"enter total items in the array : ";
    cin>>total_elements;
    for (int i = 0; i< total_elements; ++i) {
        cin>>item;
        v.push_back(item);
    }
    cout<<"the largest element is "<<  *max_element(v.begin(), v.end())<<" and the smallest element is "<< *min_element(v.begin(), v.end())<<endl;

    return 0;
}