class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(auto itr : s)
        {
            if(itr == '(' or itr == '{' or itr == '[')
                st.push(itr);
            else if(!st.empty())
            {
                if(st.top() == '(' and itr != ')')
                   return false;
                if(st.top() == '{' and itr != '}')
                   return false;
                if(st.top() == '[' and itr != ']')
                   return false;
                st.pop();
            }
            else
                   return false;
        }
                   
        return st.empty();
        
    }
};