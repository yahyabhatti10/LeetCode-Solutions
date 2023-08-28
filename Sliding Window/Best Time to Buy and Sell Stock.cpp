#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buyStock = 0;
        int sellStock = 1;
        int maxProfit = 0;
        int profit;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[buyStock] > prices[i])
            {
                buyStock = i;
                if (sellStock != prices.size() - 1)
                {
                    sellStock = i + 1;
                }
            }
            profit = prices[sellStock] - prices[buyStock];
            if(sellStock!=prices.size()-1)
            {
                sellStock++;
            }
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
};
int main()
{
    Solution s1;
    vector<int> prices = {1,4,2};
    s1.maxProfit(prices);
	return 0;
}