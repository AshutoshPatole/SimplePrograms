/// problem link =>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }
    int b = 0;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        int count = 1;

        while (a[i] == a[i + 1])
        {
            count++;
            i++;
            b = a[i];
        }
        if (count % 2 != 0)
        {
            ans += b;
        }
        cout << count << " " << ans << endl;
    }

    return 0;
}