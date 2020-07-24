#include<iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter number : ";
    cin >> number;
    cout << endl;
    int last_digit = 0;
    int square = 0;
    square = number * number;
    last_digit = number % 10;
    int square_last_digit = 0;
    square_last_digit = square % 10;
    if(last_digit == square_last_digit){
        cout << "Automorphic number";
    }
    else
    {
        cout << "Not an automorphic number";
    }
    



    return 0;
}