class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(k >= num.size())
            return "0";
        
        stack<char> st;
        
        int n = num.size();
        
        st.push(num[0]);
        
        for(int i = 1; i < n; ++i)
        {
            while(k > 0 and !st.empty() and st.top() > num[i])
            {
                --k;
                st.pop();
            }
            st.push(num[i]);
            
            if(st.size() == 1 and num[i] == '0')
                st.pop();
        }
        
        while(k and !st.empty())
        {
            --k;
            st.pop();
        }
        
        string res;
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        
        if(res.empty())
            return "0";
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};