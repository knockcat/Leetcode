class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1 + str2 != str2 + str1)
            return "";
        
        return str1.substr(0, __gcd(size(str1), size(str2)));
        
    }
};