class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int idx = 0;
        
        for(int i = 0; i < s.size(); ++i)
        {
            if(t[idx] == s[i])
               ++idx;
            if(idx == t.size())
               return 0;
        }
        
        return t.size() - idx;
        
    }
};