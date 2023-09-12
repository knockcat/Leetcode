class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();
        
        int minIdx = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxIdx = max_element(nums.begin(), nums.end()) - nums.begin();
        
        int fromFirst = max(minIdx, maxIdx) + 1;
        
        int fromLast =  n - min(minIdx, maxIdx);
        
        int bothSide = min(minIdx, maxIdx) + 1 + n - max(minIdx, maxIdx);
        
        // cout<<fromFirst << ' ' << fromLast << ' '<< bothSide <<endl;
        
        return min({fromFirst, fromLast, bothSide});
        
    }
};