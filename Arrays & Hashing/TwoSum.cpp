#include<iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    // Solution 1 using Hash Map Technique
    vector<int> twoSum(vector<int> nums, int target)
    {
        vector<int> tempVec = {};
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            
            if (temp.find(target - nums[i]) != temp.end())
            {
                tempVec = { i,temp.find(target - nums[i])->second };
                return tempVec;
            }
            else
            {
                temp[nums[i]] = i;
            }
        }
        return tempVec;
    }
    // Solution 2 using Brute Force Technique
    vector<int> twoSum(vector<int> nums, int target)
    {
        vector<int> temp = {};
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    temp = { i,j };
                    return temp;
                }
            }
        }
        return temp;
    }
};
int main()
{
    Solution s1;
    vector<int> nums{2,7,11,15};
    vector<int> tempVec = s1.twoSum(nums,9);
    return 0;
}
