class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int start = 0, end = height.size()-1;
        
        int ans = 0;
        
        while(start < end)
        {
            int width = end - start;
            
            int area = min(height[start], height[end]) * width;
            
            ans = max(ans, area);
            
            if(height[start] < height[end])
                ++start;
            else if(height[end] < height[start])
                --end;
            else
                ++start, --end;
        }
        
        return ans;
        
    }
};