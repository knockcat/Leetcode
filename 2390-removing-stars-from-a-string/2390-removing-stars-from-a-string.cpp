class Solution {
public:
    string removeStars(string s) {
        
        stack<char> st;
        string ans;
        
        for(auto itr : s)
        {
            if(!st.empty() and itr == '*')
                st.pop();
            else
                st.push(itr);
        }
        
        while(!st.empty())
        {
           ans += st.top();
           st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};