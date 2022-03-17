// 1332.✅ Remove Palindromic Subsequences

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        string str = s;
        reverse(s.begin(), s.end());

        if (s == str)
            return 1;
        return 2;
    }
};

/* The trick in the Question is to realize that the string can only contain 'a' and 'b'.
   If the string is a palindrome, you can straightaway remove it which takes only 1 step.
   If it is not palindrome, then club all A's together into one palindrome, and all Bs together in another. Then remove both the palindromes    one by one which take 2 steps.
*/