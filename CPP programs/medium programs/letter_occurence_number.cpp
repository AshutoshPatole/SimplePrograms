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

        while (s[i] == s[i + 1])
        {
            count++;
            i++;

            // cout << s[i] << "=>" << s[j];
        }
        cout << s[i] << count;
        // cout<<i<<"=>"<<j<<endl;
    }

    return 0;
}