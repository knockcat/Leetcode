// 485.✅ Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        for(int i = 1; i<nums.size(); i++)
        {
           if(nums[i])
           {
                nums[i] += nums[i-1];
           }
            
        }
        
        return *max_element(nums.begin(),nums.end());
    }
};
    
   