833. Find And Replace in String


class Solution {
public:
    string findReplaceString(string s, vector<int>& indices, vector<string>& sources, vector<string>& targets)     {
        int k = indices.size();
        int n = s.size();
        vector<string> v(n);
        vector<int> v1(n);
        
        for(int i = 0; i<k ; i++)
        {
            v[indices[i]] = targets[i];
            int len = sources[i].size();
            
            string temp;
            
            for(int j = indices[i]; j<n; j++)
            {
                temp += s[j];
                if(len == temp.size())
                    break;
            }
            
            if(temp == sources[i])
                v1[indices[i]] = len;
        }
        
        string ans;
        for(int i = 0; i<n; i++)
        {
            if(v1[i] != 0)
            {
                ans += v[i];
                i += (v1[i] - 1);
            }
            else 
                ans += s[i];
        }
        return ans;
    }
};