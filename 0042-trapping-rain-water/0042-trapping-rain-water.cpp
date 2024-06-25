class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        vector<int> leftMax(n, 0), rightMax(n, 0);
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            leftMax[i] = (i == 0 ? height[i] : max(height[i], leftMax[i-1]));
        }

        for(int i = n-1; i >= 0; --i)
        {
            rightMax[i] = (i == n-1 ? height[i] : max(height[i], rightMax[i+1]));
        }
        
        for(int i = 0; i < n; ++i)
        {
            int canHold = min(leftMax[i], rightMax[i]);
            ans += (canHold - height[i] > 0 ? canHold - height[i] : 0);
        }
        
        return ans;
    }
};