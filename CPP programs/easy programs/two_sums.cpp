// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> two_sum(vector<int> nums, int target)
{
    vector<int> v;
    unordered_map<int, int> map;
    for (int i = 0; i <= nums.size(); i++)
    {
        int temp = 0;
        temp = target - nums[i];
        if (map.find(temp) != map.end())
        {
            v.push_back(map[temp]);
            v.push_back(i);
            return v;
        }

        map[nums[i]] = i;
    }
    return v;
}
int main()
{
    int number_of_elements, search_number;
    cin >> number_of_elements;
    vector<int> array(number_of_elements);
    for (auto &it : array)
        cin >> it;
    cin >> search_number;

    vector<int> result;
    result = two_sum(array, search_number);
    for (auto it : result)
        cout << it << " ";
    return 0;
}