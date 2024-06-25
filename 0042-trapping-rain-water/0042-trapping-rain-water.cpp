class Solution {
public:
    int trap(vector<int>& height) {
     
        int n = height.size();
        
        int i = 0, j = n-1, ans = 0;
        
        int leftMax = 0, rightMax = 0;
        
        while(i < j)
        {
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);
            
            ans += min(leftMax, rightMax) - min(height[i], height[j]);
            
            if(height[i] <= height[j])
                ++i;
            else
                --j;
        }
        
        return ans;
        
    }
};