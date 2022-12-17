class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto itr : tokens)
        {
            if(itr == "+" or itr == "-" or itr == "*" or itr == "/")
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(itr == "+")
                    a = b + a;
                if(itr == "-")
                    a = b - a;
                if(itr == "*")
                    a  = (long long)b * a;
                if(itr == "/")
                    a = b / a;
                st.push(a);
            }
            else
                st.push(stoi(itr));
        }
        return st.top();
    }
};


