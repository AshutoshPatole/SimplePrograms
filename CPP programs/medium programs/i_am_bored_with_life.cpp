/// problem link => https://codeforces.com/problemset/problem/822/A
#include <iostream>
using namespace std;
// int fact(int n);
// int gcd(int n1, int n2);
int main()
{

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n1, n2;
    cin >> n1 >> n2;
    int result = 1;
    // cout<<gcd(fact(n1), fact(n2));
    for (int i = 1; i <= min(n1, n2); i++)
        result *= i;
    cout<<result;
    return 0;
}

/*

25
Time: 1000 ms, memory: 0 KB
Verdict: TIME_LIMIT_EXCEEDED
999632727 11


int fact(int n)
{
    int factorial = 0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        factorial += n * fact(n - 1);
    }
    return factorial;
}

int gcd(int n1, int n2){
    // if everything divides 0
    if(n1 == 0) return n2;
    if(n2 == 0) return n1;
    // base case
    if(n1 == n2) return n1;

    if(n1>n2) return gcd(n1-n2, n2);
    return gcd(n1, n2-n1);
}
*/