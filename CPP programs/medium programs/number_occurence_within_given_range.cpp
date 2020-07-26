#include <iostream>
using namespace std;
int count_occurence(int r, int f)
{
    int count = 0;
    while (r > 0)
    {
        if (r % 10 == f)
        {
            count++;
        }
        r /= 10;
    }
    return count;
}
int main()
{
    int range;
    cout << "enter the range : ";
    cin >> range;
    int find;
    cout << "enter the number occurence : ";
    cin >> find;
    int count = 0;
    for (int i = 0; i <= range; ++i)
    {
        count += count_occurence(i, find);
    }
    cout << count << endl;
    return 0;
}

/// output
/// if range == 100 and find == 3
/// Total number of 3s that appear from numbers 0 to 100 are {3, 13, 23, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 43, 53, 63, 73, 83, 93}
/// count will be 20