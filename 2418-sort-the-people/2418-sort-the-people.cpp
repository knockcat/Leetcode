class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int,int>> here;
        
        for(int i = 0; i < heights.size(); ++i)
            here.push_back({heights[i], i});
        
        sort(here.rbegin(), here.rend());
        
        vector<string> ans;
        
        for(int i = 0; i < names.size(); ++i)
            ans.push_back(names[here[i].second]);
        
        return ans;
        
    }
};