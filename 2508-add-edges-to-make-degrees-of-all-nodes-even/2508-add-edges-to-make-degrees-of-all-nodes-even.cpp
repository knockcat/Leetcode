class Solution {
public:
    
    pair<int,int> removeTwo(vector<int>& odd, int one , int two)
    {
        vector<int> res;
        for(int i = 0; i<4; ++i)
        {
            if(i == one or i == two) continue;
            res.push_back(odd[i]);
        }
        return {res[0],res[1]};
    }
    
    
    bool isPossible(int n, vector<vector<int>>& edges) {
        
        vector<int> degree(n+1,0);
        set<pair<int,int>> allEdge;
        vector<int> odd;
        
        for(auto itr : edges)
        {
            ++degree[itr[0]];
            ++degree[itr[1]];
            
            allEdge.insert({itr[0],itr[1]});
            allEdge.insert({itr[1],itr[0]});
        }
        
        for(int i = 0 ; i<degree.size(); ++i)
        {
            if(degree[i] & 1)
                odd.push_back(i);
        }
        
        if(odd.size() == 0) return true;
        
        if(odd.size() > 4) return false;
        
        if(odd.size() == 2)
        {
            for(int i = 1; i<=n; ++i)
            {
                pair<int,int> edge1 = {odd[0],i};
                pair<int,int> edge2 = {odd[1],i};
                
                if(allEdge.count(edge1) == 0 and allEdge.count(edge2) == 0) return true;
            }
            return false;
        }
        
        if(odd.size() == 4)
        {
            for(int i = 1; i<4; ++i){
                pair<int,int> edge1 = {odd[0],odd[i]};
                pair<int,int> edge2 = removeTwo(odd,0,i);
                
                if(allEdge.count(edge1) == 0 and allEdge.count(edge2) == 0) return true;
            }
            return false;
        }
        
        return false;
    }
};