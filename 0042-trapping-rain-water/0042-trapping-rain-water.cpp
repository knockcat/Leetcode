class Solution {
public:
    int trap(vector<int>& height) {
        
        int start = 0,end = height.size()-1;
        int ans = 0;
        int maxleft = height[start], maxright = height[end];
        while(start <= end)
        {
            maxleft = max(maxleft,height[start]);
            maxright = max(maxright,height[end]);
            
            ans += min(maxleft,maxright) - min(height[start],height[end]);
            if(height[start] < height[end])
                ++start;
            else
                --end;
        }
        
        return ans;
    }
};

