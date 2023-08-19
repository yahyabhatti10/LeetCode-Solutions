#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    // Solution 1 using Sorting Technique
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int seq = 1;
        int num = nums[0];
        vector<int> sequences;
        for (int i = 1; i < nums.size(); i++)
        {
            
            if (nums[i] == num + 1)
            {
                num = nums[i];
                seq++;
            }
            else if (nums[i] >= num + 2 || i == nums.size() - 1)
            {
                num = nums[i];
                sequences.push_back(seq);
                seq = 1;
            }
            else if (nums[i] == num)
            {
                continue;
            }
            
        }
        sequences.push_back(seq);
        sort(sequences.begin(), sequences.end());
        return sequences[sequences.size()-1];
    }
    // Solution 2 using Set Technique
    int longestConsecutive(vector<int>& nums)
    {
        set<int> sequence;
        for (int i : nums)
        {
            sequence.insert(i);
        }
        int longest = 0;
        int length;
        for (int i : sequence)
        {
            if (sequence.find(i - 1) == sequence.end())
            {
                length = 0;
                while (sequence.find(i + length) != sequence.end())
                {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }

};
int main()
{
    Solution s1;
    vector<int> nums = { 4,0,-4,-2,2,5,2,0,-8,-8,-8,-8,-1,7,4,5,5,-4,6,6,-3 };
    s1.longestConsecutive(nums);
	return 0;
}