class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        
        vector<int> leftSmall(n), rightSmall(n);
        
        stack<int> st;
        
        for(int i = 0; i < n; ++i)
        {
            if(st.empty())
            {
                st.push(i);
                leftSmall[i] = 0;
            }
            else if(heights[st.top()] >= heights[i])
            {
                while(!st.empty() and heights[st.top()] >= heights[i])
                    st.pop();
                
                if(st.empty())
                    leftSmall[i] = 0;
                else
                    leftSmall[i] = st.top() +1;
                st.push(i);
            }
            else
            {
                leftSmall[i] = st.top() + 1;
                st.push(i);
            }
        }
        
        // for(auto itr : leftSmall)
        //     cout<<itr<<" ";
        // cout<<endl;
        
        while(!st.empty())
            st.pop();
        
        for(int i = n-1; i >= 0; --i)
        {
            if(st.empty())
            {
                st.push(i);
                rightSmall[i] = n-1;
            }
            else if(heights[st.top()] >= heights[i])
            {
                while(!st.empty() and heights[st.top()] >= heights[i])
                    st.pop();
                if(st.empty())
                    rightSmall[i] = n-1;
                else
                    rightSmall[i] = st.top() - 1;
                st.push(i);
            }
            else{
                rightSmall[i] = st.top() - 1;
                st.push(i);
            }
        }
        
        
        // for(auto itr : rightSmall)
        //     cout<<itr<<" ";
        // cout<<endl;
        
        int ans = 0;
        
        for(int i =0 ; i<n; ++i)
        {
            ans = max(ans, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
            // cout<<ans<<endl;
        }
        
        return ans;
        
    }
};