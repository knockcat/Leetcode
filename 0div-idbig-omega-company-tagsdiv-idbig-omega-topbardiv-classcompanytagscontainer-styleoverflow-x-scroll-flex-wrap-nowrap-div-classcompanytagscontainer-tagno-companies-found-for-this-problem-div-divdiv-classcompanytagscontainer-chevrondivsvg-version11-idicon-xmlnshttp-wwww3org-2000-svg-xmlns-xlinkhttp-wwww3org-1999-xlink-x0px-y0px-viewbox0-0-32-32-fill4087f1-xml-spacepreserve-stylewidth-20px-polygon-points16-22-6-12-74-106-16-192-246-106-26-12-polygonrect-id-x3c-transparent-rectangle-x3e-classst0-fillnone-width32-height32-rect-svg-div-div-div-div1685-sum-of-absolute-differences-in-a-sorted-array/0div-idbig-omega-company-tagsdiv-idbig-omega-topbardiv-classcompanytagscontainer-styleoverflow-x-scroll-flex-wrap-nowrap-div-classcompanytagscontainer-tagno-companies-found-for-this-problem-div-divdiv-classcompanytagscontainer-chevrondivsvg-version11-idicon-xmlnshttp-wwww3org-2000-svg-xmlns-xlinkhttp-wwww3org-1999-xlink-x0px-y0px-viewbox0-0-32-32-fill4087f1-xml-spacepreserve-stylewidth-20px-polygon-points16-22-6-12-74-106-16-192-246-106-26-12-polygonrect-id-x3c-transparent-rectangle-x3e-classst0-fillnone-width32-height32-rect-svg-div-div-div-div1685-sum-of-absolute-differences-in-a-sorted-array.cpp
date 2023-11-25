class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {

        int n = nums.size();
        
        vector<int> pref(n+1,0);
        
        for(int i = 1; i <= n; ++i)
            pref[i] = pref[i-1] + nums[i-1];
        
        vector<int> ans;
        
        for(int i = 1; i <= n; ++i)
        {
            long long leftSum = nums[i-1] * 1LL * i;
            long long left = leftSum - pref[i];
                                      
            long long rightSum = nums[i-1] * 1LL * (n-i);
            long long right = pref[n] - pref[i] - rightSum;
                                      
            ans.push_back(left + right);            
        }
        
        return ans;
    }
};