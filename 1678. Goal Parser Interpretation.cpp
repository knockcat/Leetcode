// 1678.✅ Goal Parser Interpretation

class Solution
{
public:
    string interpret(string command)
    {
        string ans = "";
        for (int i = 0; i < command.length(); ++i)
        {
            if (command[i] == 'G')
                ans += "G";
            else if (command[i + 1] == ')')
            {
                ans += "o";
                i++;
            }
            else
            {
                ans += "al";
                i += 3;
            }
        }

        return ans;
    }
};