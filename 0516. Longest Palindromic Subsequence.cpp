// 516.✅ Longest Palindromic Subsequence

class Solution
{

    int LCS(string s)
    {
        string s1 = s; // initialising s1 with s

        reverse(s1.begin(), s1.end()); // reversing string for finding Longest Palindromic Subsequence

        int m = s.length();  // length of s
        int n = s1.length(); // length of s1

        int t[m + 1][n + 1]; // matrix for memoization

        for (int i = 0; i < m + 1; ++i)
        {
            for (int j = 0; j < n + 1; ++j)
            {
                if (i == 0 || j == 0) // initialising first row and first column to zero
                    t[i][j] = 0;
            }
        }

        for (int i = 1; i < m + 1; ++i)
        {
            for (int j = 1; j < n + 1; ++j)
            {
                if (s[i - 1] == s1[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
        return t[n][m]; // return LPS (Longest Palindromic Subsequence)
    }

public:
    int longestPalindromeSubseq(string s)
    {
        return LCS(s);
    }
};