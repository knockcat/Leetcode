// 1209.✅ Remove All Adjacent Duplicates in String II

class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        stack<pair<char, int>> st;
        string res = "";

        for (int i = 0; i < s.length(); ++i)
        {
            if (!st.empty() && st.top().first == s[i])
            {
                ++st.top().second;

                if (st.top().second == k)
                    st.pop();
            }
            else
                st.push({s[i], 1});
        }

        while (!st.empty())
        {
            for (int i = 1; i <= st.top().second; ++i)
            {
                res += st.top().first;
            }
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};