class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i = s.size()-1;
        int len = 0;
        
        while(i >= 0 and s[i] == ' ')
            --i;
        
        while(i >= 0 and s[i] != ' ')
            ++len, --i;
        
        return len;
        
    }
};