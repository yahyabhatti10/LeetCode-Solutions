#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        auto remove = nums.begin();
        for (auto i = nums.begin(); i != nums.end(); ++i)
        {
            if (*i == val)
            {
                remove = i;
                --i;
                nums.erase(remove);
                
            }
        }
        return nums.size();
    }
};
int main()
{
    Solution s1;
    vector<int> nums = { 0,1,2,2,3,0,4,2 }; 
    s1.removeElement(nums, 2);
	return 0;
}