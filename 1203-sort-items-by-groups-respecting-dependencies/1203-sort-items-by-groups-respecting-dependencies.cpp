class Solution {
    
private:
    vector<int> topologicalSort(vector<int> adj[] , int n)
    {
        vector<int> indegree(n+1, 0);
        
        for(int i =0 ; i < n; ++i)
        {
            for(auto& itr : adj[i])
                ++indegree[itr];
        }
        
        queue<int> q;
        
        vector<int> topo;
        
        for(int i = 0 ; i < n; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int currNode = q.front();
            q.pop();
            
            topo.push_back(currNode);
            
            for(auto& itr : adj[currNode])
            {
                --indegree[itr];
                
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        
        return topo;
    }
    
public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        
        // JAI SHREE RAM
        
        for(int i = 0; i < n; ++i)
        {
            if(group[i] == -1)
                group[i] = m++;
        }
        
        vector<int> itemsGraph[n+1], groupGraph[m+1];
        
        for(int i = 0; i < n; ++i)
        {
            for(auto& prev :  beforeItems[i])
            {
                itemsGraph[prev].push_back(i);
                
                if(group[i] != group[prev])
                {
                    int prevItemGroup = group[prev];
                    int currItemGroup = group[i];
                    
                    groupGraph[prevItemGroup].push_back(currItemGroup);
                }
            }
        }
        
        vector<int> itemsTopologicalOrdering = topologicalSort(itemsGraph, n);
        
        vector<int> groupsTopologicalOrdering = topologicalSort(groupGraph, m);
        
        unordered_map<int, vector<int>> groupToItemOrder;
        
        for(auto& item :  itemsTopologicalOrdering)
        {
            int itemGroup = group[item];
            
            groupToItemOrder[itemGroup].push_back(item);
            
        }
        
        vector<int> ans;
        
        for(auto& group : groupsTopologicalOrdering)
        {
            ans.insert(ans.end(), groupToItemOrder[group].begin(), groupToItemOrder[group].end());
        }
        
        if(ans.size() == n)
            return ans;
        return {};
    }
};