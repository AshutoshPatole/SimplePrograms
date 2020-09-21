#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);   // turn it true and see the result  
    cout << "Enter a number ";
    int num;
    // cin >> num;
    scanf("%d", &num);
    cout << "The number is " << num;

    return 0;
}