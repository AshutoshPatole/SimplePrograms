#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator iter;
    int item;
    int choice;
    while (1)
    {
        cout <<"==================================" <<  endl;
        cout << "Vector Operations " << endl;
        cout << "1.Insert Element into the Vector" << endl;
        cout << "2.Delete Last Element of the Vector" << endl;
        cout << "3.Size of the Vector" << endl;
        cout << "4.Display by Index" << endl;
        cout << "5.Dislplay by Iterator" << endl;
        cout << "6.Clear the Vector" << endl;
        cout << "7.Exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "enter the item to insert : ";
            cin >> item;
            v.push_back(item);
            break;
        case 2:
            cout << "Delete Last Element Inserted:" << endl;
            v.pop_back();
            break;
        case 3:
            cout << "Size of Vector: ";
            cout << v.size() << endl;
            break;
        case 4:
            cout << "Displaying Vector by Index: ";
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            break;
        case 5:
            cout << "Displaying Vector by Iterator: ";
            for (iter = v.begin(); iter != v.end(); iter++)
            {
                cout << *iter << " ";
            }
            cout << endl;
            break;
        case 6:
            v.clear();
            cout << "Vector Cleared" << endl;
            break;
        case 7:
            exit(1);
            break;
        default:
            cout << "Wrong Choice" << endl;
        }
    }
}