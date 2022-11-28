class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       
        vector<int> not_lost, one_lost;
        vector<vector<int>> ans;
        map<int,int> win, loss;
        int n = matches.size();
        
        for(int i = 0; i<n; ++i)
        {
            if(loss.find(matches[i][0]) == loss.end())
            {
                ++win[matches[i][0]];
            }
            
            if(win.find(matches[i][1]) == win.end())
            {
                ++loss[matches[i][1]];
            }
            else
            {
                win.erase(matches[i][1]);
                ++loss[matches[i][1]];
            }
        }
        
        for(auto itr : win)
            not_lost.push_back(itr.first);
        for(auto itr : loss)
        {
            if(itr.second == 1)
                one_lost.push_back(itr.first);
        }
        
        ans.push_back(not_lost);
        ans.push_back(one_lost);
        
        return ans;
        
    }
};