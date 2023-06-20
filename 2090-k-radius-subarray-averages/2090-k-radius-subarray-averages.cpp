class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int win = 2 * k + 1;
        
        int i = 0, j = 0, n = nums.size();
        
        vector<int> ans(n, -1);
        
        long long sum = 0;
        
        while(j < n)
        {
            sum += nums[j];
            
            if(j - i + 1 == win)
            {
                ans[j-k] = sum/win;
                
                sum -= nums[i++];
            }
            ++j;
        }
        
        return ans;
    }
};