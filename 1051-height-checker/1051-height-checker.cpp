class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int> copy = heights;
        
        sort(copy.begin(), copy.end());
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            cnt += (heights[i] != copy[i]);
        }
        
        return cnt;
        
    }
};