977. Squares of a Sorted Array


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> sorted;
        for(int i = 0; i<nums.size(); i++)
        {
            sorted.push_back(nums[i]*nums[i]);
        }
        
        sort(sorted.begin(),sorted.end());
        
        return sorted;
    }
};