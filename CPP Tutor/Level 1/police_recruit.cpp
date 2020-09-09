#include <iostream>

using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    int free_police = 0;
    int crime_unseen = 0;
    while (test_cases--)
    {
        int event;
        cin >> event;
        if (event == -1)
        {
            if (free_police == 0)
            {
                crime_unseen++;
            }
            else
            {
                free_police--;
            }
        }
        else
        {
            free_police += event;
        }
    }
    cout << crime_unseen;
    return 0;
}