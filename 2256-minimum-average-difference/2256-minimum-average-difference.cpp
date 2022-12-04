class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n = nums.size(), ans = INT_MAX, idx;
        
        long long sumFromFront = 0, sumFromEnd = 0;
        
        for(auto itr : nums)
            sumFromEnd += itr;
        
        for(int i= 0; i<n; ++i){
            sumFromFront += nums[i];
            sumFromEnd -= nums[i];
            
            int left = sumFromFront / (i+1);
            int right = (i ==  n-1) ? 0 : sumFromEnd/(n-i-1);
            
            if(abs(left-right) < ans)
            {
                ans = abs(left - right);
                idx = i ;
            }
        }
        return idx;
    }
};