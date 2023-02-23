class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     
        int n = nums.size();   
        
        int i = 0, j = 0;
        
        long long prod = 1, cnt = 0;
        
        if(k == 0 or k == 1)
            return 0;
        
        while(j < n)
        {
            prod *= nums[j];
            
            while(prod >=  k)
            {
                prod /= nums[i++];
            }
            
            if(prod < k)
                cnt += (j - i + 1);
            
            ++j;
        }
        
        return cnt;
        
    }
};