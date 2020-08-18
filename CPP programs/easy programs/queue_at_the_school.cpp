/// problem link => http://codeforces.com/problemset/problem/266/B

#include <iostream>
using namespace std;
int main()
{
    string queue;
    int seconds;
    int queue_length;
    cin >> queue_length >> seconds;
    cin >> queue;
    while (seconds > 0)
    {
        // cout << seconds << " left" << endl;
        for (int i = 0; i < queue.size(); i++)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                queue[i] = 'G';
                queue[i + 1] = 'B';
                i += 1;
            }
        }
        seconds--;
    }
    cout << queue << endl;

    return 0;
}