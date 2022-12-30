class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        int n = asteroids.size();
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0; i<n; ++i)
        {
            if(st.empty())
            {
                st.push(asteroids[i]);
            }
            else
            {
                if(asteroids[i] > 0)
                    st.push(asteroids[i]);
                else
                {
                    while(!st.empty() and st.top() > 0 and abs(asteroids[i]) > st.top())
                        st.pop();
                    if(!st.empty() and st.top() > 0 and st.top() == abs(asteroids[i]))
                    {
                        st.pop();
                        continue;
                    }
                    if(!st.empty() and st.top() > 0 and asteroids[i] < 0)
                        continue;
                    st.push(asteroids[i]);
                }
            }
        }
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};