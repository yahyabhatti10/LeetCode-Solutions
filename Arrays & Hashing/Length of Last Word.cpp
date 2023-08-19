#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        string lastWord;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                lastWord.push_back(s[i]);
            }
            else if ((lastWord.size() == s.size()) || i == -1)
            {
                break;
            }
            else if (s[i] == ' ' && lastWord.size() > 0)
            {
                break;
            }
        }
        return lastWord.size();
    }
};
int main()
{
    Solution s1;
    string str = "a";
    s1.lengthOfLastWord(str);
	return 0;
}