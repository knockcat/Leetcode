class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        
        vector<int> v(n,0);
        
        vector<int> ans;
        
        int cnt = 0;
        
        for(auto itr : queries)
        {
            
            int idx = itr[0];
            int col = itr[1];
            
            if(idx > 0 and v[idx-1] == v[idx] and v[idx])
                --cnt;
            if(idx+1 < n and v[idx+1] == v[idx] and v[idx])
                --cnt;
            
            v[idx] = col;
            
            if(idx > 0 and v[idx-1] == v[idx])
                ++cnt;
            if(idx+1 < n and v[idx+1] == v[idx])
                ++cnt;
            
            ans.push_back(cnt);
        }
        
        return ans;
        
    }
    
   
};