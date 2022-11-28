**Recursion + Memoization**
​
class Solution {
public:
int helper(int n, vector<int>& dp){
if(n <= 3)
return n;
if(dp[n] != -1)
return dp[n];
int ans = n;
for(int i = 1; i*i <= n; ++i){
ans = min(ans, 1 + helper(n - (i*i), dp));
dp[n] = ans;
}
return ans;
}
int numSquares(int n) {
vector<int> dp(n+1,-1);
int ans = helper(n,dp);
return ans;
}
};