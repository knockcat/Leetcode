class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        int leftMax = 0, rightMax = 0;
        
        int ans = 0, i = 0, j = n-1;
        
        while(i < j)
        {
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);
            
            if(height[i] <= height[j])
            {
                ans += min(leftMax, rightMax) - height[i++];
            }
            else
            {
                ans += min(leftMax, rightMax) - height[j--];
            }
        }
        
        return ans;
    }
};