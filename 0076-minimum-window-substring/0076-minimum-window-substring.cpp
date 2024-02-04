class Solution {
public:
    string minWindow(string s, string t) {
    
        int n = s.size();
        
        map<int,int> freq, curr;
        
        for(auto& ele : t)
        {
            ++freq[ele];
        }
        
        string ans;
        
        int i = 0, j = 0;
        
        while(j < n)
        {
            ++curr[s[j]];
            
            bool ok = true;
            
            for(auto&[ch, f] : freq)
            {
                if(curr[ch] < f)
                {
                    ok = false;
                    break;
                }
            }
            
            if(ok)
            {
               while(true)
               {
                   if(freq.find(s[i]) == freq.end())
                   {
                       --curr[s[i]];
                        ++i;
                   }
                   else if(curr[s[i]] > freq[s[i]])
                   {
                       --curr[s[i]];
                       ++i;
                   }
                   else
                       break;
                   
               }
                
                if(ans.empty())
                {
                    ans = s.substr(i, j - i + 1);
                }
                else{
                    string curr = s.substr(i, j - i + 1);
                    if(curr.size() < ans.size())
                    {
                        ans = curr;
                    }
                }
            }
            ++j;
        }
        
        
        
        return ans;
    }
};