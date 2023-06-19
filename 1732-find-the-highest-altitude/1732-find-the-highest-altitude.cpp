class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int sum = 0, ans = 0;
        
        for(auto itr : gain)
        {
            sum += itr;
            ans = max(ans, sum);
        }
        
        return ans;
        
    }
};