class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<int> st;
        
        st.push(num[0] - '0');
        
        for(int i = 1; i < num.size(); ++i)
        {
            while(!st.empty() and st.top() > (num[i] - '0') and k)
            {
                st.pop();
                k--;
            }
            
            st.push(num[i] - '0');
            if(st.size() == 1 and st.top() == 0)
                st.pop();
        }
        
        while(!st.empty() and k--)
        {
            st.pop();
        }
    
        string ans;
        
        while(!st.empty())
        {
            ans += (st.top() + '0');
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans.empty() ? "0" : ans;
        
    }
};