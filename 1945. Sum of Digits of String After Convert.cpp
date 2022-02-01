// 1945.✅ Sum of Digits of String After Convert

class Solution
{
public:
    int getLucky(string s, int k)
    {
        string temp = "";
        for (int i = 0; i < s.length(); i++)
            temp = temp + to_string(s[i] - 'a' + 1);

        int sum = 0;
        int ans = 0;

        while (k--)
        {
            for (int i = 0; i < temp.length(); i++)
            {
                sum = sum + int(temp[i] - '0');
                ans = sum;
            }
            temp.erase();
            temp = temp + to_string(sum);
            sum = 0;
        }
        return ans;
    }
};
