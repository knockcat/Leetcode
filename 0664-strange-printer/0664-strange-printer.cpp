
class Solution
{
private:
    int f[100][100];
    
private:
    int dfs(const std::string& s, int l, int r)
    {
        if (l > r) return 0;
        if (f[l][r]) return f[l][r];
        f[l][r] = dfs(s, l, r - 1) + 1;
        for (int i = l; i < r; ++i)
        {
            if (s[i] == s[r])
            {
                f[l][r] = std::min(f[l][r], dfs(s, l, i) + dfs(s, i + 1, r - 1));
            }
        }
        return f[l][r];
    }
    
public:
    int strangePrinter(std::string s)
    {
        memset(f, 0, sizeof(f));
        int len = (int)s.size();
        return dfs(s, 0, len - 1);
    }
};