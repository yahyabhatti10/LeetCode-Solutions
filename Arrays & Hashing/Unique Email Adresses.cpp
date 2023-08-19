#include<iostream>
#include<vector>
#include <map>
using namespace std;
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        int plusIndex = NULL;  int atIndex = NULL;
        for (int i = 0; i < emails.size(); i++)
        {
            for (int j = 0; j < emails[i].size(); j++)
            {
                if (emails[i][j] == '+' && atIndex == NULL && plusIndex==NULL)
                {
                    plusIndex = j;
                    
                }
                else if (emails[i][j] == '@' && atIndex==NULL)
                {
                    atIndex = j;x
                    break;
                }
                else if (emails[i][j] == '.' && atIndex == NULL)
                {
                    emails[i].erase(emails[i].begin()+j);
                    j--;
                }
            }
            if (atIndex != NULL && plusIndex != NULL)
            {
                emails[i].erase(plusIndex, atIndex - plusIndex);
            }
            plusIndex = NULL;
            atIndex = NULL;
            
            
        }
        map<string, int> uniqueEmails;
        for (int i = 0; i < emails.size(); i++)
        {
            if (uniqueEmails.find(emails[i]) != uniqueEmails.end())
            {
                uniqueEmails[emails[i]] += 1;
            }
            else
            {
                uniqueEmails[emails[i]] = 1;
            }
        }
        return uniqueEmails.size();
        
    }
};
int main()
{
    Solution s1;
    vector<string> emails = { "test.email+alex@leetcode.com", "test.email@leetcode.com" };
    int count = s1.numUniqueEmails(emails); 
    cout << count;
	return 0;
}