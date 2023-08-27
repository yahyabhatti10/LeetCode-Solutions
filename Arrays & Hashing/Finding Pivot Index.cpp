//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) 
//    {
//        if (nums.size() == 0)
//        {
//            return -1;
//        }
//        vector<int> preSum(nums.size());
//        vector<int> postSum(nums.size());
//        preSum[0] = 0;
//        for (int i = 1; i < nums.size(); i++)
//        {
//            preSum[i] = preSum[i - 1] + nums[i-1];
//        }
//        postSum[nums.size() - 1] = 0;
//        for (int i = nums.size()-2; i >= 0; i--)
//        {
//            postSum[i] = postSum[i + 1] + nums[i + 1];
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (preSum[i] == postSum[i])
//            {
//                return i;
//            }
//        }
//        return -1;
//    }
//};
//int main()
//{
//    Solution s1;
//    vector<int> nums = { -1,-1,0,0,-1,-1 };
//    s1.pivotIndex(nums);
//	return 0;
//}