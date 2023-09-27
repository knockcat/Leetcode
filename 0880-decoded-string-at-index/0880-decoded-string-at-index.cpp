class Solution {
public:
    string decodeAtIndex(string s, int k) {
        
        int n = s.size();
        
        long long totalLength = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(isalpha(s[i]))
                ++totalLength;
            else
                totalLength = totalLength * (s[i] - '0');
        }
        
        for(int i = n-1; i >= 0; --i)
        {
            k = k % totalLength;
            if(k == 0 and isalpha(s[i]))
                return string(1, s[i]);
            if(isalpha(s[i]))
                totalLength -= 1;
            else
                totalLength /= (s[i] - '0');
        }
        
        return "";
    }
};