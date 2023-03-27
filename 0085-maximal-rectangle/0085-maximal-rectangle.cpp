class Solution {
public:
    
    int largestRectangleInHistogram(vector<int>& heights)
    {
        int n = heights.size();
        stack<int> st;
        int ans = 0;
        
        for(int i = 0; i<=n; ++i)
        {
            while(!st.empty() and (i == n or heights[st.top()] >= heights[i]))
            {
                int height = heights[st.top()];
                st.pop();
                
                int width;
                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                
                ans = max(ans, height * width);
            }
            st.push(i);
        }
        
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        vector<int> dp(m,0);
        int maxArea = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(matrix[i][j] == '1')
                    dp[j] += 1;
                else
                    dp[j] = 0;
            }
            
            int area =  largestRectangleInHistogram(dp);
            maxArea = max(area,maxArea);
        }
        return maxArea;
    }
};