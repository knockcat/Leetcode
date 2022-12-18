class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
     
        int n = temperatures.size();
        vector<int> res(n,0);
        // next_greater decreasin stack
        
        stack<pair<int,int>> st;
        
        for(int i = 0; i<n; ++i)
        {
            while(!st.empty() and temperatures[i] > st.top().first)
            {
                pair<int,int> here = st.top();
                st.pop();
                res[here.second] = i - here.second;
            }
            st.push({temperatures[i],i});
        }
    
        return res;
    }
};