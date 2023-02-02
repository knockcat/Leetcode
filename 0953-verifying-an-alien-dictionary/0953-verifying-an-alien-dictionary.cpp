class Solution {
public:
    
    bool helper(string& a, string& b, map<char,int>& mp)
    {
        int i = 0, j = 0;
        
        while(i < a.size() and j < b.size())
        {
            if(a[i] != b[i])
            {
                if(mp[a[i]] > mp[b[i]])
                    return false;
                else
                    return true;
            }
            ++i, ++j;
        }
        if(a.size() > b.size())
            return false;
        return true;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        
        map<char,int> mp;
        for(int i = 0; i < order.size(); ++i)
            mp.insert({order[i],i+1});
        
        for(int i = 0; i < words.size()-1; ++i)
        {
            if(!helper(words[i], words[i+1], mp))
                return false;
        }
        return true;
    }
};