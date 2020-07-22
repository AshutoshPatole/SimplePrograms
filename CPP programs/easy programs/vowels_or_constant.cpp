#include <iostream>

using namespace std;
int main()
{
    char ch;
    cout << "Enter the character ";
    cin >> ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "The entered character is vowel" << endl;
    }
    else
    {
        cout << "The entered character is constant" << endl;
    }
}