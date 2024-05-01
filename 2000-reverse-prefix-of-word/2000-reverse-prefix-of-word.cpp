class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n = word.size();
        string pref, ans;
        bool isfound = false;
        
        for(int i = 0; i < n; ++i)
        {
            if(!isfound)
                pref += word[i];
            else
                ans += word[i];
            if(word[i] == ch)
                isfound = true;
        }
        
        if(!isfound)
            return pref;
        
        reverse(pref.begin(), pref.end());
        
        return pref + ans;
        
    }
};