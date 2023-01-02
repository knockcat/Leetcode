class Solution {
public:
    bool detectCapitalUse(string word) {
        
        vector<string> ans;
        
        stringstream ss(word);
        string ok;
        
        while(ss >> ok)
            ans.push_back(ok);
        
        for(auto itr : ans)
        {
            int caps = 0, small = 0, firstCaps = 0;
            
            if(itr[0] >= 'A' and itr[0] <= 'Z')
                firstCaps = 1;
            for(auto x : itr)
            {
                if(x >= 'a' and x <= 'z')
                    ++small;
                else
                    ++caps;
            }
            if(small == itr.size() or caps == itr.size() or (firstCaps == 1  and small == itr.size()-1))
            {
                
            }
            else
                return false;
        }
        return true;
    }
};