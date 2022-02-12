// 583.✅ Delete Operation for Two Strings

class Solution
{

    int LCS(string word1, string word2, int m, int n)
    {
        int t[m + 1][n + 1]; // matrix for memoization

        string ind = ""; // string for storing Longest Common Subsequence

        for (int i = 0; i < m + 1; ++i)
        {
            for (int j = 0; j < n + 1; ++j)
            {
                if (i == 0 || j == 0) // initialising first row and first column of dp / t matrix
                    t[i][j] = 0;
            }
        }

        for (int i = 1; i < m + 1; ++i)
        {
            for (int j = 1; j < n + 1; ++j)
            {
                if (word1[i - 1] == word2[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }

        int i = m, j = n;

        while (i > 0 && j > 0)
        {
            // If current character in word1 and word2 are same, then
            // current character is part of LCS
            if (word1[i - 1] == word2[j - 1])
            {
                ind.push_back(word1[i - 1]); // Put current character in result
                --i;                         // reduce values of i, j
                --j;
            }

            // If not same, then find the larger of two and
            // go in the direction of larger value
            else if (t[i - 1][j] > t[i][j - 1])
                --i;
            else
                --j;
        }

        // find minimum number of deletions and insertions
        return (word1.length() - ind.length()) + (word2.length() - ind.length());
    }

public:
    int minDistance(string word1, string word2)
    {
        int m = word1.length();
        int n = word2.length();

        return LCS(word1, word2, m, n);
    }
};