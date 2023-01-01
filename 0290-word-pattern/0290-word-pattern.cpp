class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        int count = 0;
        stringstream ss(s);  
        vector<string> words;
        string word;
        
        int n = pattern.size();
        
        while (ss >> word) 
            words.push_back(word);
            
        if(n != words.size())
            return false;
        
        unordered_map<char,string> mp1;
        unordered_map<string,bool> mp2;
        
        for(int i = 0; i<n; ++i)
        {
            char ch = pattern[i];
            
            if(mp1.find(ch) == mp1.end())
            {
                if(mp2.find(words[i]) == mp2.end())
                {
                    mp1[ch] = words[i];
                    mp2[words[i]] = true;
                }
                else
                    return false;
            }
            else
            {
                string check = mp1[ch];
                if(check != words[i])
                    return false; 
            }
        }
        
    return true;
    }
};