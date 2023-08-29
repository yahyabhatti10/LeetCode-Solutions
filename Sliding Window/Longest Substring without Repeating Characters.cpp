#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        map<char,int> subString;
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right!=s.size())
        {
            if (subString.find(s[right]) == subString.end())
            {
                subString[s[right]] = 1;
                right++;
            }
            else if (subString.find(s[right]) != subString.end())
            {
                
                maxLength = max(int(subString.size()), maxLength);
                subString.erase(s[left]);
                left = left + 1;
                
            }
        }
        maxLength = max(int(subString.size()), maxLength);
        return maxLength;
    }
};
int main()
{
    Solution s1;
    string s = " ";
    s1.lengthOfLongestSubstring(s);
	return 0;
}