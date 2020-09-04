/// problem link => https://codeforces.com/problemset/problem/472/A

#include <iostream>
using namespace std;
// bool isPrime(int num);
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0;
    if (n % 2 == 0)
    {
        a = 8;
        b = n - 8;
    }

    else
    {
        a = 9;
        b = n - 9;
    }

    cout << a << " " << b << endl;

    return 0;
}

// bool isPrime(int num)
// {
//     bool flag = true;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             flag = false;
//             break;
//         }
//     }
//     return flag;
// }