class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(t.begin(), t.end());
        sort(s.begin(), s.end());
        
        int k = 0;
        
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == t[k])
                ++k;
            else
                return t[k];
        }
        
        return t.back();
    }
};