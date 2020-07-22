#include<iostream>
using namespace std;
int main(){
    int radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;
    float area = 0.0;
    area = 3.14 * radius * radius;
    cout << "The area of the circle is " << area << endl;
}