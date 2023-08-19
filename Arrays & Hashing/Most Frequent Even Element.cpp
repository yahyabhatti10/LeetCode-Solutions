#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
class Solution
{
public:
    int mostFrequentEven(vector<int>& nums)
    {
        map<int, int> numsCount;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                if (numsCount.find(nums[i]) != numsCount.end())
                    numsCount[nums[i]] += 1; // If number found in the map, incrementing it's value (Frequency)
                else
                    numsCount[nums[i]] = 1; // Else Inserting that number in the map
            }
        }
        if (numsCount.size() == 0)
            return -1;

        pair<int, int> major_freq = { NULL,0 };
        for (auto i = numsCount.begin(); i != numsCount.end(); i++)
        {
            if (i->second > major_freq.second) // If Value (Frequency) is greater than Majority Element Frequency
            {
                major_freq.first = i->first; // Majority Element
                major_freq.second = i->second; // Frequency of that element
            }
        }
        return major_freq.first;
    }
};
int main()
{
    Solution s1;
    vector<int> nums = { 0,1,2,2,4,4,1 };
    s1.mostFrequentEven(nums);
    return 0;
}