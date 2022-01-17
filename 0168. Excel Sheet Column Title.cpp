//✅ 168. Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        int n = columnNumber;
        while(n)
        {
            char c = 'A' + (n-1)%26;
            result = c + result;
            n = (n-1)/26;
        }
        return result;
    }
};