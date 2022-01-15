// 997. Find the Town Judge

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trust_cnt(n,0);
        
        for(vector<int> t : trust)
        {
            trust_cnt[t[0]-1]--;    //person trust
            trust_cnt[t[1]-1]++;    //to whome t[0] is trusting
        }
        int res = -1;
        
        for(int i = 0; i<n; i++)
        {
            if(trust_cnt[i] == n-1)
                return i +1;
        }
        
        return res;
    }
};