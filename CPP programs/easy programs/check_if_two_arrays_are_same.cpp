#include<bits/stdc++.h>
using namespace std;

int arrays_equal(int arr1[], int arr2[], int n, int m)
{
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
}

int main()
{
    int total_items_in_first_array, total_items_in_second_array;
    cout<<"enter the total items in first and second array : ";
    cin >> total_items_in_first_array >> total_items_in_second_array;
    int first_array[total_items_in_first_array], second_array[total_items_in_second_array];
    cout<<"enter the items in first array : ";

    for (int i = 0; i < total_items_in_first_array; i++)
    {
        cin >> first_array[i];
    }
    cout<<"enter the items in second array : ";

    for (int i = 0; i < total_items_in_second_array; i++)
    {
        cin >> second_array[i];
    }
    if (total_items_in_first_array != total_items_in_second_array)
        cout << "Not Same";
    else
    {
        if (arrays_equal(first_array, second_array, total_items_in_first_array, total_items_in_second_array) == 0)
            cout << "Not Same";
        else
            cout << "Same";
    }


}