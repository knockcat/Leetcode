// 1598.✅ Crawler Log Folder

class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> st;

        for (string s : logs)
        {
            if (s == "../")
            {
                if (st.size())
                    st.pop();
                else
                    continue;
            }
            else if (s == "./")
                continue;
            else
                st.push(s);
        }
        return st.size();
    }
};