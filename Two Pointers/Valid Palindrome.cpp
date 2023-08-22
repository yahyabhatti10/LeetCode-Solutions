#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    // Solution using Two Pointer Technique
    bool isPalindrome(string s) 
    {
        auto it = remove_if(s.begin(), s.end(), [](char const& c) {return !std::isalnum(c);}); // To remove all non-alphanumeric characters from string
        s.erase(it, s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]); // Coverting all uppercase characters into lowercase
            }
        }
        int str1 = 0; // Pointer 1 (points to start of the array)
        int str2 = s.size()-1; // Pointer 2 (points to end of the array)
        while (str1 != str2)
        {
            if (s[str1] != s[str2])
            {
                return false;
            }
            str1++;
            str2--;
        }
        return true;
    }
};
int main()
{
    Solution s1;
    string s = "A man, a plan, a canal: Panama";
    s1.isPalindrome(s);
	return 0;
}