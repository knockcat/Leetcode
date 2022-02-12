// 1092.✅ Shortest Common Supersequence

class Solution
{
    string LCS(string str1, string str2, int m, int n)
    {
        // matrix for Memoization
        int t[m + 1][n + 1];

        // string for storing longest short super subsequence
        string ind = "";

        // filling dp / t Matrix

        for (int i = 0; i < m + 1; ++i)
        {
            for (int j = 0; j < n + 1; ++j)
            {
                // Initialising first row and first column of dp / t matrix to 0
                if (i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }

        for (int i = 1; i < m + 1; ++i)
        {
            for (int j = 1; j < n + 1; ++j)
            {
                if (str1[i - 1] == str2[j - 1])
                    t[i][j] = 1 + t[i - 1][j - 1];
                else
                    t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }

        // making shortest common supersubsequence
        int i = m, j = n;

        while (i > 0 && j > 0)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                // if current character in str1 and str2 are same, then
                // current character is part of LCS

                ind.push_back(str1[i - 1]); // put current character of LCS in ind
                --i;                        // reduce values of i,j
                --j;
            }

            // if current character in str1 and str2 are different

            else if (t[i][j - 1] > t[i - 1][j])
            {
                ind.push_back(str2[j - 1]); // put current character of str2 in ind
                --j;                        // reduce value of j
            }

            else
            {
                ind.push_back(str1[i - 1]); // put current character of str1 in ind
                --i;                        // reduce value of i
            }
        }

        // if str2 reaches its end,  put remaining characters of
        // str1 in ind

        while (i > 0)
        {
            ind.push_back(str1[i - 1]);
            --i;
        }

        // if str1 reaches its end, put remaining characters of
        // str2 in ind

        while (j > 0)
        {
            ind.push_back(str2[j - 1]);
            --j;
        }

        // reverse LCS as we started storing from t[m][n]
        reverse(ind.begin(), ind.end());

        // return the LCS
        return ind;
    }

public:
    string shortestCommonSupersequence(string str1, string str2)
    {

        int m = str1.length();
        int n = str2.length();

        return LCS(str1, str2, m, n);
    }
};