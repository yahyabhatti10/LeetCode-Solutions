#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) 
    {
        string concat = {};
        for (int i = 0; i < strs.size(); i++)
        {
            concat = concat + strs[i] + "/";
        }
        cout << concat <<endl;
        return concat;
    }
    //// Decodes a single string to a list of strings
    vector<string> decode(string& str) 
    {
        vector<string> strs = {};
        string word;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] != '/')
            {
                word.push_back(str[i]);
            }
            else if (str[i] == '/')
            {
                strs.push_back(word);
                word.clear();
            }
        }
        return strs;
    }
};
int main()
{
    Solution s1;
    vector<string> strs = {"lint","code","love","you"};
    string str = s1.encode(strs);
    s1.decode(str);


	return 0;
}