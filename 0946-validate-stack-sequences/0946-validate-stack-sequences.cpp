class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        
        stack<int> st;
        int n = pushed.size();
        int k = 0;
        
        st.push(pushed[0]);
        
        for(int i =1 ; i<n; ++i)
        {
           if(!st.empty() and st.top() != popped[k])
           {
               st.push(pushed[i]);
           }
           else
           {
               while(!st.empty() and st.top() == popped[k])
               {
                   ++k;
                   st.pop();
               }
               st.push(pushed[i]);
           }
                
        }
        
        while(!st.empty() and st.top() == popped[k])
        {
                   ++k;
                   st.pop();
        }
        
        return st.empty();
        
    }
};