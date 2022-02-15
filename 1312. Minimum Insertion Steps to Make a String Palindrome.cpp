// 1312.✅ Minimum Insertion Steps to Make a String Palindrome

class Solution
{

    int LCS(string s)
    {
        string r = s; // initialising r to s;

        reverse(r.begin(), r.end()); // reverse string for finding Longest Palindromic Subsequence

        // ideally both length are same
        int m = s.length(); // length of s;
        int n = r.length(); // lenght of r

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
                if (s[i - 1] == r[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }

        // string length - lPS will give no of minimum insertions
        // we have to find out single character pair
        return s.length() - t[m][n];
    }

public:
    int minInsertions(string s)
    {
        return LCS(s);
    }
};