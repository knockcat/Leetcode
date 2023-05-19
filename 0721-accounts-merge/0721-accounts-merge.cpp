class DSU{
  
    private:
    
        vector<int> rank, parent, size;
    
    public:
    
        DSU(int n)
        {
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1, 1);
            
            for(int i = 0; i <= n; ++i)
                parent[i] = i;
        }
    
        int findParent(int u)
        {
            if(parent[u] == u)
                return u;
            
            return parent[u] = findParent(parent[u]);
        }
    
        void unionByRank(int u, int v)
        {
            int parU = findParent(u);
            int parV = findParent(v);
            
            if(parU == parV)
                return;
            
            if(rank[parU] < rank[parV])
            {
                parent[parU] = parV;
            }
            else if(rank[parV] < rank[parU])
            {
                parent[parV] = parU;
            }
            else
            {
                parent[parV] = parU;
                ++rank[parU];
            }
        }
    
        void unionBySize(int u, int v)
        {
            int parU = findParent(u);
            int parV = findParent(v);
            
            if(parU == parV)
                return;
            
            if(size[parU] < size[parV])
            {
                parent[parU] = parV;
                size[parV] += size[parU];
            }
            else
            {
                parent[parV] = parU;
                size[parU] += size[parV];
            }
        }
        
        bool isSame(int u, int v)
        {
            return findParent(u) == findParent(v);
        }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        int n = accounts.size();
        
        unordered_map<string, int> mp;
        
        DSU dsu(n);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 1; j < accounts[i].size(); ++j)
            {
                string mail = accounts[i][j];
                
                if(mp.find(mail) == mp.end())
                {
                    mp.insert({mail, i});
                }
                else
                {
                    dsu.unionBySize(i, mp[mail]);
                }
            }
        }
        
        vector<string> merge[n];
        
        for(auto itr : mp)
        {
            string mail = itr.first;
            int idx = dsu.findParent(itr.second);
            
            merge[idx].push_back(mail);
        }
        
                                    
        vector<vector<string>> ans;
                                    
        for(int i = 0; i < n; ++i)
        {
            vector<string> temp;
            
            sort(merge[i].begin(),merge[i].end());
            
            if(!merge[i].empty())
            {
                temp.push_back(accounts[i][0]);
                
                for(auto itr : merge[i])
                    temp.push_back(itr);
                
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }
};