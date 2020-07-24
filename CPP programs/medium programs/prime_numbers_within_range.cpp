#include <iostream>
using namespace std;
int main()
{
    int start, end, i, flag;
    cout << "Enter the start and end values : ";
    cin >> start >> end;
    while (start < end)
    {
        flag = 0;
        for (i = 2; i <= start / 2; ++i)
        {
            if (start % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << start << " ";
        }
        ++start;
    }
    cout << endl;
    return 0;
}
