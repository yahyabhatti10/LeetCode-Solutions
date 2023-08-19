#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int> prefix(nums.size());
        vector<int> postfix(nums.size());
        vector<int> output(nums.size());
        prefix[0] = nums[0];
        for (int i = 0; i < nums.size()-1; i++)
        {
            prefix[i+1] = prefix[i] * nums[i+1];   
        }
        postfix[nums.size()-1] = nums[nums.size()-1];
        for (int i = nums.size()-1; i > 0; i--)
        {
            postfix[i - 1] = postfix[i] * nums[i - 1];
        }
        output[0] = postfix[1];
        output[nums.size() - 1] = prefix[nums.size() - 2];
        for (int i = 1; i < nums.size() - 1; i++)
        {
            output[i] = prefix[i-1] * postfix[i + 1];
        }
        prefix.~vector();
        postfix.~vector();
        return output;
        
    }
};
int main()
{
    Solution s1;
    vector<int> temp = { 1,2,3,4};
    s1.productExceptSelf(temp);
	return 0;
}