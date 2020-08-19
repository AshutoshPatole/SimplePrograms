/// problem link => https://codeforces.com/problemset/problem/677/A
#include <iostream>
using namespace std;
int main()
{
    int number_of_friends;
    int height_of_the_fence;
    int friends_height;
    int width_of_the_road = 0;
    cin >> number_of_friends >> height_of_the_fence;
    for (int i = 0; i < number_of_friends; i++)
    {
        cin >> friends_height;
        if (friends_height > height_of_the_fence)
        {
            width_of_the_road += 2;
        }
        else
        {
            width_of_the_road++;
        }
    }
    cout << width_of_the_road << endl;
    return 0;
}