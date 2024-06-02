class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        set<int> curSet;
        
        int ans = INT_MAX;
        
        for(auto& ele : nums)
        {
            set<int> newSet;
            
            for(auto& vals : curSet)
            {
                newSet.insert(vals & ele);
            }
            
            newSet.insert(ele);
            
            for(auto& vals : newSet)
            {
                ans = min(ans, abs(k - vals));
            }
            
            curSet = newSet;
        }
        
        return ans;
        
    }
};