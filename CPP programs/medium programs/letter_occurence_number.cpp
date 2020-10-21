#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {

        int count = 1;

        while (int(s[i]) == int(s[i + 1]))
        {
            count++;
            i++;

          
        }
        cout << s[i] << count;
          }

    return 0;
}