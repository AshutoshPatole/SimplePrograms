// https://www.hackerrank.com/challenges/cpp-maps/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    int number_0f_items;
    cin >> number_0f_items;
    int type_of_query;
    char name[100];
    int marks;
    for (int i = 0; i < number_0f_items; ++i)
    {
        cin >> type_of_query >> name;
        if (type_of_query == 1)
        {
            cin >> marks;
            m[name] += marks;
        }
        else if (type_of_query == 2)
        {
            m.erase(name);
        }
        else
        {
            cout << m[name] << endl;
        }
    }
    return 0;
}
