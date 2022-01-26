// 58.✅ Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for(int i= s.length()-1; i>=0; i--)
        {
            if(s[i] == ' ' && cnt > 0)
                break;
            if(s[i] != ' ')
                cnt++;
            
        }
        
        return cnt;
    }
};

