class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n == 1 and trust.size() == 0)
            return 1;
        
        vector<int> outDegree(n+1,0), inDegree(n+1,0);
        
        for(auto itr : trust)
        {
            ++outDegree[itr[0]];
            ++inDegree[itr[1]];
        }
        
        for(int i = 1; i<= n; ++i)
        {
            if(outDegree[i] == 0 and inDegree[i] == n-1)
                return i;
        }
        
        return -1;
        
    }
};