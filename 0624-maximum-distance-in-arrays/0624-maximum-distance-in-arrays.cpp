class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int left = arrays[0][0], right = arrays[0].back(), ans = 0;
        
        for(int i = 1; i < arrays.size(); i++)
        {
            ans = max(ans, max(abs(arrays[i][0] - right), abs(arrays[i].back() - left)));
            left = min(left, arrays[i][0]);
            right = max(right, arrays[i].back());
        }
        
        
        return ans;
    }
};