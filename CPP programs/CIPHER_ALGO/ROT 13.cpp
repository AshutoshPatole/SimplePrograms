#include <iostream>
using namespace std;
string encryption(string s);
int main()
{

    cout << "==============================     ROT 13     ============================" << endl;
    while (true)
    {
        cout << "Enter the string : ";
        string s;
        getline(cin, s);

        int choice;
        cout << "1. Encryption \n2. Decryption\n3. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "ROT-13 ENCRYPTED TEXT ======>  " << encryption(s);
            break;
        case 2:
            cout << "ROT-13 DECRYPTED TEXT ======>  " << encryption(s);
            break;
        case 3:
            exit(0);
        default:
            break;
        }
        cout << endl;
    }
}
// ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz

string encryption(string source)
{
    string transformed;
    for (size_t i = 0; i < source.size(); ++i)
    {
        if (isalpha(source[i]))
        {
            if ((tolower(source[i]) - 'a') <= 13)
                transformed.append(1, source[i] + 13);
            else
                transformed.append(1, source[i] - 13);
        }
        else
        {
            transformed.append(1, source[i]);
        }
    }
    return transformed;
}

// string encryption(string s)
// {

//     string cipher;
//     int length = s.length();
//     for (int i = 0; i < length; ++i)
//     {
//         char c = s[i];
//         if (c >= 'a' && c <= 'z')
//         {
//             if (c >= 'z')
//             {
//                 c = c - 'z' + 'a' - 1;

//                 cipher += c + 13;
//             }
//             else
//             {
//                 cipher += c + 13;
//             }
//         }
//         else
//         {
//             if (c >= 'A' && c <= 'Z')
//             {
//                 if (c >= 'Z')
//                 {
//                     c = c - 'Z' + 'A' - 1;

//                     cipher += c - 13;
//                 }
//                 else
//                 {
//                     cipher += c - 13;
//                 }
//             }
//         }
//     }
//     return cipher;
// }