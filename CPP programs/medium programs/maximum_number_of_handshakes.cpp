// It was Raj's first day at school.
// His teacher Anu asked the students to meet every other student in the class and to introduce about themselves.
// The teacher asked them to do handshakes when they meet each other.
// If there are n number of students in the class then find the total number of handshakes made by the students.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of students : ";
    cin >> number;
    cout << endl;
    int number_of_handshakes = 0;
    number_of_handshakes = number * (number - 1) / 2;
    cout << "Maximum number of handhshakes required " << number_of_handshakes << endl;

    return 0;
}