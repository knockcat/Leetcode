class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n+1,1),hash(n);
        
        int ans = 1, lastIndex = 0;
        for(int i= 0; i<n; ++i)
        {
            hash[i] = i;
            for(int j = 0; j<i; ++j)
            {
               if(nums[i] > nums[j]  and dp[j] + 1 > dp[i])
               {
                    dp[i] = dp[j] + 1;
                    hash[i] = j;
               }
            }
            if(dp[i] > ans)
            {
                ans = dp[i];
                lastIndex = i;
            }         
        }
        
        vector<int> lis;
        lis.push_back(nums[lastIndex]);   
        while(hash[lastIndex] != lastIndex)
        {
            lastIndex = hash[lastIndex];
            lis.push_back(nums[lastIndex]);
        }
        
        reverse(lis.begin(),lis.end());
        for(auto itr : lis)
            cout<<itr<<" ";
        cout<<endl;
        
        return ans;
        
    }
};