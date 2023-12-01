class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int i = 0, j = 0;
        int n = 0, m = 0;
        
        while(i < word1.size() and j < word2.size())
        {
            if(word1[i][n] != word2[j][m])
                return false;
            
            ++n, ++m;
            
            if(n >= word1[i].size()) n = 0, ++i;
            if(m >= word2[j].size()) m = 0, ++j;
        }
        
        return (i == word1.size() and j == word2.size());
    }
};