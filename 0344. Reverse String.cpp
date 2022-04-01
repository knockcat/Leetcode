// 344.✅ Reverse String

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        reverse(s.begin(), s.end());
    }
};

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        stack<char> st;

        for (auto i : s)
            st.push(i);
        s.clear();
        while (!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
    }
};

class Solution
{
public:
    void solve(vector<char> &s, int i, int j)
    {
        if (i > j)
            return;
        swap(s[i], s[j]);
        solve(s, ++i, --j);
    }

    void reverseString(vector<char> &s)
    {
        solve(s, 0, s.size() - 1);
    }
};

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
            swap(s[i++], s[j--]);
    }
};