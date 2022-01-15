792. Number of Matching Subsequences

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map <char,vector<int>> m;
        int count = 0;
        int ind = 0;
        
        for( auto i : s)
        {
            m[i].push_back(ind++);      //char and its ocurence in vector
        }
        
        for(int i = 0; i<words.size(); i++)
        {
            string knock = words[i];
            int c = -1;   //latest value
            for(int j = 0; j<knock.size(); j++)
            {
                auto it =  upper_bound(m[knock[j]].begin(),m[knock[j]].end(),c);
                if(it == m[knock[j]].end())
                    break;
                c = *it;    //position
                if(j == knock.size() - 1)   //means string end and all character of susequnce are present
                    count++;
            }
        }
        return count;
    }
};