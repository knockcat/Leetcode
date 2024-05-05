using lli = long long;

class Solution {
public:
    int minCostToEqualizeArray(vector<int>& nums, int cost1, int cost2) {
        
        int n = nums.size();
        
        lli maxi = 0;
        lli mini = 1e9;
        lli ans = 1e18;
        lli sum = 0;
        const int mod = 1e9+7;
        
        for(auto& ele : nums)
        {
            maxi = max(maxi, 1LL * ele);
            mini = min(mini, 1LL * ele);
            sum += ele;
        }
        
        for(int curMax = maxi; curMax <= 2 * maxi; ++curMax)
        {
            lli total = (n * 1LL* curMax) - sum;
            lli curr = 0;
            if(2 * cost1 <= cost2)
            {
                curr = (total * cost1);
                ans = min(ans, curr);
            }
            else
            {
                lli maxDiff = curMax - mini;
                lli pair = total - maxDiff;
                
                if(pair < maxDiff)
                {
                    lli nonPair = maxDiff - pair;
                    curr = (nonPair * cost1) + (pair * cost2);
                    ans = min(ans, curr);
                    continue;
                }
                
                curr = ((total/2) * cost2) + ((total%2) * cost1);
                
                ans = min(ans, curr);
            }    
        }
        
        return ans%mod;
    }
};