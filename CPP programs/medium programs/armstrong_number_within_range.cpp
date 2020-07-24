#include <iostream>
#include <math.h>
using namespace std;
int length(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{

    int start, end;
    cout << "enter starting and ending values : ";
    cin >> start >> end;
    cout << endl;
    int armNumber = 0;
    int remainder = 0;
    for (int i = start; i <= end; i++)
    {
        int temp = 0;
        armNumber = 0;
        remainder = 0;
        temp = i;
        int power = length(temp);
        // cout << temp << "=>";
        while (temp > 0)
        {
            remainder = temp % 10;
            armNumber += pow(remainder, power);
            temp /= 10;
        }
        // cout << armNumber << " " << endl;
        if (armNumber == i)
        {
            cout << i << " ";
        }
    }
    return 0;
}