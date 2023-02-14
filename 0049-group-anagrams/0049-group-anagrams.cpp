class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<pair<string,int> > vp;
        int n = strs.size();
        vector<vector<string> > ans;
        
        for(int i = 0; i < n; ++i)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            vp.push_back(make_pair(s,i));
        }
        
        sort(vp.begin(),vp.end());
        
        vector<string> v;
  
        for(int i = 0; i < vp.size(); ++i)
        {
            if(v.empty() or vp[i-1].first == vp[i].first)
            {
                v.push_back(strs[vp[i].second]);
            }
            else
            {
                ans.push_back(v);
                v.clear();
                v.push_back(strs[vp[i].second]);
            }
        }
        
        if(!v.empty())
            ans.push_back(v);
        
        
        return ans;
    }
};