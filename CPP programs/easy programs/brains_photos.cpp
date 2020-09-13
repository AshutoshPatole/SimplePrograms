/// problem link => https://codeforces.com/problemset/problem/707/A
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    char color;
    bool isColor = false;
    vector<vector<char>> v(row, vector<char>(col, 0));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> color;
            v[i][j] = color;
            if (color == 'C' || color == 'M' || color == 'Y')
            {
                isColor = true;
            }
        }
    }
    if (isColor)
    {
        cout << "#Color";
    }
    else{
        cout<<"#Black&White";
    }

    return 0;
}