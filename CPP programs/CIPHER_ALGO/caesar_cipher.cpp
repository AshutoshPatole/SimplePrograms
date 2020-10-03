#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   cout << "Enter the message:\n";
   string msg;
   getline(cin, msg);
   int length, choice, key;
   cout << "Enter key: ";
   cin >> key;
   length = msg.length();
   cout<<endl;
   cout << "Enter your choice \n1. Encryption \n2. Decryption \n3. Exit\n";
   cin >> choice;
   if (choice == 1)
   {
      char ch;
      for (int i = 0; i < length; ++i)
      {
         ch = msg[i];
         if (ch >= 'a' && ch <= 'z')
         {
            ch = ch + key;
            if (ch > 'z')
            {
               ch = ch - 'z' + 'a' - 1;
            }
            msg[i] = ch;
         }
         else if (ch >= 'A' && ch <= 'Z')
         {
            ch = ch + key;
            if (ch > 'Z')
            {
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      cout << msg;
   }
   else if (choice == 2)
   {
      char ch;
      for (int i = 0; i < length; ++i)
      {
         ch = msg[i];
         if (ch >= 'a' && ch <= 'z')
         {
            ch = ch - key;
            if (ch < 'a')
            {
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
         else if (ch >= 'A' && ch <= 'Z')
         {
            ch = ch - key;
            if (ch < 'A')
            {
               ch = ch + 'Z' - 'A' + 1;
            }
            msg[i] = ch;
         }
      }
      cout << "Decrypted message: " << msg;
   }
   else if (choice == 3)
   {
      exit(0);
   }
   else
   {
      cout << "first learn to read and then run this program" << endl;
   }
}