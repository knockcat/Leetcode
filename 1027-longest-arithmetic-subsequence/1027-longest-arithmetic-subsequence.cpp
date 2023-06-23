class Solution {
public:

    int longestArithSeqLength(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;

            if(n <= 2)
             return n;
             
         unordered_map<int,int> dp[n+1];

         for(int i=1;i<n;i++){
             for(int j=0;j<i;j++){

                 int diff = nums[i]-nums[j];
                 int cnt = 1;

                 if(dp[j].count(diff))
                  cnt = dp[j][diff];

                  dp[i][diff] = 1 + cnt;  
                  ans = max(ans,dp[i][diff]);
             }
         }

        return ans;
    }
};