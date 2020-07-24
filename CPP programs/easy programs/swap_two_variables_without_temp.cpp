#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "Swapping...." << endl;
    b = a + b;
    a = b - a;
    b = b - a;
    cout << a << " " << b << endl;
    return 0;

}