// 1108.✅ Defanging an IP Address

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string ans = "";
        for (int i = 0; i < address.length(); i++)
        {
            if (address[i] == '.')
                ans += "[.]";
            else
                ans += address[i];
        }
        return ans;
    }
};