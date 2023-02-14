class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        
        for(auto itr : intervals)
        {
            if(ans.empty() or ans.back()[1] < itr[0])
                ans.push_back({itr[0],itr[1]});
            else
            {
                ans.back()[1] = max(ans.back()[1],itr[1]);
            }
        }
        
        return ans;
    }
};