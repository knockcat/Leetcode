844. Backspace String Compare


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1 = "", res2 = "";
        
        int i = 0;
        
        
        while(s[i] != '\0')
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                res1 += s[i];
            else if(!res1.empty())
                res1.pop_back();
            i++;
        }
        
        i = 0;
        
         while(t[i] != '\0')
        {
            if(t[i] >= 'a' && t[i] <= 'z')
                res2 += t[i];
            else if(!res2.empty())
                res2.pop_back();
            i++;
        }
        
        if(res1.compare(res2) == 0)
            return true;
        
        return false;
    }
};