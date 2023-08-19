#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Solution using Brute Force Technique
    bool containsDuplicate(vector<int>& nums)
    {
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            for (auto j = i + 1; j != nums.end(); ++j)
            {
                if (*i == *j)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s1;
    vector<int> nums{};
    cout<<s1.containsDuplicate(nums)<<endl;
    return 0;
}