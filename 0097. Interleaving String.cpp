// 97.✅ Interleaving String

/*
Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.



Example 1:


Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false
Example 3:

Input: s1 = "", s2 = "", s3 = ""
Output: true


Constraints:

0 <= s1.length, s2.length <= 100
0 <= s3.length <= 200
s1, s2, and s3 consist of lowercase English letters.


Follow up: Could you solve it using only O(s2.length) additional memory space?
*/

// Time_Complexity : O(2^(m+n));
// Space_Complexity: O(m);

class Solution
{
public:
    unordered_map<string, bool> mem;
    bool check(string s1, string s2, string s3, int len1, int len2, int len3, int p1, int p2, int p3)
    {
        if (p3 == len3)
            return (p1 == len1 and p2 == len2) ? true : false;

        string key = to_string(p1) + "*" + to_string(p2) + "*" + to_string(p3);
        if (mem.find(key) != mem.end())
            return mem[key];

        if (p1 == len1)
            return mem[key] = s2[p2] == s3[p3] ? check(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1) : false;
        if (p2 == len2)
            return mem[key] = s1[p1] == s3[p3] ? check(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1) : false;

        bool one = false, two = false;

        if (s1[p1] == s3[p3])
            one = check(s1, s2, s3, len1, len2, len3, p1 + 1, p2, p3 + 1);
        if (s2[p2] == s3[p3])
            two = check(s1, s2, s3, len1, len2, len3, p1, p2 + 1, p3 + 1);

        return mem[key] = one or two;
    }

    bool isInterleave(string s1, string s2, string s3)
    {
        int len1 = s1.length();
        int len2 = s2.length();
        int len3 = s3.length();

        return check(s1, s2, s3, len1, len2, len3, 0, 0, 0);
    }
};