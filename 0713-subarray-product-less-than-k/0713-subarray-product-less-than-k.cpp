#define ll long long int
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        ll product = 1, count = 0;
        int n = nums.size(), i = 0;
        
        if(k == 0 or k == 1) return 0;
        
        for(int j = 0; j < n; ++j)
        {
            product *= nums[j];
            
            while(product >= k)
                product /= nums[i++];
            
            count += (j-i+1);
        }
        
        return count;
    }
};