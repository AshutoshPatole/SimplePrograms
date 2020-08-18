/// problem link => http://codeforces.com/problemset/problem/116/A

#include <iostream>
using namespace std;
int main()
{
    int total_stops;
    cin >> total_stops;
    int entering_people;
    int exiting_people;
    int tram_capacity = 0;
    int total_people_inside_tram = 0;

    for (int i = 0; i < total_stops; i++)
    {
        cin >> exiting_people >> entering_people;
        total_people_inside_tram += entering_people - exiting_people;
        if (total_people_inside_tram > tram_capacity)
        {
            tram_capacity = total_people_inside_tram;
        }
        // cout << total_people_inside_tram << " " << tram_capacity << endl;
    }
    cout << tram_capacity;
    return 0;
}