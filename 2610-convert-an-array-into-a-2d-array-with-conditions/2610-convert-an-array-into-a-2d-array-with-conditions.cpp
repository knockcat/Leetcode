class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
     
        map<int,int> mp;
        
        for(auto& itr : nums)
            ++mp[itr];
        
        vector<vector<int>> ans;
        
        bool ok = true;
        
        while(ok)
        {
            vector<int> currRow;
            ok = false;
            for(auto& [f, e] : mp)
            {
                if(mp[f] > 0)
                    currRow.push_back(f);
                --e;
                if(e > 0)
                    ok = true;
            }
            ans.push_back(currRow);
        }
        
        return ans;
    }
};