// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        
        for(int i = 0; i< nums.size(); i++)
        {
            for(int j = i+1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                }
            }
        }
        return sum;
    }
};