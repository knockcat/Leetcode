// 22.✅ Generate Parentheses

class Solution
{
public:
    vector<string> res;
    void help(int open, int close, int n, string str)
    {
        /*if(str.length() == n*2)
        {
            res.push_back(str);
            return ;
        }*/

        if (open == n && close == n)
        {
            res.push_back(str);
            return;
        }

        if (open < n)
            help(open + 1, close, n, str + '(');
        if (close < open)
            help(open, close + 1, n, str + ')');
    }

    vector<string> generateParenthesis(int n)
    {

        help(0, 0, n, "");

        return res;
    }
};