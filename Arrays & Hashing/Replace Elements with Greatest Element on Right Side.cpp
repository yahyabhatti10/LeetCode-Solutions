#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    // Solution using STL function max() - Time Complexity: O(n)
    vector<int> replaceElements(vector<int>& arr)
    {
        vector<int> temp(arr.size());
        temp[temp.size() - 1] = -1;
        for (int i = arr.size()-2; i >= 0; i--)
        {
            temp[i] = max(temp[i + 1], arr[i + 1]);
        }
        arr = temp;
        return arr;
    }

    // Solution using STL Function max_element() - Time Complexity: O(n²)
    vector<int> replaceElements(vector<int>& arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = -1;
            arr[i] = *max_element(arr.begin()+i, arr.end());
        }
        return arr;
    }
};
int main()
{
	Solution s1;
    vector<int> arr = { 17,18,5,4,6,1 };
    s1.replaceElements(arr);
	return 0;
}