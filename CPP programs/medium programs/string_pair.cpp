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
    string hundred = "one hundred";
    string correct_hundred = "hundred";

    for (int i = 0; i < total_items; i++)
    {
        cin >> item;
        v.push_back(item);
        string s;
        s = convertToWords(item);
        if (hundred.compare(s))
        {
            // cout << "equal" << endl;
            s.assign(correct_hundred);
        }
        for (int i = 0; s[i] != '\0'; ++i)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowels_count++;
            }
        }
    }
    // cout << vowels_count << endl;
    // cout << "11111111111111111" << endl;
    int pairs_count = 0;
    int vector_size = v.size();
    for (int i = 0; i < vector_size; i++)
    {
        // cout << "2222222222222222222222" << endl;
        for (int j = i + 1; j < vector_size; j++)
        {
            // cout << "33333333333333333" << endl;
            if (v[i] + v[j] == vowels_count)
            {
                pairs_count++;
            }
        }
    }
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