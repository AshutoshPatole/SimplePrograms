#include <bits/stdc++.h>
using namespace std;

string ones[] = {"", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen "};

string tens[] = {"", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety "};
string numberToWords(int n, string s)
{
    string str = "";
    if (n > 19)
        str += tens[n / 10] + ones[n % 10];
    else
        str += ones[n];
    if (n)
        str += s;

    return str;
}

string convertToWords(int n)
{
    string out;

    out += numberToWords(((n / 100) % 10), "hundred ");
    out += numberToWords((n % 100), "");

    return out;
}

int main()
{
    int total_items;
    cin >> total_items;
    vector<int> v;
    int item;
    int vowels_count = 0;
    for (int i = 0; i < total_items; i++)
    {
        cin >> item;
        v.push_back(item);
        string s;
        if (item == 100)
        {
            s = "hundred";
        }
        else
        {
            s = convertToWords(item);
        }

        for (int i = 0; s[i] != '\0'; ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowels_count++;
            }
        }
        // cout << "string ===== > " << s << " " << vowels_count << endl;
    }

    int pairs_count = 0;
    int vector_size = v.size();
    // cout << "vector size   ===>   " << vector_size << endl;
    for (int i = 0; i < vector_size; i++)
    {
        for (int j = i + 1; j < vector_size; j++)
        {
            if (v[i] + v[j] == vowels_count)
            {
                pairs_count++;
            }
        }
    }
    // cout << "pairs  ==>  " << pairs_count << endl;
    if (pairs_count != 0)
    {
        cout << convertToWords(pairs_count);
    }
    else
    {
        cout << "zero";
    }

    return 0;
}