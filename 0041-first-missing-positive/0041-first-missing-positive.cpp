class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {   
            if(nums[i] <= 0)
                nums[i] = n+1;
        }
        
        for(int i = 0; i < n; ++i)
        {
           if(abs(nums[i])-1 >= 0 and abs(nums[i])-1 < n)
           {
               if(nums[abs(nums[i])-1] >= 0)
                    nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
           }
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(nums[i] >= 0)
                return i+1;
        }
        
        return n+1;
    }
};