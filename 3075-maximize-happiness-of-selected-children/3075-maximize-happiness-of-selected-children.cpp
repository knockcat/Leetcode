class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        int n = happiness.size();
        
        sort(happiness.rbegin(), happiness.rend());
        
        int cap = 0;
        long long ans = 0;
        
        for(int i = 0; i < n, i < k; ++i, ++cap)
        {
            if(happiness[i] - cap > 0)
                ans += (happiness[i] - cap);
        }
        
        return ans;
    }
};