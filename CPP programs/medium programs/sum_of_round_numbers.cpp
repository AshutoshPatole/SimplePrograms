/// problem link => https://codeforces.com/problemset/problem/1352/A

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    vector<int> answer;

    while (test_cases--)
    {
        int power = 1;
        int n;
        int remainder = 0;
        cin >> n;
        answer.clear();
        while (n > 0)
        {
            remainder = n % 10;
            if (remainder > 0)
            {
                answer.push_back(remainder * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << answer.size() << '\n';
        for (auto it : answer)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}