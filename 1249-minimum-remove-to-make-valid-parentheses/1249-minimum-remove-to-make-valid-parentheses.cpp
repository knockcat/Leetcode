class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        int n = s.size();
        
        stack<int> st;
        
        for(int i = 0; i < n; ++i)
        {
            if(!st.empty() and s[st.top()] == '(' and s[i] == ')')
                st.pop();
            else if(s[i] == '(' or s[i] == ')')
                st.push(i);
        }
        
        while(!st.empty())
        {
            s[st.top()] = '#';
            st.pop();
        }
        
        string ans;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] != '#')
                ans += s[i];
        }
        
        return ans;
    }
};