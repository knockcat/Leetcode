class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left = 0, right = height.size()-1;
        int maxArea = 0;
        
        while(left < right)
        {
            int width = right - left;
            int h = min(height[left],height[right]);
            
            maxArea = max(maxArea, width*h);
            
            if(height[left] < height[right])
                ++left;
            else if(height[left] > height[right])
                --right;
            else
                ++left , --right;
        }
        return maxArea;
    }
};