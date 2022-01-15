242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        
        if(n1 != n2)
            return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        
        for(int i = 0; i < n1; i++)
        {
            if(s[i] != t[i])
            {
                return false;
            }
        }
        
        return true;
    }
};