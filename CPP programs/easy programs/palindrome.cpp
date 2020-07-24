#include <iostream>
using namespace std;

int main()
{
    int palindrome;
    cout << "Enter the number : ";
    cin >> palindrome;
    cout << endl;

    int temp = palindrome;
    int isPalindrome = 0;
    while (palindrome > 0)
    {
        isPalindrome = palindrome % 10 + isPalindrome * 10;
        palindrome = palindrome / 10;
    }
    if (isPalindrome == temp)
    {
        cout << "it is a palindrome" << endl;
    }
    else
    {
        cout << "it is not a palindrome" << endl;
    }
    return 0;
}