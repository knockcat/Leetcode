class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        
        int mini = 1e9;
        long long cnt = 0, ans = 0;
        
        for(auto& ele : nums)
        {
            int xorVal = ele ^ k;
            
            if(xorVal > ele)
            {
                ++cnt;
                ans += xorVal;
            }
            else
            {
                ans += ele;
            }
            
            mini = min(mini, abs(xorVal - ele));
        }
        
        if(cnt & 1)
        {
            return ans - mini;
        }
        return ans;
    }
};