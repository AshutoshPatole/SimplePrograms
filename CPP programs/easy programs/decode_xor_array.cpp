/* There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.

 

Example 1:

Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
Example 2:

Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
 

Constraints:

2 <= n <= 104
encoded.length == n - 1
0 <= encoded[i] <= 105
0 <= first <= 105
 */

#include <iostream>
#include <vector>
using namespace std;
vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> v;
    v.push_back(first);
    for (int i = 0; i < encoded.size(); i++)
    {
        v.push_back(first ^= encoded[i]);
    }
    return v;
}
int main()
{
    int sizeOfArray, first;

    // for number of elems in vector;
    cin >> sizeOfArray;
    vector<int> v(sizeOfArray);
    for (auto &it : v)
        cin >> it;
    cin >> first;
    vector<int> ans;
    ans = decode(v, first);
    for(auto it: ans) cout << it << " ";
}