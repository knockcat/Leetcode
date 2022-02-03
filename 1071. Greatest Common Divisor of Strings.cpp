// 1071.✅ Greatest Common Divisor of Strings

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {

        string s = "";

        if (str1 + str2 != str2 + str1)
            return "";

        s = str1.substr(0, gcd(size(str1), size(str2)));

        return s;
    }
};