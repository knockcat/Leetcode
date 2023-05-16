class Solution {

private:
    
    void dfs(string word, vector<string>& seq)
    {
        if(word == start)
        {
            reverse(seq.begin(), seq.end());
            
            ans.push_back(seq);
            
            reverse(seq.begin(), seq.end());
            
            return;
        }
        
        int steps = mp[word];
        
        for(int i = 0; i < word.size(); ++i)
        {
            char orignal = word[i];
            
            for(char ch = 'a'; ch <= 'z'; ++ch)
            {
                word[i] = ch;
                
                if(mp.find(word) != mp.end() and mp[word] + 1 == steps)
                {
                    seq.push_back(word);
                    
                    dfs(word, seq);
                    
                    seq.pop_back();
                }
            }
            
            word[i] = orignal;
        }
    }
    
    
public:
    
    unordered_map<string,int> mp;
    vector<vector<string>> ans;
    string start;
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
        start = beginWord;
        
        unordered_set<string> s(wordList.begin(), wordList.end());
        
        queue<string> q;
        
        q.push({beginWord});
        
        mp[beginWord] = 1;
        
        s.erase(beginWord);
        
        while(!q.empty())
        {
            string curr = q.front();
            
            int steps = mp[curr];
            
            q.pop();
            
            if(curr == endWord)
                break;
            
            for(int i = 0; i < curr.size(); ++i)
            {
                char orignal = curr[i];
                
                for(char ch = 'a'; ch <= 'z'; ++ch)
                {
                    curr[i] = ch;
                    
                    if(s.count(curr))
                    {
                        q.push(curr);
                        
                        s.erase(curr);
                        
                        mp[curr] = steps + 1;
                    }
                }
                
                curr[i] = orignal;
            }
        }
        
        if(mp.find(endWord) != mp.end())
        {
            vector<string> seq;
            
            seq.push_back(endWord);
            
            dfs(endWord, seq);
        }
        
        return ans;
        
    }
};