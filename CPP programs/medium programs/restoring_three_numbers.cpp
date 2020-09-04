/// problem link => https://codeforces.com/problemset/problem/1154/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    vector<int> numbers;
    for (int i = 0; i < 4; i++)
    {
        cin >> n;
        numbers.push_back(n);
    }
    sort(numbers.begin(), numbers.end());

    //  for (auto it : numbers)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;


    // x1 = a+b
    // x2 = a+c
    // x3 = b+c
    // x4 = a+b+c
    // from these equation we can conclude that

    // a = x4 - x3
    // b = x4 - x2
    // c = x4 - x1
   
    int a = numbers[4 - 1] - numbers[3 - 1]; // vector starts from 0 hence we have -1 in the index, the next indices are directly placed.
    int b = numbers[3] - numbers[1];
    int c = numbers[3] - numbers[0];
    cout << a << " " << b << " " << c;

    return 0;
}